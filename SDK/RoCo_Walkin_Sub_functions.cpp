// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Walkin_Sub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Walkin_Sub.Walkin_Sub_C.SetupWalkInWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWalkin_Sub_C::SetupWalkInWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.SetupWalkInWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWalkin_Sub_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.OnPhaseChangeDel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkin_Sub_C::OnPhaseChangeDel(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.OnPhaseChangeDel");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.OnTimerSecondTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkin_Sub_C::OnTimerSecondTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.OnTimerSecondTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.FillRogues
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWalkin_Sub_C::FillRogues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.FillRogues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.SetSlomo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnableSlomo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AWalkin_Sub_C::SetSlomo(bool bEnableSlomo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.SetSlomo");

	struct
	{
		bool                           bEnableSlomo;
	} params;

	params.bEnableSlomo = bEnableSlomo;

	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkin_Sub_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.WalkinLoadTimeout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWalkin_Sub_C::WalkinLoadTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.WalkinLoadTimeout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.PlayWalkinSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWalkin_Sub_C::PlayWalkinSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.PlayWalkinSequence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.OnCinematicSubLevelDisabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AWalkin_Sub_C::OnCinematicSubLevelDisabled(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.OnCinematicSubLevelDisabled");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function Walkin_Sub.Walkin_Sub_C.ExecuteUbergraph_Walkin_Sub
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkin_Sub_C::ExecuteUbergraph_Walkin_Sub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkin_Sub.Walkin_Sub_C.ExecuteUbergraph_Walkin_Sub");

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
