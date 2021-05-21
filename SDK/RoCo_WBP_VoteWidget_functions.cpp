// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoteWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateMenuBlock
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::UpdateMenuBlock(class AKSPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateMenuBlock");

	struct
	{
		class AKSPlayerController*     PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipStates
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInFavorCount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewAgainstCount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IgnoreCached                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::UpdateVotePipStates(int NewInFavorCount, int NewAgainstCount, bool IgnoreCached)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipStates");

	struct
	{
		int                            NewInFavorCount;
		int                            NewAgainstCount;
		bool                           IgnoreCached;
	} params;

	params.NewInFavorCount = NewInFavorCount;
	params.NewAgainstCount = NewAgainstCount;
	params.IgnoreCached = IgnoreCached;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewVoteCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::UpdateVotePipCount(int NewVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateVotePipCount");

	struct
	{
		int                            NewVoteCount;
	} params;

	params.NewVoteCount = NewVoteCount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.CastVote
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InFavor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::CastVote(bool InFavor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.CastVote");

	struct
	{
		bool                           InFavor;
	} params;

	params.InFavor = InFavor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.ResetTimerBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoteWidget_C::ResetTimerBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.ResetTimerBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateRightChoice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          In_Delta_Time                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldReset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IgnoreHold                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::UpdateRightChoice(float In_Delta_Time, bool ShouldReset, bool IgnoreHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateRightChoice");

	struct
	{
		float                          In_Delta_Time;
		bool                           ShouldReset;
		bool                           IgnoreHold;
	} params;

	params.In_Delta_Time = In_Delta_Time;
	params.ShouldReset = ShouldReset;
	params.IgnoreHold = IgnoreHold;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateLeftChoice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          In_Delta_Time                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShouldReset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IgnoreHold                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::UpdateLeftChoice(float In_Delta_Time, bool ShouldReset, bool IgnoreHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateLeftChoice");

	struct
	{
		float                          In_Delta_Time;
		bool                           ShouldReset;
		bool                           IgnoreHold;
	} params;

	params.In_Delta_Time = In_Delta_Time;
	params.ShouldReset = ShouldReset;
	params.IgnoreHold = IgnoreHold;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateTimerBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          In_Delta_Time                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::UpdateTimerBar(float In_Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.UpdateTimerBar");

	struct
	{
		float                          In_Delta_Time;
	} params;

	params.In_Delta_Time = In_Delta_Time;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.Finished_B57E4A0043F84951AB8468824D8B8B03
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoteWidget_C::Finished_B57E4A0043F84951AB8468824D8B8B03()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.Finished_B57E4A0043F84951AB8468824D8B8B03");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnNewPollCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  PollType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::OnNewPollCalled(class UClass* PollType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnNewPollCalled");

	struct
	{
		class UClass*                  PollType;
	} params;

	params.PollType = PollType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnLocalPlayerHasVoted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bInFavor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::OnLocalPlayerHasVoted(bool bInFavor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnLocalPlayerHasVoted");

	struct
	{
		bool                           bInFavor;
	} params;

	params.bInFavor = bInFavor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSPollResults          PollResults                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_VoteWidget_C::OnPollCompleted(const struct FKSPollResults& PollResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollCompleted");

	struct
	{
		struct FKSPollResults          PollResults;
	} params;

	params.PollResults = PollResults;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsPaused                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoteWidget_C::OnPollStateChanged(bool bIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnPollStateChanged");

	struct
	{
		bool                           bIsPaused;
	} params;

	params.bIsPaused = bIsPaused;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.SetupPollInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::SetupPollInfo(class UClass* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.SetupPollInfo");

	struct
	{
		class UClass*                  NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnVoteCountUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSPollData             NewVoteData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_VoteWidget_C::OnVoteCountUpdated(const struct FKSPollData& NewVoteData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnVoteCountUpdated");

	struct
	{
		struct FKSPollData             NewVoteData;
	} params;

	params.NewVoteData = NewVoteData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.OnInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoteWidget.WBP_VoteWidget_C.ExecuteUbergraph_WBP_VoteWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoteWidget_C::ExecuteUbergraph_WBP_VoteWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoteWidget.WBP_VoteWidget_C.ExecuteUbergraph_WBP_VoteWidget");

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
