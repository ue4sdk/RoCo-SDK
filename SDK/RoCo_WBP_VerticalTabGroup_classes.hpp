#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VerticalTabGroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_VerticalTabGroup.WBP_VerticalTabGroup_C
// 0x0030 (0x0510 - 0x04E0)
class UWBP_VerticalTabGroup_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                EntryContainer;                                           // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSubviewFocus;                                           // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSubviewChange;                                          // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_VerticalTabGroup.WBP_VerticalTabGroup_C");
		return ptr;
	}


	void RevertGamepadSelected();
	void Display_Gamepad_Selected(const struct FName& ViewName);
	void SelectEntryByName(const struct FName& ViewName, class UWBP_VerticalTabGroupEntry_C** SelectedTabEntry);
	void ClearEntries();
	void AddEntry(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo);
	void GetEntries(TArray<class UWBP_VerticalTabGroupEntry_C*>* Return_Value);
	void Handle_Tab_Selected(const struct FName& View_Name);
	void Handle_Tab_Gamepad_Selected(const struct FName& View_Name);
	void ExecuteUbergraph_WBP_VerticalTabGroup(int EntryPoint);
	void OnSubviewChange__DelegateSignature(const struct FName& ViewName);
	void OnSubviewFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
