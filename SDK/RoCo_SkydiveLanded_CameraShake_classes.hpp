#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SkydiveLanded_CameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkydiveLanded_CameraShake.SkydiveLanded_CameraShake_C
// 0x0000 (0x0180 - 0x0180)
class USkydiveLanded_CameraShake_C : public UKSCharacterCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SkydiveLanded_CameraShake.SkydiveLanded_CameraShake_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
