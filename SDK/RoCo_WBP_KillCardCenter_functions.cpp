// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillCardCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KillCardCenter.WBP_KillCardCenter_C.Show Sequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillCardCenter_C::Show_Sequence()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.Show Sequence"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillCardCenter.WBP_KillCardCenter_C.ShowPlayerAndMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_KillCardCenter_C::ShowPlayerAndMessage(class AKSPlayerState* PlayerState, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.ShowPlayerAndMessage"));

	struct
	{
		class AKSPlayerState*          PlayerState;
		struct FText                   Message;
	} params;

	params.PlayerState = PlayerState;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillCardCenter.WBP_KillCardCenter_C.ClearMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseAnimations                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillCardCenter_C::ClearMessage(bool UseAnimations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.ClearMessage"));

	struct
	{
		bool                           UseAnimations;
	} params;

	params.UseAnimations = UseAnimations;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillCardCenter.WBP_KillCardCenter_C.Display Duration Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillCardCenter_C::Display_Duration_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.Display Duration Finished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillCardCenter.WBP_KillCardCenter_C.Hide Anim Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillCardCenter_C::Hide_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.Hide Anim Finished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillCardCenter.WBP_KillCardCenter_C.ExecuteUbergraph_WBP_KillCardCenter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillCardCenter_C::ExecuteUbergraph_WBP_KillCardCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillCardCenter.WBP_KillCardCenter_C.ExecuteUbergraph_WBP_KillCardCenter"));

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
