#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsGroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// 0x0020 (0x0530 - 0x0510)
class UWBP_SettingsGroup_C : public UKSSettingsGroup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                MainSettingBox;                                           // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                SubSettingsBox;                                           // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              SubSettingsContainer;                                     // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C"));
		return ptr;
	}


	void Add_Sub_Settings_Widget(class UKSSettingsContainer* Settings_Container);
	void Add_Main_Settings_Widget(class UKSSettingsContainer* Settings_Container);
	void AddSettingsWidget(class UKSSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box);
	void InitializeWidget(class APUMG_HUD* HUD);
	void AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void ExecuteUbergraph_WBP_SettingsGroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
