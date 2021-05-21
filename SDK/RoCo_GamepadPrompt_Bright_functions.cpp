// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GamepadPrompt_Bright_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamepadPrompt_Bright_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGamepadPrompt_Bright_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.ExecuteUbergraph_GamepadPrompt_Bright
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGamepadPrompt_Bright_C::ExecuteUbergraph_GamepadPrompt_Bright(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPrompt_Bright.GamepadPrompt_Bright_C.ExecuteUbergraph_GamepadPrompt_Bright");

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
