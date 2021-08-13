#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NearMissCameraShake_FromLeft_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NearMissCameraShake_FromLeft.NearMissCameraShake_FromLeft_C
// 0x0000 (0x0160 - 0x0160)
class UNearMissCameraShake_FromLeft_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NearMissCameraShake_FromLeft.NearMissCameraShake_FromLeft_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
