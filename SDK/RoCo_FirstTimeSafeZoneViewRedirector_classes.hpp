#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeSafeZoneViewRedirector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
// 0x0000 (0x0030 - 0x0030)
class UFirstTimeSafeZoneViewRedirector_C : public UKSViewRedirector_LocalSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C"));
		return ptr;
	}


	bool DoesLocalSettingApply(class APUMG_HUD* HUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
