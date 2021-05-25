#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GadgetElementWrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C
// 0x0048 (0x05F0 - 0x05A8)
class UGadgetElementWrapper_C : public UKSViewedPawnInventoryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    Overlay_1;                                                // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGadgetCompInventoryElement_C*               TrueDisplayElement;                                       // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FGameplayTagContainer                       ValidGameplayTagContainer;                                // 0x05C0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               IsInactive;                                               // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	class UKSWeaponComponent*                          Tracked_Gadget;                                           // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C");
		return ptr;
	}


	void Get_Current_Cannot_Fire_Now(bool* bCanFireNow);
	void Set_Jammed(bool Is_Jammed);
	void InitializeWidget(class APUMG_HUD* HUD);
	void PostSetPawn();
	void OnWeaponInventoryChanged();
	void GadgetSwapped(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment);
	void OnSetCannotFireNow(bool bInCannotFire);
	void Set_Tracked_Gadget(class UKSWeaponComponent* New_Gadget);
	void Clear_Tracked_Gadget();
	void PreClearPawn();
	void GadgetResupplied();
	void ExecuteUbergraph_GadgetElementWrapper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
