// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelection_Sub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JobSelection_Sub.JobSelection_Sub_C.SetSlomo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnableSlomo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AJobSelection_Sub_C::SetSlomo(bool bEnableSlomo)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.SetSlomo");

	struct
	{
		bool                           bEnableSlomo;
	} params;

	params.bEnableSlomo = bEnableSlomo;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AJobSelection_Sub_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelection_Sub_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.OnTimerSecondTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelection_Sub_C::OnTimerSecondTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.OnTimerSecondTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.Time Dilation for  Posed Rogues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AJobSelection_Sub_C::Time_Dilation_for__Posed_Rogues()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.Time Dilation for  Posed Rogues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.On Player Rogue Preview Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSJobSelectPreviewActor* PreviewActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSJobSelectPreviewLoadState   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelection_Sub_C::On_Player_Rogue_Preview_Changed(class AKSJobSelectPreviewActor* PreviewActor, EKSJobSelectPreviewLoadState PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.On Player Rogue Preview Changed");

	struct
	{
		class AKSJobSelectPreviewActor* PreviewActor;
		EKSJobSelectPreviewLoadState   PreviousState;
	} params;

	params.PreviewActor = PreviewActor;
	params.PreviousState = PreviousState;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.On Rogue Preview Fully Loaded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AJobSelection_Sub_C::On_Rogue_Preview_Fully_Loaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.On Rogue Preview Fully Loaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.OnPhaseChangeDel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void AJobSelection_Sub_C::OnPhaseChangeDel(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.OnPhaseChangeDel");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelection_Sub.JobSelection_Sub_C.ExecuteUbergraph_JobSelection_Sub
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelection_Sub_C::ExecuteUbergraph_JobSelection_Sub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelection_Sub.JobSelection_Sub_C.ExecuteUbergraph_JobSelection_Sub");

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
