#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsPage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// 0x0024 (0x0544 - 0x0520)
class UWBP_SettingsPage_C : public UKSSettingsPage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UScrollBox*                                  PageScrollBox;                                            // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                SettingsGroupBox;                                         // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              StartTranslationXAnim;                                    // 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartOpacityAnim;                                         // 0x053C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              AnimPlayTime;                                             // 0x0540(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C");
		return ptr;
	}


	class UScrollBox* GetScrollBox();
	void Add_Settings_Section_Widget(class UKSSettingsSection* Selection_Widget);
	void InitializeTickAnimations();
	void HandleShowPageAnimFinished();
	void HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void HandleHidePageAnimFinished();
	void HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void PlayShowPageAnim();
	void PlayHidePageAnim();
	void SetInitPageState();
	void Construct();
	void AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection);
	void ExecuteUbergraph_WBP_SettingsPage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
