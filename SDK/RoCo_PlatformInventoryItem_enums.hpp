#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlatformInventoryItem.EExternalSkuSource
enum class EExternalSkuSource : uint8_t
{
	EExternalSkuSource__ESS_No_Souce = 0,
	EExternalSkuSource__ESS_Sony   = 1,
	EExternalSkuSource__ESS_Nintendo = 2,
	EExternalSkuSource__ESS_Microsoft_Xbox = 3,
	EExternalSkuSource__ESS_Microsoft_Xbox_GDK = 4,
	EExternalSkuSource__ESS_Epic   = 5,
	EExternalSkuSource__ESS_Valve  = 6,
	EExternalSkuSource__ESS_MAX    = 7
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
