// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DebugMenuItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UDebugMenuItem_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DebugMenuItem.DebugMenuItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenuItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenuItem.DebugMenuItem_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenuItem_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDebugMenuItem_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDebugMenuItem_C::ExecuteUbergraph_DebugMenuItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDebugMenuCommandInfo   Command                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UDebugMenuItem_C::ItemSelected__DelegateSignature(const struct FDebugMenuCommandInfo& Command)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature"));

	struct
	{
		struct FDebugMenuCommandInfo   Command;
	} params;

	params.Command = Command;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
