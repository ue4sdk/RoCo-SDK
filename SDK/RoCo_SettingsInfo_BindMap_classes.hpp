#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_BindMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_BindMap.SettingsInfo_BindMap_C
// 0x0000 (0x0128 - 0x0128)
class USettingsInfo_BindMap_C : public UKSSettingsInfo_Binding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_BindMap.SettingsInfo_BindMap_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
