#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RedeemCodeScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C
// 0x0060 (0x0558 - 0x04F8)
class URedeemCodeScreen_C : public UKSRedeemCodeScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_RedeemCodeField_C*                      CodeEntry;                                                // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              CodeRedemption;                                           // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ErrorLabel;                                               // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     PendingOverlay;                                           // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      SelectPrompt;                                             // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*                 SubmitButton;                                             // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header1_C*                              WBP_Header1;                                              // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*                  WBP_ModalPopupContainer;                                  // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UDataTable*                                  ColorPalette;                                             // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                SpamPreventTimer;                                         // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FocusGroup_NoInteraction;                                 // 0x0550(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                FocusGroup_Input;                                         // 0x0554(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C");
		return ptr;
	}


	void UpdateSubmitButtonState();
	void SetErrorMessage(const struct FText& ErrorMessage);
	void OnSpamPreventTimeout();
	void GetPaletteColor(const struct FName& Color_Name, struct FSlateColor* Color);
	void ShowPending();
	void EndPending();
	bool NavigateBack();
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowCodeRedeemFinished();
	void ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha);
	void InitHideAnimation();
	void HideCodeRedeemFinished();
	void HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha);
	void StartHideAnim();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void Construct();
	void InitializeWidgetButtonListeners();
	void SubmitCode();
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void OnShown();
	void OnHide();
	void OnCloseButtonClicked();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool Success, const struct FText& Error);
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void OnCodeTextChanged(const struct FText& Text);
	void OnCodeTextCommit(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void ExecuteUbergraph_RedeemCodeScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
