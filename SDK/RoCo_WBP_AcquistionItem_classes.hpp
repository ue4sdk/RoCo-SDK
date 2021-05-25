#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AcquistionItem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C
// 0x0038 (0x0518 - 0x04E0)
class UWBP_AcquistionItem_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItem;                                             // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAcquisitionItemData*                        AcquisitionItem;                                          // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSlotSelected;                                           // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSlotHover;                                              // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C");
		return ptr;
	}


	void OnSlotHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget);
	void OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails);
	void SetSlotItem(class UAcquisitionItemData* SlotItem);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_AcquistionItem(int EntryPoint);
	void OnSlotHover__DelegateSignature(class UAcquisitionItemData* AcquisitionItem, class UKSWidget* Widget);
	void OnSlotSelected__DelegateSignature(class UAcquisitionItemData* AcquisitionItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
