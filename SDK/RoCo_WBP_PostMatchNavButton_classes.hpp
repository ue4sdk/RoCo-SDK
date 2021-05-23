#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PostMatchNavButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C
// 0x0040 (0x0520 - 0x04E0)
class UWBP_PostMatchNavButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Hover;                                                    // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*                    WBP_subscreen_nav_tab;                                    // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FText                                       ButtonTextMsg;                                            // 0x0508(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C"));
		return ptr;
	}


	bool NavigateConfirm();
	void GamepadConfirm();
	void SetActive(bool IsActive);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void PreConstruct(bool IsDesignTime);
	void HandleNavTabSelected(class UKSNavTabWidget* SelectedNavTab);
	void ExecuteUbergraph_WBP_PostMatchNavButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UWBP_PostMatchNavButton_C* SelectedWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
