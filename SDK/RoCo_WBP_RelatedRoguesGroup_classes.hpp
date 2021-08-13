#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RelatedRoguesGroup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C
// 0x0029 (0x0529 - 0x0500)
class UWBP_RelatedRoguesGroup_C : public UKSRelatedRoguesGroup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              EntryContainer;                                           // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Label;                                                    // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    ShowLabel;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RelatedRogueEntry_C*                    WBP_RelatedRogueEntry_EXAMPLE;                            // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               bHideLabel;                                               // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C");
		return ptr;
	}


	class UKSRelatedRogueEntry* CreateAndAddEntry();
	TArray<class UKSRelatedRogueEntry*> GetEntries();
	void PreConstruct(bool IsDesignTime);
	void ClearEntries();
	void DisplayIndividualWeaponLabel();
	void DisplayWeaponCategoryLabel();
	void DisplayNone();
	void ExecuteUbergraph_WBP_RelatedRoguesGroup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
