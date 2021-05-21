#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExpDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ExpDisplay.ExpDisplay_C
// 0x0048 (0x0578 - 0x0530)
class UExpDisplay_C : public UKSExpDisplayWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCashEarnedElement_C*                        CashBonusElement;                                         // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCashEarnedElement_C*                        CashEarnedElement;                                        // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                DisplayScroll;                                            // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             ExpDisplaySwitcher;                                       // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class AKSPlayerState*>                      PlayerStates;                                             // 0x0558(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<struct FKSScoreChangeEvent>                 PendingCashChangeEvents;                                  // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ExpDisplay.ExpDisplay_C");
		return ptr;
	}


	void Make_Cash_Message(const struct FKSScoreChangeEvent& Event);
	void MakePopup(const struct FExpDisplayInfo& ExpInfo);
	void Construct();
	void OnScoreChanged(const struct FKSScoreChangeEvent& ScoreChangeEvent);
	void OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState);
	void DisplayExpInfo();
	void ShowNextQueue();
	void PreConstruct(bool IsDesignTime);
	void OnCashChange(const struct FKSScoreChangeEvent& Score_Change);
	void ExecuteUbergraph_ExpDisplay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
