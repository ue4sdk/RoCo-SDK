#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Player_Card_Social_Entry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
// 0x0040 (0x0520 - 0x04E0)
class UWBP_Player_Card_Social_Entry_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_Social_Accordian_Header_C*              Header;                                                   // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             MainSwitcher;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_player_card_module_C*                   PlayerCard;                                               // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    PlayerCardContainer;                                      // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UKSDataSocialPlayer*                         CurrentData;                                              // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C");
		return ptr;
	}


	void SetCurrentInfoContainer(class UObject* InfoContainer);
	void UpdatePlayerCard(class UKSPlayerInfo* playerinfo);
	void SetHoverState(bool IsHovered);
	void GetDisplayItem(class UKSWidget** ActiveDisplayItem);
	void UpdateDataItem(class UObject* Data);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void OnHeaderClicked(class UUserWidget* Widget);
	void OnPlayerClicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnShown();
	void HandlePlayerContainerUpdate(class UKSPlayerInfo* playerinfo);
	void ExecuteUbergraph_WBP_Player_Card_Social_Entry(int EntryPoint);
	void OnClicked__DelegateSignature(class UUserWidget* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
