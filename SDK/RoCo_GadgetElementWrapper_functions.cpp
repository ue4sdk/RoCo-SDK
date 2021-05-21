// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GadgetElementWrapper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GadgetElementWrapper.GadgetElementWrapper_C.Get Current Cannot Fire Now
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanFireNow                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetElementWrapper_C::Get_Current_Cannot_Fire_Now(bool* bCanFireNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.Get Current Cannot Fire Now");

	struct
	{
		bool                           bCanFireNow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bCanFireNow != nullptr)
		*bCanFireNow = params.bCanFireNow;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.Set Jammed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Jammed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetElementWrapper_C::Set_Jammed(bool Is_Jammed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.Set Jammed");

	struct
	{
		bool                           Is_Jammed;
	} params;

	params.Is_Jammed = Is_Jammed;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetElementWrapper_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGadgetElementWrapper_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.OnWeaponInventoryChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetElementWrapper_C::OnWeaponInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.OnWeaponInventoryChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetSwapped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            EquipmentOwner                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponComponent*      Equipment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetElementWrapper_C::GadgetSwapped(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetSwapped");

	struct
	{
		class AKSCharacter*            EquipmentOwner;
		class UKSWeaponComponent*      Equipment;
	} params;

	params.EquipmentOwner = EquipmentOwner;
	params.Equipment = Equipment;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.OnSetCannotFireNow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInCannotFire                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetElementWrapper_C::OnSetCannotFireNow(bool bInCannotFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.OnSetCannotFireNow");

	struct
	{
		bool                           bInCannotFire;
	} params;

	params.bInCannotFire = bInCannotFire;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.Set Tracked Gadget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      New_Gadget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetElementWrapper_C::Set_Tracked_Gadget(class UKSWeaponComponent* New_Gadget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.Set Tracked Gadget");

	struct
	{
		class UKSWeaponComponent*      New_Gadget;
	} params;

	params.New_Gadget = New_Gadget;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.Clear Tracked Gadget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetElementWrapper_C::Clear_Tracked_Gadget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.Clear Tracked Gadget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGadgetElementWrapper_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetResupplied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetElementWrapper_C::GadgetResupplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetResupplied");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.ExecuteUbergraph_GadgetElementWrapper
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetElementWrapper_C::ExecuteUbergraph_GadgetElementWrapper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.ExecuteUbergraph_GadgetElementWrapper");

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
