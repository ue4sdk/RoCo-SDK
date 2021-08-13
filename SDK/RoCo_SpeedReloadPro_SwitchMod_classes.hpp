#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SpeedReloadPro_SwitchMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C
// 0x0000 (0x01A0 - 0x01A0)
class USpeedReloadPro_SwitchMod_C : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SpeedReloadPro_SwitchMod.SpeedReloadPro_SwitchMod_C");
		return ptr;
	}


	bool ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority);
	bool StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
