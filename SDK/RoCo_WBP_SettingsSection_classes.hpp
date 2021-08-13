#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsSection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C
// 0x0020 (0x0540 - 0x0520)
class UWBP_SettingsSection_C : public UKSSettingsSection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image_176;                                                // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                SectionSettings;                                          // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  SettingSectionDisplayName;                                // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C");
		return ptr;
	}


	void Add_Settings_Group_Widget(class UKSSettingsGroup* Settings_Group_Widget);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidget(class APUMG_HUD* HUD);
	void AddSettingsGroupWidget(class UKSSettingsGroup* SettingsGroup);
	void OnSectionConfigSet();
	void ExecuteUbergraph_WBP_SettingsSection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
