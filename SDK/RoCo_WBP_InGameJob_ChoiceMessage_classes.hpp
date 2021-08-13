#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJob_ChoiceMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C
// 0x0048 (0x0570 - 0x0528)
class UWBP_InGameJob_ChoiceMessage_C : public UKSJobSelectorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            HideMessage;                                              // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  CurrentStatus;                                            // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             IconSwitcher;                                             // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      MessageBG;                                                // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    MessageWrapper;                                           // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Prompt;                                                   // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSJobSelectChoiceGridWidget*                Bound_Choice_Grid_Widget;                                 // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSJobItem*                                  CachedHoveredJob;                                         // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJob_ChoiceMessage.WBP_InGameJob_ChoiceMessage_C");
		return ptr;
	}


	void Internal_Set_Message_Details(const struct FText& Text, const struct FLinearColor& Tint_Color, int Icon_Index);
	void Update_Message_from_Choice_Widget(class UKSJobItem* In_Job, bool* Should_Show);
	void Play_Hide_Message_Forward();
	void Play_Hide_Message_Reverse();
	void Clear_Prompt();
	void Bind_To_Choice_Grid(class UKSJobSelectChoiceGridWidget* Choice_Grid_Widget);
	void Unbind_Choice_Grid();
	void Hover_Choice(class UKSJobSelectionChoiceWidget* Choice_Widget);
	void Unhover_Choice(class UKSJobSelectionChoiceWidget* Choice_Widget);
	void OnInitialized();
	void On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> Input_State);
	void ChoicesChanged(TArray<class UKSJobItem*> RemovedChoices, TArray<class UKSJobItem*> AddedOrUpdatedChoices);
	void Reevaluate_Current_Choice();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_InGameJob_ChoiceMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
