// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardTeamSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UnhoverPlayerEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::UnhoverPlayerEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UnhoverPlayerEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Get Player Widget byPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Player_State                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UScoreboardPlayerEntry_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_C::Get_Player_Widget_byPlayerState(class AKSPlayerState* Player_State, class UScoreboardPlayerEntry_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Get Player Widget byPlayerState");

	struct
	{
		class AKSPlayerState*          Player_State;
		class UScoreboardPlayerEntry_C* Widget;
	} params;

	params.Player_State = Player_State;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.EndUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::EndUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.EndUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.BeginUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.BeginUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PlayerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_C::UpdatePlayer(class UKSPersistentPlayerData* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdatePlayer");

	struct
	{
		class UKSPersistentPlayerData* PlayerData;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdateHeaderColors
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::UpdateHeaderColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.UpdateHeaderColors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Handle Display Cash Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::Handle_Display_Cash_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Handle Display Cash Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.Owner UI Relevance Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::Owner_UI_Relevance_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.Owner UI Relevance Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.ExecuteUbergraph_ScoreboardTeamSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardTeamSection_C::ExecuteUbergraph_ScoreboardTeamSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.ExecuteUbergraph_ScoreboardTeamSection");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnPlayerAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardTeamSection_C::OnPlayerAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardTeamSection.ScoreboardTeamSection_C.OnPlayerAdded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
