#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_AutoSprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_AutoSprint.SettingsInfo_AutoSprint_C
// 0x0000 (0x0118 - 0x0118)
class USettingsInfo_AutoSprint_C : public UKSSettingsInfo_Generic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_AutoSprint.SettingsInfo_AutoSprint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
