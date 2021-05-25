#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Search_Tab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// 0x0028 (0x05B0 - 0x0588)
class UWBP_Social_Search_Tab_C : public UKSSocialSearchPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UKSTreeView*                                 Results;                                                  // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Search_bar_C*                    SearchBar;                                                // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UObject*                                     LastSelectedItem;                                         // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickSocialSearchTabSFX;                                  // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C");
		return ptr;
	}


	void ClearListFocus();
	void TryRecoverLastKnownListFocus();
	void GetFirstVisibleItem(class UKSTreeView* List, class UObject** Item);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void GetFocusTargets(TArray<class UWidget*>* Target);
	void ClearSearch();
	void HandlePlayerCardClicked(class UObject* Object);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void OnHide();
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void InitializeWidgetNavigation();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(const struct FText& SearchTerm);
	void ExecuteUbergraph_WBP_Social_Search_Tab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
