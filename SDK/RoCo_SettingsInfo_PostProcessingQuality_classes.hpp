#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_PostProcessingQuality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_PostProcessingQuality.SettingsInfo_PostProcessingQuality_C
// 0x0000 (0x0120 - 0x0120)
class USettingsInfo_PostProcessingQuality_C : public USettingsInfo_Quality_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_PostProcessingQuality.SettingsInfo_PostProcessingQuality_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
