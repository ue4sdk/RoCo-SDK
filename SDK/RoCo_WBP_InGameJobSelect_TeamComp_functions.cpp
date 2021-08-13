// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_TeamComp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetupViewForPlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::SetupViewForPlayerCount(int PlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetupViewForPlayerCount");

	struct
	{
		int                            PlayerCount;
	} params;

	params.PlayerCount = PlayerCount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ResetJobEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::ResetJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ResetJobEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.TeamMembersUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          NewMember                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::TeamMembersUpdated(class AKSPlayerState* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.TeamMembersUpdated");

	struct
	{
		class AKSPlayerState*          NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Setup Team Display
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::Setup_Team_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Setup Team Display");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetInitialView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::SetInitialView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetInitialView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnJobEntryUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::OnJobEntryUpdated(class UJobSelectionEntryDetails* JobSelectionEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnJobEntryUpdated");

	struct
	{
		class UJobSelectionEntryDetails* JobSelectionEntry;
	} params;

	params.JobSelectionEntry = JobSelectionEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::OnPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.On Team Changed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::On_Team_Changed(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.On Team Changed");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamComp_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Team Added To Match
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            New_Team                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::Team_Added_To_Match(class AKSTeamState* New_Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Team Added To Match");

	struct
	{
		class AKSTeamState*            New_Team;
	} params;

	params.New_Team = New_Team;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnCinematicSubLevelEnabled_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::OnCinematicSubLevelEnabled_Event(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnCinematicSubLevelEnabled_Event");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnCinematicSubLevelDisabled_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::OnCinematicSubLevelDisabled_Event(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnCinematicSubLevelDisabled_Event");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamComp_C::ExecuteUbergraph_WBP_InGameJobSelect_TeamComp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp");

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
