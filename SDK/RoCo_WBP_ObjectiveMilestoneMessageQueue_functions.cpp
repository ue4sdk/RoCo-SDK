// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ObjectiveMilestoneMessageQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.WrapUpCurrentMessages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::WrapUpCurrentMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.WrapUpCurrentMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnAnnouncementReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnAnnouncementReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnAnnouncementReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.SetToNotBusy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::SetToNotBusy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.SetToNotBusy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnKillCamEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.HandleRoundSetup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_ObjectiveMilestoneMessageQueue_C::HandleRoundSetup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.HandleRoundSetup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnRoundOverDel_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_ObjectiveMilestoneMessageQueue_C::OnRoundOverDel_Event_1(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.OnRoundOverDel_Event_1");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ResetDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ObjectiveMilestoneMessageQueue_C::ResetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ResetDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ObjectiveMilestoneMessageQueue_C::ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C.ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue");

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
