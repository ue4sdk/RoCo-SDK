// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ResultScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResultScreen.ResultScreen_C.ResetAndHandleEndOfMatch
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ResetAndHandleEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ResetAndHandleEndOfMatch"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.SetColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement RoundResult                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResultScreen_C::SetColors(const struct FRoundResultAnnoucement& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.SetColors"));

	struct
	{
		struct FRoundResultAnnoucement RoundResult;
	} params;

	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ResetAnims
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ResetAnims()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ResetAnims"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.OnRoundCycle
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UResultScreen_C::OnRoundCycle(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.OnRoundCycle"));

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ShowScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DelayAmount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResultScreen_C::ShowScreen(float DelayAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ShowScreen"));

	struct
	{
		float                          DelayAmount;
	} params;

	params.DelayAmount = DelayAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.Auto Return To Lobby
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::Auto_Return_To_Lobby()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.Auto Return To Lobby"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResultScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ShowKillCamHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UResultScreen_C::ShowKillCamHUD(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ShowKillCamHUD"));

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ShowScoreAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ShowScoreAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ShowScoreAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.FailSafeReturnToLobby
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::FailSafeReturnToLobby()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.FailSafeReturnToLobby"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.OnInitRoundSetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::OnInitRoundSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.OnInitRoundSetup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.HandlePhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResultScreen_C::HandlePhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.HandlePhaseChanged"));

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.HandleRoundInfoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::HandleRoundInfoChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.HandleRoundInfoChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.HandleResultReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement ResultAnnoucement              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResultScreen_C::HandleResultReceived(const struct FRoundResultAnnoucement& ResultAnnoucement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.HandleResultReceived"));

	struct
	{
		struct FRoundResultAnnoucement ResultAnnoucement;
	} params;

	params.ResultAnnoucement = ResultAnnoucement;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ShowSurrenderUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ShowSurrenderUI()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ShowSurrenderUI"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ExecuteUbergraph_ResultScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResultScreen_C::ExecuteUbergraph_ResultScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ExecuteUbergraph_ResultScreen"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ToggleTopBar__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UResultScreen_C::ToggleTopBar__DelegateSignature(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ToggleTopBar__DelegateSignature"));

	struct
	{
		bool                           ShouldShow;
	} params;

	params.ShouldShow = ShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.HideHUD__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::HideHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.HideHUD__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ShowHUD__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ShowHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ShowHUD__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResultScreen.ResultScreen_C.ReturnToHome__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResultScreen_C::ReturnToHome__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ResultScreen.ResultScreen_C.ReturnToHome__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
