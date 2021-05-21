#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RedeemCodeField_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C
// 0x0030 (0x0510 - 0x04E0)
class UWBP_RedeemCodeField_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UEditableTextBox*                            CodeEntry;                                                // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C");
		return ptr;
	}


	void SetText(const struct FText& Text);
	void GetText(struct FText* NewParam);
	bool NavigateConfirm();
	void Set_Up_Keyboard_Focus();
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void ExecuteUbergraph_WBP_RedeemCodeField(int EntryPoint);
	void OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnTextChanged__DelegateSignature(const struct FText& Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
