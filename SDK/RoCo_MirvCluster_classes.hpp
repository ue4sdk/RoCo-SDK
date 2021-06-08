#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MirvCluster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MirvCluster.MirvCluster_C
// 0x0000 (0x0A40 - 0x0A40)
class AMirvCluster_C : public AClusterGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MirvCluster.MirvCluster_C");
		return ptr;
	}


	bool OnProjectileStopped(const struct FHitResult& HitResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
