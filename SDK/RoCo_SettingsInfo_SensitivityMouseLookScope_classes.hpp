#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_SensitivityMouseLookScope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_SensitivityMouseLookScope.SettingsInfo_SensitivityMouseLookScope_C
// 0x0000 (0x0120 - 0x0120)
class USettingsInfo_SensitivityMouseLookScope_C : public UKSSettingsInfo_Generic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SettingsInfo_SensitivityMouseLookScope.SettingsInfo_SensitivityMouseLookScope_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
