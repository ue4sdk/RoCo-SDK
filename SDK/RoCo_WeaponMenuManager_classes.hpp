#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WeaponMenuManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponMenuManager.WeaponMenuManager_C
// 0x0028 (0x0520 - 0x04F8)
class UWeaponMenuManager_C : public UKSViewedActiveWeaponWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                Canvas;                                                   // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsPrimaryMsgShown;                                        // 0x0508(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsSecondaryMsgShown;                                      // 0x0509(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsDowned;                                                 // 0x050A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x5];                                       // 0x050B(0x0005) MISSED OFFSET
	TArray<class AKSWeapon*>                           RegisteredWeapons;                                        // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WeaponMenuManager.WeaponMenuManager_C");
		return ptr;
	}


	bool IsFocusEnabled();
	void Close_All();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void PreClearWeapon();
	void InventoryChange();
	void Display_Target_List(class AKSWeapon_Targeted* TargetingWeapon, TArray<class AActor*> PotentialTargets);
	void ExecuteUbergraph_WeaponMenuManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
