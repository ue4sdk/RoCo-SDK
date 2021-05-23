// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SwimmingHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SwimmingHUD.SwimmingHUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USwimmingHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SwimmingHUD.SwimmingHUD_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SwimmingHUD.SwimmingHUD_C.SwimmingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSwimming                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void USwimmingHUD_C::SwimmingChanged(bool bIsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SwimmingHUD.SwimmingHUD_C.SwimmingChanged"));

	struct
	{
		bool                           bIsSwimming;
	} params;

	params.bIsSwimming = bIsSwimming;

	UObject::ProcessEvent(fn, &params);
}


// Function SwimmingHUD.SwimmingHUD_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USwimmingHUD_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SwimmingHUD.SwimmingHUD_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SwimmingHUD.SwimmingHUD_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USwimmingHUD_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SwimmingHUD.SwimmingHUD_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SwimmingHUD.SwimmingHUD_C.ExecuteUbergraph_SwimmingHUD
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USwimmingHUD_C::ExecuteUbergraph_SwimmingHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SwimmingHUD.SwimmingHUD_C.ExecuteUbergraph_SwimmingHUD"));

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
