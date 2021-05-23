// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GamepadPromptBasic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FButtonPromptData       Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UGamepadPromptBasic_C::SetPrompt(const struct FButtonPromptData& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt"));

	struct
	{
		struct FButtonPromptData       Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadPromptBasic_C::Populate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GamepadPromptBasic.GamepadPromptBasic_C.Populate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamepadPromptBasic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GamepadPromptBasic.GamepadPromptBasic_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadPromptBasic_C::ExecuteUbergraph_GamepadPromptBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic"));

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
