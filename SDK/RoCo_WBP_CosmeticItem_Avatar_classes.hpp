#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CosmeticItem_Avatar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C
// 0x0060 (0x0540 - 0x04E0)
class UWBP_CosmeticItem_Avatar_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_ButtonSlot_Cosmetic_C*                  Button;                                                   // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            WBP_AsyncIcon;                                            // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UPlatformInventoryItem*                      PlatformItem;                                             // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemUnhovered;                                          // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UAkAudioEvent*                               HoverAvatarItemSFX;                                       // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickAvatarItemSFX;                                       // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C"));
		return ptr;
	}


	bool NavigateConfirm();
	void SetAvatarItemSlot();
	void OnHoverSound();
	void OnClickSound();
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void PopulateSlot();
	void OnAvatarHover(bool IsGamepad);
	void OnAvatarUnhover();
	void OnAvatarClick();
	void GamepadHover();
	void GamepadUnhover();
	void SetAvatarActive(bool IsActive);
	void ExecuteUbergraph_WBP_CosmeticItem_Avatar(int EntryPoint);
	void OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
