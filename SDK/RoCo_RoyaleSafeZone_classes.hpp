#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RoyaleSafeZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RoyaleSafeZone.RoyaleSafeZone_C
// 0x0010 (0x0280 - 0x0270)
class ARoyaleSafeZone_C : public AKSRoyaleSafeZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        ZoneMesh;                                                 // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RoyaleSafeZone.RoyaleSafeZone_C");
		return ptr;
	}


	void OnZoneActivated();
	void OnCircleUpdate(float NewRadius, const struct FVector& NewLocation);
	void ExecuteUbergraph_RoyaleSafeZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
