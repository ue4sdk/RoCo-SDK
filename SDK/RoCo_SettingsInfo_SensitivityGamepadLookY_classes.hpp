#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_SensitivityGamepadLookY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_SensitivityGamepadLookY.SettingsInfo_SensitivityGamepadLookY_C
// 0x0000 (0x0120 - 0x0120)
class USettingsInfo_SensitivityGamepadLookY_C : public UKSSettingsInfo_Generic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_SensitivityGamepadLookY.SettingsInfo_SensitivityGamepadLookY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
