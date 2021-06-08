#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HeadstrongPerkActive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C
// 0x0048 (0x0280 - 0x0238)
class UWBP_HeadstrongPerkActive_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    CalloutWrapper;                                           // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_InputCallout_C*                         MeleeCallout;                                             // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            PerkIcon;                                                 // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>                   IconTexture;                                              // 0x0258(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C");
		return ptr;
	}


	void SetDisabledState();
	void SetActiveState();
	void OnRepairableArmorEquipped(bool bEquiped);
	void OnArmorInteractAvailable(bool bAvailable);
	void OnPawnSet(class APawn* OwningPawn);
	void Initialize_Widget(class APUMG_HUD* HUD);
	void OnPawnCleared(class APawn* Old_Pawn);
	void ExecuteUbergraph_WBP_HeadstrongPerkActive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
