#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ResupplyCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ResupplyCrate.ResupplyCrate_C
// 0x0010 (0x02B8 - 0x02A8)
class AResupplyCrate_C : public AKSPowerUp_Reequip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ResupplyCrate.ResupplyCrate_C");
		return ptr;
	}


	void Get_Collider_Extent(struct FVector* Extent);
	bool CheckNetRelevance(class AActor* Viewer);
	bool CheckOverlapRelevance(class AActor* OverlappingActor);
	void OnPickedUp(class AActor* PickingUpActor);
	void OnProximityOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FKSActorProximityInfo& ProximityInfo);
	void ExecuteUbergraph_ResupplyCrate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
