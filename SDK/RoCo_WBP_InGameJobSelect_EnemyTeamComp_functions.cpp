// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_EnemyTeamComp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetupViewForPlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::SetupViewForPlayerCount(int PlayerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetupViewForPlayerCount");

	struct
	{
		int                            PlayerCount;
	} params;

	params.PlayerCount = PlayerCount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ClearJobEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ClearJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ClearJobEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnTeamsUpdated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            AddedTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnTeamsUpdated(class AKSTeamState* AddedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnTeamsUpdated");

	struct
	{
		class AKSTeamState*            AddedTeam;
	} params;

	params.AddedTeam = AddedTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          NewMember                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnEnemyTeamMemberAdded(class AKSPlayerState* NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamMemberAdded");

	struct
	{
		class AKSPlayerState*          NewMember;
	} params;

	params.NewMember = NewMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamAdded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            AddedTeam                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnEnemyTeamAdded(class AKSTeamState* AddedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamAdded");

	struct
	{
		class AKSTeamState*            AddedTeam;
	} params;

	params.AddedTeam = AddedTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ResetJobEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ResetJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ResetJobEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetInitialView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::SetInitialView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetInitialView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnJobEntryUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobSelectionEntry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnJobEntryUpdated(class UJobSelectionEntryDetails* JobSelectionEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnJobEntryUpdated");

	struct
	{
		class UJobSelectionEntryDetails* JobSelectionEntry;
	} params;

	params.JobSelectionEntry = JobSelectionEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnPlayerStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_EnemyTeamComp_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnPlayerStateUpdate(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateUpdate");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp");

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
