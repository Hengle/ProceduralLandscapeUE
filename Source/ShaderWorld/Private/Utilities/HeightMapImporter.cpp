//Copyright Maxime Dupart 2021  https://twitter.com/Max_Dupt


#include "Utilities/HeightMapImporter.h"

#include "AssetRegistryModule.h"
#include "Misc/MessageDialog.h"
#include "Misc/FileHelper.h"
#include "Containers/Map.h"

#include "IImageWrapper.h"
#include "IImageWrapperModule.h"

#include "EngineUtils.h"

#if WITH_EDITOR
#include "DesktopPlatformModule.h"
#endif
// Sets default values
AHeightMapImporter::AHeightMapImporter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeightMapImporter::BeginPlay()
{
	Super::BeginPlay();

	bDisableDuringGame=true;
}

void AHeightMapImporter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	
}

// Called every frame
void AHeightMapImporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bDisableDuringGame)
		return;

	#if WITH_EDITOR
	if (bTriggerHeightmapImport)
	{


		bTriggerHeightmapImport = false;
		ImportHeightmap();

		UE_LOG(LogTemp, Warning, TEXT("SelectedData.Num() %d"), SelectedData.Num());

	}
	#endif

}

#if WITH_EDITOR
bool AHeightMapImporter::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AHeightMapImporter::LocateHeightmapFile()
{
	FString OpenDialogTitle = "Locate Heightmap to import (png,raw)";
	FString DefaultFileName = "";
	FString LastImportPath = HeightMapToImport;
	const TCHAR* FileTypes = nullptr;

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	TArray<FString> OpenFilenames;
	bool bOpened = DesktopPlatform->OpenFileDialog(
		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		*OpenDialogTitle,
		*LastImportPath,
		*DefaultFileName,
		FileTypes,
		EFileDialogFlags::None,
		OpenFilenames
	);

	if (OpenFilenames.Num() > 0)
		HeightMapToImport = OpenFilenames[0];
	
}

void AHeightMapImporter::Import()
{
	bTriggerHeightmapImport=true;
}



void AHeightMapImporter::ImportHeightmap()
{
	auto ExtensionOfHeightMap = FPaths::GetExtension(*HeightMapToImport, true);

	UE_LOG(LogTemp, Warning, TEXT("extension Of heightmap: %s"), *ExtensionOfHeightMap);

	FString png = TEXT(".png");
	FString pngCap = TEXT(".PNG");
	FString raw = TEXT(".raw");
	FString rawCap = TEXT(".RAW");
	
	HeightMapToImport.RemoveSpacesInline();

	if(HeightMapToImport=="" || ExtensionOfHeightMap!=png && ExtensionOfHeightMap!=pngCap && ExtensionOfHeightMap!=raw && ExtensionOfHeightMap!=rawCap)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid file path or extension"));
		return;
	}
		

	TArray<uint8> Data;

	FFileHelper::LoadFileToArray(Data, *HeightMapToImport);

	if(Data.Num()==0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Empty Data"));
		return;
	}

	if (ExtensionOfHeightMap == png || ExtensionOfHeightMap == pngCap)
	{

		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>("ImageWrapper");
		TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

		if(!ImageWrapper.IsValid())
		{
			UE_LOG(LogTemp, Warning, TEXT("invalid ImageWrapper"));
			return;
		}

		char* buf = reinterpret_cast<char*>(Data.GetData());
		unsigned int width, height = 0;
		width = (buf[16] << 24) + (buf[17] << 16) + (buf[18] << 8) + (buf[19] << 0);
		height = (buf[20] << 24) + (buf[21] << 16) + (buf[22] << 8) + (buf[23] << 0);

		HeightMapDimensionIfRaw.Y = height;
		HeightMapDimensionIfRaw.X = width;


		if(HeightMapDimensionIfRaw.Y<=0 || HeightMapDimensionIfRaw.X<=0 || HeightMapDimensionIfRaw.X>32768 || HeightMapDimensionIfRaw.Y>32768)
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid Dimension %d %d"),HeightMapDimensionIfRaw.X,HeightMapDimensionIfRaw.Y);
			return;
		}
		//UE_LOG(LogTemp, Warning, TEXT("HeightMapDimensionIfRaw.X %d HeightMapDimensionIfRaw.Y %d"),HeightMapDimensionIfRaw.X,HeightMapDimensionIfRaw.Y);

		if (!ImageWrapper->SetCompressed(Data.GetData(), Data.Num()))
		{
			UE_LOG(LogTemp, Warning, TEXT("The heightmap file cannot be read (corrupt png?)"));
			return;
		}
		else
		{
			if (ImageWrapper->GetBitDepth()!=16)
			{
				UE_LOG(LogTemp, Warning, TEXT("wrong PNG bitdepth: %d"),ImageWrapper->GetBitDepth());
				return;
			}

			//const TArray<uint8>* RawData = nullptr;
			TArray64<uint8> RawData;
			if (!ImageWrapper->GetRaw(ERGBFormat::Gray, 16, RawData))
			{

				UE_LOG(LogTemp, Warning, TEXT("The heightmap file cannot be read (corrupt png?)"));
				return;
			}
			else
			{
				Data = RawData;
			}

		}


	}
	else if (ExtensionOfHeightMap == raw || ExtensionOfHeightMap == rawCap)
	{
		if (Data.Num() <= 0
			|| Data.Num() != (HeightMapDimensionIfRaw.X * HeightMapDimensionIfRaw.Y * sizeof(uint16)))
		{
			FMessageDialog::Open(EAppMsgType::Ok, NSLOCTEXT("UnrealEd", "LandscapeImport_BadHeightmapSize", "File size does not match"));
			return;
		}
	}


	Import(HeightMapDimensionIfRaw.X, HeightMapDimensionIfRaw.Y, (uint16*)Data.GetData());
}
#endif
void AHeightMapImporter::Import(int32 VertsX, int32 VertsY, uint16* HeightData)
{
#if WITH_EDITORONLY_DATA

	for (int32 Y = 0; Y < VertsY; ++Y)
	{
		for (int32 X = 0; X < VertsX; ++X)
		{
			SelectedData.Add(FIntPoint(X, Y), HeightData[X + Y * VertsX]);
		}
	}

	SampleData(VertsX, VertsY);

#endif
}




