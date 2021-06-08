#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SpeedCloakedSprint_CameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpeedCloakedSprint_CameraShake.SpeedCloakedSprint_CameraShake_C
// 0x0000 (0x0180 - 0x0180)
class USpeedCloakedSprint_CameraShake_C : public UKSSprintCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SpeedCloakedSprint_CameraShake.SpeedCloakedSprint_CameraShake_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
