#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LR15Fullbody_CameraShake_3P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LR15Fullbody_CameraShake_3P.LR15Fullbody_CameraShake_3P_C
// 0x0000 (0x0160 - 0x0160)
class ULR15Fullbody_CameraShake_3P_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LR15Fullbody_CameraShake_3P.LR15Fullbody_CameraShake_3P_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
