#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsBinding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C
// 0x00A8 (0x0600 - 0x0558)
class UWBP_SettingsBinding_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Gamepad;                             // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Primary;                             // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputKeySelector_C*                     WBP_InputKeySelector_Secondary;                           // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FInputChord                                 CachedPrimaryBinding;                                     // 0x0578(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FInputChord                                 CachedSecondaryBinding;                                   // 0x0598(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FInputChord                                 CachedGamepadBinding;                                     // 0x05B8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bCachedGamepadEnabled;                                    // 0x05D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bCachedPrimaryEnabled;                                    // 0x05D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bCachedSecondaryEnabled;                                  // 0x05DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05DB(0x0001) MISSED OFFSET
	float                                              TimeToWaitForCombo;                                       // 0x05DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FKey                                        Pending_Gamepad_Key;                                      // 0x05E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Combo_Key_Timer_Handle;                                   // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C");
		return ptr;
	}


	void Set_Desired_Gamepad_Combo(const struct FKey& Gamepad_Key, const struct FKey& Combo_Key, bool* Dirtied);
	void Get_Dirty_Combo_Key(struct FKey* Key, EKSInputActionType* Type);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> Input_State);
	bool CanGamepadNavigate();
	void DisableUnbindableKeybinds(class UKSSettingsInfo_Binding* Binding_Settings_Info);
	bool NavigateBack();
	void Set_Desired_Gamepad_Key(const struct FKey& Key, bool* Dirtied);
	void Set_Desired_Secondary_Key(const struct FKey& Key, bool* Dirtied);
	void Set_Desired_Primary_Key(const struct FKey& Key, bool* Dirtied);
	void Get_Dirty_Gamepad_Key(struct FKey* Key, EKSInputActionType* Type);
	void Get_Dirty_Secondary_Key(struct FKey* Key, EKSInputActionType* Type);
	void Get_Dirty_Primary_Key(struct FKey* Key, EKSInputActionType* Type);
	void SetKeysForBindingDisplays();
	void SetKeyForGamepadBindingDisplay();
	void SetKeyForSecondaryBindingDisplay();
	void SetKeyForPrimaryBindingDisplay();
	void OnWidgetSettingsInfoSet();
	void GamepadHover();
	void GamepadUnhover();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(const struct FInputChord& Selected_Key);
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void InitializeWidget(class APUMG_HUD* HUD);
	void StopCapturingCombo();
	void StartCapturingCombo();
	void Combo_Succeed(const struct FInputChord& Combo_Key);
	void Combo_Failed();
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached);
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void ExecuteUbergraph_WBP_SettingsBinding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
