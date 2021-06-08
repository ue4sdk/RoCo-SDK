#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_KSObjectiveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KSObjectiveComponent.BP_KSObjectiveComponent_C
// 0x0008 (0x0168 - 0x0160)
class UBP_KSObjectiveComponent_C : public UKSHUDComponent_Objective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_KSObjectiveComponent.BP_KSObjectiveComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void HandleOnHUDReady();
	void HandleGameModeWidgetSet(class UUserWidget* GameModeWidget);
	void HandleMarkerAdded(class UKSMapIconWidgetBase* Marker);
	void ExecuteUbergraph_BP_KSObjectiveComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
