#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_ShadowQuality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_ShadowQuality.SettingsInfo_ShadowQuality_C
// 0x0000 (0x0128 - 0x0128)
class USettingsInfo_ShadowQuality_C : public USettingsInfo_Quality_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SettingsInfo_ShadowQuality.SettingsInfo_ShadowQuality_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
