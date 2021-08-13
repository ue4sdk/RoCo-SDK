#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HudEditorProperties_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_HudEditorProperties.WBP_HudEditorProperties_C
// 0x0040 (0x0540 - 0x0500)
class UWBP_HudEditorProperties_C : public UKSEditorPropertiesPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              ButtonSizeHorizontalBox;                                  // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USlider_C*                                   ButtonSizeSlider;                                         // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              OpacityHorizontalBox;                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USlider_C*                                   OpacitySlider;                                            // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCheckbox_C*                                 VisibleCheckbox;                                          // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              VisibleHorizontalBox;                                     // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSHudEditableWidget*                        SelectedHudEditableWidget;                                // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_HudEditorProperties.WBP_HudEditorProperties_C");
		return ptr;
	}


	void OnOpacityChanged(float NewOpacity);
	void OnSizeChanged(float NewSize);
	void OnChecked(bool* IsChecked);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetButtonVisibilityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, bool bNewVisibility);
	void HandleCheckedBP(bool Checked);
	void HandleCheckedNative(bool bIsChecked);
	void SetButtonScaleEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewScale);
	void SetOpacityEditable(class UKSHudEditableWidget* HudEditableWidget, bool bIsEditable, float NewOpacity);
	void SetSelectedHudEditableWidget(class UKSHudEditableWidget* NewWidget);
	void HandleOpacityChanged(float Value);
	void HandleSizeChanged(float Value);
	void ExecuteUbergraph_WBP_HudEditorProperties(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
