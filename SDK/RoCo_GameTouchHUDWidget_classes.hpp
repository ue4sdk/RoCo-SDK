#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTouchHUDWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GameTouchHUDWidget.GameTouchHUDWidget_C
// 0x008A (0x05DA - 0x0550)
class UGameTouchHUDWidget_C : public UKSTouchHudWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_TouchButtonGeneric_C*                   AOSToggleButton;                                          // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     BtnScoreboard;                                            // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     BtnStore;                                                 // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     BtnWeaponSwap;                                            // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   ContextualPing;                                           // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_FireWeapon_TouchButton_C*               FireButton;                                               // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   InteractButton;                                           // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LeftStickDir;                                             // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      LeftStickOrigin;                                          // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     OpenMapButton;                                            // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   PrimaryMelee;                                             // 0x05A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   QuickMelee;                                               // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   ShoulderSwap;                                             // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TouchButtonGeneric_C*                   ThrowGrenadeButton;                                       // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AbilityTouchButton_C*                   WBP_AbilityTouchButton;                                   // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_GadgetTouchButton_C*                    WBP_GadgetTouchButton;                                    // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsGrenadeActive;                                          // 0x05D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsReviveTextSet;                                          // 0x05D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass GameTouchHUDWidget.GameTouchHUDWidget_C");
		return ptr;
	}


	void TriggerInputAction(const struct FName& InActionName, TEnumAsByte<EInputEvent> InInputEvent);
	void GetWidgetBounds(class UWidget* Widget, struct FVector2D* TopLeft, struct FVector2D* BottomRight);
	void IsPointOverWidget(const struct FVector2D& ScreenPoint, class UWidget* Widget, bool* IsPointOverWidget);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
	void OnInputStateChanged_Event_1(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ViewTargetChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void ShouldSwapPressed();
	void ShoulderSwapUpdate(class AKSCharacter* Character);
	void HandleEquipmentChange(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment);
	void SetWidgetIconTexture(class UWidget* Widget, const struct FSoftObjectPath& Texture);
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnHoveredInteractableChanged(class AActor* HoverTarget);
	void ExecuteUbergraph_GameTouchHUDWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
