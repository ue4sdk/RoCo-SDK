#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NeutralBombIndicator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C
// 0x0050 (0x0580 - 0x0530)
class UWBP_NeutralBombIndicator_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      BombIcon;                                                 // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             IconSwitcher;                                             // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_140;                                                // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         PromptCallout;                                            // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TimerIcon;                                                // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FKSObjectiveState                           CurrentObjectiveState;                                    // 0x0560(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C");
		return ptr;
	}


	void GetObjectiveHolder(class AKSPlayerState** PlayerState);
	void HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective);
	void Construct();
	void HandleViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleOnGameObjectiveRegistered(const TScriptInterface<class UKSObjective>& GameObjective);
	void ExecuteUbergraph_WBP_NeutralBombIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
