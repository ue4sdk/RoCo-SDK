#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsPreview_Reticle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C
// 0x0028 (0x0520 - 0x04F8)
class UWBP_SettingsPreview_Reticle_C : public UKSSettingsPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image_42;                                                 // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_305;                                                // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class URifleReticle_C*                             RifleReticle;                                             // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSSettingsDataFactory*                      SettingsDataFactory;                                      // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C");
		return ptr;
	}


	void GetPreviewValue(int* Value);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void OnCrosshairColorChanged(int SettingValue);
	void HandlePreviewValueChanged();
	void ExecuteUbergraph_WBP_SettingsPreview_Reticle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
