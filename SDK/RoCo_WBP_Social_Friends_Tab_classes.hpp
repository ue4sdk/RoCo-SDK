#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Friends_Tab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// 0x0028 (0x0580 - 0x0558)
class UWBP_Social_Friends_Tab_C : public UKSSocialFriendsPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSTreeView*                                 PlayerList;                                               // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickSocialFriendsSFX;                                    // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerListScrolled;                                     // 0x0570(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C"));
		return ptr;
	}


	void FocusFirstItem();
	void TryGetFirstItemForCategory(EKSSocialOverlaySection Category, class UKSPlayerInfo** Output);
	void FindFirstOnlinePlayerOrDefault(class UObject** Item);
	void FocusFirstOnlinePlayer();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void HandleItemClicked(class UObject* Item);
	bool NavigateConfirm();
	void GetFocusTarget(class UWidget** Target);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void InitializeWidgetNavigation();
	void OnListScrolled(float ItemOffset, float DistanceRemaining);
	void ExecuteUbergraph_WBP_Social_Friends_Tab(int EntryPoint);
	void OnPlayerListScrolled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
