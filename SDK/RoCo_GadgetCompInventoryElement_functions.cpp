// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GadgetCompInventoryElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Empty
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Empty                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetCompInventoryElement_C::Set_Empty(bool Is_Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Empty");

	struct
	{
		bool                           Is_Empty;
	} params;

	params.Is_Empty = Is_Empty;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Jammed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Jammed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetCompInventoryElement_C::Set_Jammed(bool Is_Jammed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Jammed");

	struct
	{
		bool                           Is_Jammed;
	} params;

	params.Is_Jammed = Is_Jammed;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnAmmoChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            OldInClip                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OldClipSize                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OldReserve                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewInClip                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewClipSize                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewReserve                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetCompInventoryElement_C::OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnAmmoChanged");

	struct
	{
		int                            OldInClip;
		int                            OldClipSize;
		int                            OldReserve;
		int                            NewInClip;
		int                            NewClipSize;
		int                            NewReserve;
	} params;

	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetCompInventoryElement_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PostSetWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::PostSetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PostSetWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PreClearWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::PreClearWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PreClearWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnBecomeActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::OnBecomeActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnBecomeActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnSetCannotFireNow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCannotFire                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGadgetCompInventoryElement_C::OnSetCannotFireNow(bool bCannotFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnSetCannotFireNow");

	struct
	{
		bool                           bCannotFire;
	} params;

	params.bCannotFire = bCannotFire;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.HandleOnGadgetResupply
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::HandleOnGadgetResupply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.HandleOnGadgetResupply");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.ExecuteUbergraph_GadgetCompInventoryElement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGadgetCompInventoryElement_C::ExecuteUbergraph_GadgetCompInventoryElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.ExecuteUbergraph_GadgetCompInventoryElement");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetRemoved__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::OnGadgetRemoved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetRemoved__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGadgetCompInventoryElement_C::OnGadgetAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetAdded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
