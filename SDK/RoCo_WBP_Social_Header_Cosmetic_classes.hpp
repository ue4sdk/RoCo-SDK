#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Header_Cosmetic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C
// 0x0078 (0x0558 - 0x04E0)
class UWBP_Social_Header_Cosmetic_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_AsyncIcon_C*                            AvatarIcon;                                               // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     DNDToggleBtn;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  NameLabel;                                                // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSAsyncImage*                               PlayerBanner;                                             // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                     PlayerStatusGamepadCallout;                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PlayerStatus_ContextMenu_C*             WBP_PlayerStatus_ContextMenu;                             // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSPlayerInfo*                               CurrentPlayerInfo;                                        // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnNavigationReady;                                        // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuShown;                                              // 0x0530(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuHidden;                                             // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAkAudioEvent*                               ClickSocialHeaderCosmeticSFX;                             // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C");
		return ptr;
	}


	void BindContextMenu();
	void UpdateName();
	void UpdateAfterInfoChange();
	void UpdateBanner();
	void UpdateAvatar();
	void SetData(class UKSPlayerInfo* playerinfo);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidget(class APUMG_HUD* HUD);
	void BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void ToggleDND();
	void HandleReadyNavigation(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons);
	void HandleMenuStart(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void HandleMenuHidden();
	void HideStatusMenu();
	void ExecuteUbergraph_WBP_Social_Header_Cosmetic(int EntryPoint);
	void OnMenuHidden__DelegateSignature();
	void OnMenuShown__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void OnNavigationReady__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
