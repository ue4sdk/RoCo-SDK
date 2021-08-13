#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MLXMark4_Drop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MLXMark4_Drop.MLXMark4_Drop_C
// 0x0010 (0x0858 - 0x0848)
class AMLXMark4_Drop_C : public AKSWeaponAssetDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               CollisionSFX;                                             // 0x0850(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MLXMark4_Drop.MLXMark4_Drop_C");
		return ptr;
	}


	void BndEvt__CollisionSFX_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_MLXMark4_Drop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
