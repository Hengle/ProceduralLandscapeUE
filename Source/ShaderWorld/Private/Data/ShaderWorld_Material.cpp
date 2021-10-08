// Fill out your copyright notice in the Description page of Project Settings.


#include "Data/ShaderWorld_Material.h"

bool UShaderWorld_Material::IsValidMaterial()
{
	if(Albedo!=nullptr && NormalMap!=nullptr && PackedMaps!=nullptr)
	{
		if(Albedo->CompressionSettings!=TextureCompressionSettings::TC_Default || !Albedo->SRGB || !(Albedo->GetSizeX()>0 && Albedo->GetSizeY()>0))
		{
			UE_LOG(LogTemp,Warning,TEXT("NonValid Material | Albedo | CompressionSettings!=TC_Default || !SRGB || !(SizeX>0 && SizeY>0)"));
			return false;
		}
		if (NormalMap->CompressionSettings != TextureCompressionSettings::TC_Normalmap || NormalMap->SRGB || !(NormalMap->GetSizeX()>0 && NormalMap->GetSizeY()>0))
		{
			UE_LOG(LogTemp, Warning, TEXT("NonValid Material | NormalMap | CompressionSettings!=TC_Normalmap || SRGB || !(SizeX>0 && SizeY>0)"));
			return false;
		}
		if (PackedMaps->SRGB || !(PackedMaps->GetSizeX()>0 && PackedMaps->GetSizeY()>0))
		{
			UE_LOG(LogTemp, Warning, TEXT("NonValid Material | PackedMaps | SRGB || !(SizeX>0 && SizeY>0)"));
			return false;
		}

		return true;
	}
	else
	{
		UE_LOG(LogTemp,Warning,TEXT("Invalid Material NULL entry"));
	}

	

	return false;
}

bool UShaderWorld_Material::IsCompatibleWith(UShaderWorld_Material* Other)
{
	if(IsValidMaterial() && Other && Other->IsValidMaterial())
	{
		if(Albedo->GetSizeX()!=Other->Albedo->GetSizeX() || Albedo->GetSizeY()!=Other->Albedo->GetSizeY())
		{
			UE_LOG(LogTemp,Warning,TEXT("UShaderWorld_Material Albedo Dimensions are not Compatible"));
			return false;
		}

		if (NormalMap->GetSizeX() != Other->NormalMap->GetSizeX() || NormalMap->GetSizeY() != Other->NormalMap->GetSizeY())
		{
			UE_LOG(LogTemp, Warning, TEXT("UShaderWorld_Material NormalMap Dimensions are not Compatible"));
			return false;
		}

		if (PackedMaps->GetSizeX() != Other->PackedMaps->GetSizeX() || PackedMaps->GetSizeY() != Other->PackedMaps->GetSizeY())
		{
			UE_LOG(LogTemp, Warning, TEXT("UShaderWorld_Material PackedMaps Dimensions are not Compatible"));
			return false;
		}
		if(PackedMaps->CompressionSettings != Other->PackedMaps->CompressionSettings)
		{
			UE_LOG(LogTemp, Warning, TEXT("UShaderWorld_Material PackedMaps CompressionSettings are not Compatible"));
			return false;
		}

		return true;
	
	}
	return false;
}
