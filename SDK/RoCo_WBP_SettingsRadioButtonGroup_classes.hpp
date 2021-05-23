#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsRadioButtonGroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C
// 0x0028 (0x0560 - 0x0538)
class UWBP_SettingsRadioButtonGroup_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              RadioButtonBox;                                           // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UClass*                                      Settings_Radio_Button;                                    // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UWBP_SettingsRadio_C*>                Radio_Buttons;                                            // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C"));
		return ptr;
	}


	bool NavigateBack();
	void Set_Selection_To_Index(int Index);
	void Get_Dirty_Index(int* Index);
	void Set_Desired_Index(int Index, bool* Success);
	void OnWidgetSettingsInfoSet();
	void On_Radio_Button_Clicked(class UWBP_SettingsRadio_C* Radio_Button);
	void On_Setting_Value_Changed(bool bChangedExternally);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
