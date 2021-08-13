#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GiveEquipmentBehavior_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiveEquipmentBehavior.GiveEquipmentBehavior_C
// 0x000C (0x00FC - 0x00F0)
class UGiveEquipmentBehavior_C : public UKSBRC_GiveEquipment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              ReactivateDelay;                                          // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GiveEquipmentBehavior.GiveEquipmentBehavior_C");
		return ptr;
	}


	void OnComponentActivatedEvent(class UActorComponent* Component, bool bReset);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_GiveEquipmentBehavior(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
