#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_QueueButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C
// 0x0110 (0x05F0 - 0x04E0)
class UWBP_QuickPlay_QueueButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            hoveranim;                                                // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ButtonText;                                               // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                              // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Graphic_Button_C*                       WBP_Graphic_Button;                                       // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnQueueBtnClicked;                                        // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueBtnHovered;                                        // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueBtnUnhovered;                                      // 0x0528(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FClientQueueInfo                            QueueInfo;                                                // 0x0538(0x00B8) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C");
		return ptr;
	}


	void UpdateStatus();
	bool NavigateConfirm();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool IsGamepad);
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature();
	void InitializeWidget(class APUMG_HUD* HUD);
	void Construct();
	void OnButtonHovered();
	void OnButtonUnhovered();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void SetButtonActive(bool bIsActive);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_QuickPlay_QueueButton(int EntryPoint);
	void OnQueueBtnUnhovered__DelegateSignature(class UWidget* UnhoverWidget);
	void OnQueueBtnHovered__DelegateSignature(class UWidget* HoveredWidget);
	void OnQueueBtnClicked__DelegateSignature(int QueueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
