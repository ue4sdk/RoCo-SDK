#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_QueueTypeSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C
// 0x00E8 (0x05C8 - 0x04E0)
class UWBP_QuickPlay_QueueTypeSection_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  ButtonText;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Graphic_Button_C*                       CustomButton;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              CustomMatchBtn;                                           // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                QueueButtonsContainer;                                    // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueTypeHeader_C*            QueueTypeHeader;                                          // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                              // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueButton_C*                WBP_QuickPlay_QueueButton;                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueButton_C*                WBP_QuickPlay_QueueButton_108;                            // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FQueueSection                               QueueSectionInfo;                                         // 0x0528(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnQueueSelected;                                          // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueHovered;                                           // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueUnhovered;                                         // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButtons;                                             // 0x0570(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnQueuePopulated;                                         // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TArray<struct FClientQueueInfo>                    AssociatedQueues;                                         // 0x0590(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCustomMatchSelected;                                    // 0x05A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCustomMatchPopulated;                                   // 0x05B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UKSQueueDataFactory*                         KSQueueDataFactory;                                       // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C"));
		return ptr;
	}


	void ResetQueueButtons();
	void GetQueueButtons(TArray<class UWBP_QuickPlay_QueueButton_C*>* Buttons);
	void PopulateSection(const struct FQueueSection& QueueSectionInfo);
	void Construct();
	void HandleOnQueueClicked(int QueueId);
	void HandleOnQueueHovered(class UWidget* Widget);
	void HandleOnQueueUnhovered(class UWidget* Widget);
	void HandleCustomBtnHovered(bool IsGamepad);
	void HandleCustomBtnUnhovered();
	void HandleCustomBtnClicked();
	void OnInitialized();
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int EntryPoint);
	void OnCustomMatchPopulated__DelegateSignature(TArray<class UKSWidget*>* Buttons);
	void OnCustomMatchSelected__DelegateSignature();
	void OnQueuePopulated__DelegateSignature(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButton);
	void OnQueueUnhovered__DelegateSignature(class UWidget* Widget);
	void OnQueueHovered__DelegateSignature(class UWidget* Widget);
	void OnQueueSelected__DelegateSignature(int QueueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
