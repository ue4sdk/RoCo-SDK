// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EliminationMessageOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.Show Center Card
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsElimination                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsAssist                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EliminationMessageOverlay_C::Show_Center_Card(class AKSPlayerState* Victim, bool IsElimination, bool IsAssist)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.Show Center Card");

	struct
	{
		class AKSPlayerState*          Victim;
		bool                           IsElimination;
		bool                           IsAssist;
	} params;

	params.Victim = Victim;
	params.IsElimination = IsElimination;
	params.IsAssist = IsAssist;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EliminationMessageOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.OnRoundStart
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_EliminationMessageOverlay_C::OnRoundStart(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.OnRoundStart");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ClearMessages
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EliminationMessageOverlay_C::ClearMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ClearMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForAssist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsElimination                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EliminationMessageOverlay_C::ShowMessageForAssist(class AKSPlayerState* Victim, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForAssist");

	struct
	{
		class AKSPlayerState*          Victim;
		bool                           IsElimination;
	} params;

	params.Victim = Victim;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForTakedown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsElimination                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EliminationMessageOverlay_C::ShowMessageForTakedown(class AKSPlayerState* Victim, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForTakedown");

	struct
	{
		class AKSPlayerState*          Victim;
		bool                           IsElimination;
	} params;

	params.Victim = Victim;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForTakenDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsElimination                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EliminationMessageOverlay_C::ShowMessageForTakenDown(class AKSPlayerState* Instigator, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ShowMessageForTakenDown");

	struct
	{
		class AKSPlayerState*          Instigator;
		bool                           IsElimination;
	} params;

	params.Instigator = Instigator;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ExecuteUbergraph_WBP_EliminationMessageOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EliminationMessageOverlay_C::ExecuteUbergraph_WBP_EliminationMessageOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C.ExecuteUbergraph_WBP_EliminationMessageOverlay");

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
