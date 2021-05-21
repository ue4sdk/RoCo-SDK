// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WeaponSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ToggleActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_WeaponSlot_C::ToggleActiveState(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ToggleActiveState");

	struct
	{
		bool                           bIsActive;
	} params;

	params.bIsActive = bIsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WeaponSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.HandleSlotRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponAsset*          WeaponAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlot_C::HandleSlotRemoved(class UKSWeaponAsset* WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.HandleSlotRemoved");

	struct
	{
		class UKSWeaponAsset*          WeaponAsset;
	} params;

	params.WeaponAsset = WeaponAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.UpdateSlotDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponAsset*          WeaponAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlot_C::UpdateSlotDisplay(class UKSWeaponAsset* WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.UpdateSlotDisplay");

	struct
	{
		class UKSWeaponAsset*          WeaponAsset;
	} params;

	params.WeaponAsset = WeaponAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ResetSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlot_C::ResetSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ResetSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlot.WBP_WeaponSlot_C.ExecuteUbergraph_WBP_WeaponSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlot_C::ExecuteUbergraph_WBP_WeaponSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlot.WBP_WeaponSlot_C.ExecuteUbergraph_WBP_WeaponSlot");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
