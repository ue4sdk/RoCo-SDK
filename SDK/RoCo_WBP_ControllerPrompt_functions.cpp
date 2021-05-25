// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ControllerPrompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetButtonPrompt(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt");

	struct
	{
		struct FKey                    Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ControllerPrompt_C::SetIsCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ControllerPrompt_C::SetIsConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetPromptFromButton(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton");

	struct
	{
		struct FKey                    Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ControllerPrompt_C::UpdateFromSetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetInputAction(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction");

	struct
	{
		struct FName                   ActionName;
	} params;

	params.ActionName = ActionName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ControllerPrompt_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ControllerPrompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::ExecuteUbergraph_WBP_ControllerPrompt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt");

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
