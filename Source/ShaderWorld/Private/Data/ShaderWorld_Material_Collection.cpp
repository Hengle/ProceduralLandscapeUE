// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/ShaderWorld_Material_Collection.h"
#include "Engine/Texture2DArray.h"


#if WITH_EDITOR

void UShaderWorld_Material_Collection::UpdateArrays()
{
	if(Albedo_Array && Normal_Array && PackedMaps_Array && Materials.Num()>0)
	{
		if (UShaderWorld_Material* Mat = Materials[0])
			Materials.RemoveAt(0);

		/*
		for (int i = Materials.Num() - 1; i >= 0; i--)
		{
			UShaderWorld_Material* Mat = Materials[i];
			
			if (!Mat)
				Materials.RemoveAt(i);
			
		}
		*/

		/*
		if(Materials.Num()>0)
		{		
			for (int i = Materials.Num() - 1; i >= 0; i--)
			{
				UShaderWorld_Material* Mat = Materials[i];

				if (!Mat || Mat && !Mat->IsValidMaterial())
					Materials.RemoveAt(i);
			}
		}
		

		Albedo_Array->SourceTextures.Empty();
		Normal_Array->SourceTextures.Empty();
		PackedMaps_Array->SourceTextures.Empty();


		for(int i=0; i<Materials.Num();i++)
		{
			
			UShaderWorld_Material* Mat = Materials[i];

			if(Materials.Num()>0)
			{
				if(!Mat->IsCompatibleWith(Materials[0]))
				{
					UE_LOG(LogTemp,Warning,TEXT("Material at index %d is not compatible with material at index 0, not adding it to array"),i);
					continue;
				}
				
			}
			
			Albedo_Array->SourceTextures.Add(Mat->Albedo);
			Normal_Array->SourceTextures.Add(Mat->NormalMap);
			PackedMaps_Array->SourceTextures.Add(Mat->PackedMaps);
			
			if (Albedo_Array->SourceTextures.Num() == 1)
			{
				Albedo_Array->UpdateSourceFromSourceTextures(true);
				Normal_Array->UpdateSourceFromSourceTextures(true);
				PackedMaps_Array->UpdateSourceFromSourceTextures(true);
			}
			// Couldn't add to non-empty array (Error msg logged).
			else if (Albedo_Array->UpdateSourceFromSourceTextures(false) == false || 
					 Normal_Array->UpdateSourceFromSourceTextures(false) == false ||
					 PackedMaps_Array->UpdateSourceFromSourceTextures(false) == false)
			{
				int32 ChangedIndex = i - 1;
				int32 LastIndex = Albedo_Array->SourceTextures.Num() - 1;

				// But don't remove an empty texture, only an incompatible one.
				if(Albedo_Array->SourceTextures[LastIndex] == nullptr || Normal_Array->SourceTextures[LastIndex] == nullptr|| PackedMaps_Array->SourceTextures[LastIndex] == nullptr)
				{
					UE_LOG(LogTemp,Warning,TEXT("Error during array creation, nullptr texture"));
					break;
				}
				if (ChangedIndex == LastIndex)
				{
					Albedo_Array->SourceTextures.RemoveAt(LastIndex);
					Normal_Array->SourceTextures.RemoveAt(LastIndex);
					PackedMaps_Array->SourceTextures.RemoveAt(LastIndex);

					UE_LOG(LogTemp,Warning,TEXT("Material at index %d failed to be added to the material array"),i);
				}
			}
		}
		*/
	}

	UE_LOG(LogTemp,Warning,TEXT("!Albedo_Array || !Normal_Array || !PackedMaps_Array"));
}

void UShaderWorld_Material_Collection::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FProperty* Property = PropertyChangedEvent.MemberProperty;

	if (Property && PropertyChangedEvent.ChangeType != EPropertyChangeType::Interactive)
	{
		FString PropName = PropertyChangedEvent.Property->GetName();

		if (PropName == TEXT("Materials"))
		{
			UpdateArrays();
		}
	}


}

#endif