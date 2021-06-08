// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WeaponSlotsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.FindActiveSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      ActiveWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::FindActiveSlot(class UKSWeaponComponent* ActiveWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.FindActiveSlot");

	struct
	{
		class UKSWeaponComponent*      ActiveWeaponComponent;
	} params;

	params.ActiveWeaponComponent = ActiveWeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.RefreshActiveSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::RefreshActiveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.RefreshActiveSlot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputStop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::HandleInputStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputStop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputHold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TotalTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::HandleInputHold(float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.HandleInputHold");

	struct
	{
		float                          TotalTime;
	} params;

	params.TotalTime = TotalTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ResetWeaponSlotsText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::ResetWeaponSlotsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ResetWeaponSlotsText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnUpdatedPawnInventorySlot
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_WeaponSlotsContainer_C::OnUpdatedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnUpdatedPawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnActivePawnInventorySlot
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_WeaponSlotsContainer_C::OnActivePawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnActivePawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnRemovedPawnInventorySlot
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_WeaponSlotsContainer_C::OnRemovedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.OnRemovedPawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.StartHoldProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HoldTime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::StartHoldProgress(float HoldTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.StartHoldProgress");

	struct
	{
		float                          HoldTime;
	} params;

	params.HoldTime = HoldTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.CloseHoldProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::CloseHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.CloseHoldProgress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Tick Wheel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponSlotsContainer_C::Tick_Wheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.Tick Wheel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ModeChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ExecuteUbergraph_WBP_WeaponSlotsContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponSlotsContainer_C::ExecuteUbergraph_WBP_WeaponSlotsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C.ExecuteUbergraph_WBP_WeaponSlotsContainer");

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
