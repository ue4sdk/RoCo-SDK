#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_ConsolePerformanceMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_ConsolePerformanceMode.SettingsInfo_ConsolePerformanceMode_C
// 0x0000 (0x0108 - 0x0108)
class USettingsInfo_ConsolePerformanceMode_C : public UKSSettingsInfo_ConsolePerformanceMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_ConsolePerformanceMode.SettingsInfo_ConsolePerformanceMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
