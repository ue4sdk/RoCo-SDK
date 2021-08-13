#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_BrightnessHandheld_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_BrightnessHandheld.SettingsInfo_BrightnessHandheld_C
// 0x0000 (0x0108 - 0x0108)
class USettingsInfo_BrightnessHandheld_C : public UKSSettingsInfo_Brightness
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_BrightnessHandheld.SettingsInfo_BrightnessHandheld_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
