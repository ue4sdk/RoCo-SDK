#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsEntryList_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C
// 0x0028 (0x0560 - 0x0538)
class UWBP_SettingsEntryList_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    Overlay_56;                                               // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UDropdownList_C*                             DropdownList;                                             // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelection;                                              // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C");
		return ptr;
	}


	void SetDesiredIndex(int Index, bool* Success);
	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void GetDirtyIndex(int* Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(int Index, const struct FText& Text);
	void ExecuteUbergraph_WBP_SettingsEntryList(int EntryPoint);
	void OnSelection__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
