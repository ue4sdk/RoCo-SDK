// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExpDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExpDisplay.ExpDisplay_C.Make Cash Message
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent     Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UExpDisplay_C::Make_Cash_Message(const struct FKSScoreChangeEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.Make Cash Message");

	struct
	{
		struct FKSScoreChangeEvent     Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.MakePopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FExpDisplayInfo         ExpInfo                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UExpDisplay_C::MakePopup(const struct FExpDisplayInfo& ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.MakePopup");

	struct
	{
		struct FExpDisplayInfo         ExpInfo;
	} params;

	params.ExpInfo = ExpInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UExpDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.OnScoreChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent     ScoreChangeEvent               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UExpDisplay_C::OnScoreChanged(const struct FKSScoreChangeEvent& ScoreChangeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnScoreChanged");

	struct
	{
		struct FKSScoreChangeEvent     ScoreChangeEvent;
	} params;

	params.ScoreChangeEvent = ScoreChangeEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.OnUIRelevantPlayerStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExpDisplay_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnUIRelevantPlayerStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.DisplayExpInfo
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UExpDisplay_C::DisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.DisplayExpInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.ShowNextQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UExpDisplay_C::ShowNextQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.ShowNextQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UExpDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.OnCashChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent     Score_Change                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UExpDisplay_C::OnCashChange(const struct FKSScoreChangeEvent& Score_Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnCashChange");

	struct
	{
		struct FKSScoreChangeEvent     Score_Change;
	} params;

	params.Score_Change = Score_Change;

	UObject::ProcessEvent(fn, &params);
}


// Function ExpDisplay.ExpDisplay_C.ExecuteUbergraph_ExpDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UExpDisplay_C::ExecuteUbergraph_ExpDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.ExecuteUbergraph_ExpDisplay");

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