void AHeightMapImporter::SampleData(int32 SizeX, int32 SizeY)
{
#if WITH_EDITORONLY_DATA
	HeightmapFolder.RemoveSpacesInline();
	FString PackageName = TEXT("/Game/" + (HeightmapFolder!=""? HeightmapFolder+ TEXT("/") : ""));
	//PackageName += NameOfGizmoTexture + "/";
	HeightmapName.RemoveSpacesInline();
	FString Texturename = (HeightmapName!=""? HeightmapName : TEXT("Imported_HeightMap"));
	PackageName += Texturename;
	UPackage* Package = CreatePackage(*PackageName);
	Package->FullyLoad();

	UTexture2D* NewTexture = NewObject<UTexture2D>(Package, *Texturename, RF_Public | RF_Standalone | RF_MarkAsRootSet);

	NewTexture->AddToRoot();				// This line prevents garbage collection of the texture
	NewTexture->PlatformData = new FTexturePlatformData();	// Then we initialize the PlatformData
	NewTexture->PlatformData->SizeX = HeightMapDimensionIfRaw.X;
	NewTexture->PlatformData->SizeY = HeightMapDimensionIfRaw.Y;
	//NewTexture->PlatformData->NumSlices = 1;
	NewTexture->PlatformData->SetNumSlices(1);
	NewTexture->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;
	NewTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	NewTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	NewTexture->SRGB = false;
	


	uint8* Pixels = new uint8[HeightMapDimensionIfRaw.X * HeightMapDimensionIfRaw.Y * 4];

	uint16 MaxHeight = 0;

	for (int32 Y = 0; Y < SizeY; ++Y)
	{
		for (int32 X = 0; X < SizeX; ++X)
		{

			const uint16 ConvertedHeight = (uint16)*SelectedData.Find(FIntPoint(X, Y));

			if(ConvertedHeight>MaxHeight)
				MaxHeight=ConvertedHeight;

			uint8* Converted = convertFrom16To8(ConvertedHeight);

			uint8 Part1 = Converted[0];
			uint8 Part2 = Converted[1];

			int32 curPixelIndex = ((Y * HeightMapDimensionIfRaw.X) + X);

			//B8G8R8A8
			Pixels[4 * curPixelIndex] = 0; //B
			Pixels[4 * curPixelIndex + 1] = Converted[1]; // G
			Pixels[4 * curPixelIndex + 2] = Converted[0]; // R
			Pixels[4 * curPixelIndex + 3] = 0; // A

		}
	}

	//Allocate first mipmap.
	FTexture2DMipMap* Mip = new FTexture2DMipMap();
	NewTexture->PlatformData->Mips.Empty();
	NewTexture->PlatformData->Mips.Add(Mip);
	//FTexture2DMipMap* Mip = new(NewTexture->PlatformData->Mips) FTexture2DMipMap();
	Mip->SizeX = HeightMapDimensionIfRaw.X;
	Mip->SizeY = HeightMapDimensionIfRaw.Y;

	// Lock the texture so it can be modified
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	uint8* TextureData = (uint8*)Mip->BulkData.Realloc(4 * HeightMapDimensionIfRaw.X * HeightMapDimensionIfRaw.Y);
	FMemory::Memcpy(TextureData, Pixels, sizeof(uint8) * 4 * HeightMapDimensionIfRaw.X * HeightMapDimensionIfRaw.Y);
	Mip->BulkData.Unlock();

	NewTexture->Source.Init(HeightMapDimensionIfRaw.X, HeightMapDimensionIfRaw.Y, 1, 1, ETextureSourceFormat::TSF_BGRA8, Pixels);

	NewTexture->UpdateResource();
	Package->MarkPackageDirty();
	FAssetRegistryModule::AssetCreated(NewTexture);

	FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());

	bool bSaved = UPackage::SavePackage(Package, NewTexture, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName, GError, nullptr, true, true, SAVE_NoError);

	delete[] Pixels;

	Package->MarkPackageDirty();
#endif
	return;
}


uint16 AHeightMapImporter::convertFrom8To16(uint8 dataFirst, uint8 dataSecond)
{
	uint16 dataBoth = 0x0000;

	dataBoth = dataFirst;
	dataBoth = dataBoth << 8;
	dataBoth |= dataSecond;
	return dataBoth;
}

uint8* AHeightMapImporter::convertFrom16To8(uint16 dataAll) {
	static uint8 arrayData[2] = { 0x00, 0x00 };

	*(arrayData) = (dataAll >> 8) & 0x00FF;
	arrayData[1] = dataAll & 0x00FF;
	return arrayData;
}
