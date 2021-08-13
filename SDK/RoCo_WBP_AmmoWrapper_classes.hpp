#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AmmoWrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C
// 0x0028 (0x0260 - 0x0238)
class UWBP_AmmoWrapper_C : public UUserWidget
{
public:
	class UHorizontalBox*                              AmmoWrapper;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AmmoCount_C*                            WBP_AmmoCount;                                            // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AmmoCount_C*                            WBP_AmmoCount_95;                                         // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_AmmoCount_C*>                    AmmoWidgets;                                              // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C");
		return ptr;
	}


	void GetAmmoWidgets(TArray<class UWBP_AmmoCount_C*>* AmmoWidgtes);
	void OnAmmoChanged(class UKSWeaponComponent* Weapon);
	void SetInitialAmmoCount(class UKSWeaponComponent* Weapon);
	void AddAmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
