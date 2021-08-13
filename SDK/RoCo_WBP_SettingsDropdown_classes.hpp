#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsDropdown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C
// 0x0010 (0x0568 - 0x0558)
class UWBP_SettingsDropdown_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDropdown_C*                                 Dropdown;                                                 // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C");
		return ptr;
	}


	void SetPreviewIndex(int Index, bool* Success);
	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void SetDesiredIndex(int Index, bool* Success);
	void GetDirtyIndex(int* Index);
	void Set_Text_To_Index(int Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(const struct FText& Text, int Index);
	void InitializeWidget(class APUMG_HUD* HUD);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void HoverPreview(int Index);
	void SelectionCanceled();
	void ExecuteUbergraph_WBP_SettingsDropdown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
