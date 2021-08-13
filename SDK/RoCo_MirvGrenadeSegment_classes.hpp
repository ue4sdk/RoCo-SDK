#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MirvGrenadeSegment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MirvGrenadeSegment.MirvGrenadeSegment_C
// 0x0000 (0x0A70 - 0x0A70)
class AMirvGrenadeSegment_C : public AGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MirvGrenadeSegment.MirvGrenadeSegment_C");
		return ptr;
	}


	float ModifyDamageDealt(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class AActor* DamagedActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
