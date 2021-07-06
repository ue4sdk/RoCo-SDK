#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_Loadout_Perk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C
// 0x0058 (0x0558 - 0x0500)
class UWBP_InGameJobSelect_Loadout_Perk_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_AsyncIcon_C*                            ActiveWeaponIcon;                                         // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      background;                                               // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Desc;                                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_DisabledIcon_C*                         DisabledIcon;                                             // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Title;                                                    // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0530(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0530(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0540(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0540(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UKSItem*                                     KSItem;                                                   // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C");
		return ptr;
	}


	void Get_Shop_Item_Type(EShopItemType* Return_Value);
	void SetItemSlot(class UKSItem* KSItem);
	void PurchaseAcknowledge();
	void RefreshData(class AKSPlayerShop* Player_Shop);
	void ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk(int EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature(class UKSItem* KSItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
