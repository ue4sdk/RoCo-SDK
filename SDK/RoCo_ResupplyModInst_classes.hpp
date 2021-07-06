#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ResupplyModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ResupplyModInst.ResupplyModInst_C
// 0x0010 (0x01B8 - 0x01A8)
class UResupplyModInst_C : public UKSModInst_OnDownOther
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      ResupplyCrateClass;                                       // 0x01B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ResupplyModInst.ResupplyModInst_C");
		return ptr;
	}


	void OnEliminateOther(class AKSCharacter* Other);
	void BroadcastPickedUp(class AKSPowerUp* PowerUp, class AActor* PickingUpActor);
	void ExecuteUbergraph_ResupplyModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
