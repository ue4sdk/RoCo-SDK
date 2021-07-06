#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
// 0x0048 (0x0568 - 0x0520)
class UWBP_SettingsContainer_C : public UKSSettingsContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            RowFocus;                                                 // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_160;                                                // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  SettingDisplayName;                                       // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              SettingWidgetBox;                                         // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               HoverSettingsContainerSFX;                                // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UKSWidget*                                   PreviewWidget;                                            // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnAddToPreview;                                           // 0x0558(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0558(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C");
		return ptr;
	}


	void GetPreviewWidget(class UKSWidget** PreviewWidget);
	void Add_Setting_Widget_To_Box(class UKSSettingsWidget* Setting_Widget);
	void SettingsContainerHoverSFX();
	void OnContainerConfigSet();
	void AddSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PlayHoverAnim();
	void PlayUnhoverAnim();
	void AddPreviewWidget(class UKSSettingsPreview* PreviewWidget);
	void ExecuteUbergraph_WBP_SettingsContainer(int EntryPoint);
	void OnAddToPreview__DelegateSignature(class UKSWidget* PreviewWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
