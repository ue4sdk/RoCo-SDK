#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_OutofAmmoAlert_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C
// 0x0018 (0x05E0 - 0x05C8)
class UWBP_OutOfAmmoAlert_C : public UKSLowAmmoAlertWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            OutOfAmmoPulse;                                           // 0x05D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              OutOfAmmoAlert;                                           // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_OutofAmmoAlert.WBP_OutOfAmmoAlert_C"));
		return ptr;
	}


	void IsValidWeaponType(bool* IsValidWeaponType);
	void HandleAmmoChanged(class UKSWeaponComponent* Weapon);
	void BindToAmmoUpdate();
	void PostSetActiveWeaponComponent();
	void PreClearActiveWeaponComponent();
	void Construct();
	void ExecuteUbergraph_WBP_OutOfAmmoAlert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
