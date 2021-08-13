// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_TeamCompNew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.SetupViewForPlayerCount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           In_Design_Time                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamCompNew_C::SetupViewForPlayerCount(int PlayerCount, bool In_Design_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.SetupViewForPlayerCount");

	struct
	{
		int                            PlayerCount;
		bool                           In_Design_Time;
	} params;

	params.PlayerCount = PlayerCount;
	params.In_Design_Time = In_Design_Time;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.SetInitialView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           In_Design_Time                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamCompNew_C::SetInitialView(bool In_Design_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.SetInitialView");

	struct
	{
		bool                           In_Design_Time;
	} params;

	params.In_Design_Time = In_Design_Time;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_TeamCompNew_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamCompNew_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.OnCinematicSubLevelEnabled_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamCompNew_C::OnCinematicSubLevelEnabled_Event(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.OnCinematicSubLevelEnabled_Event");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.OnCinematicSubLevelDisabled_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamCompNew_C::OnCinematicSubLevelDisabled_Event(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.OnCinematicSubLevelDisabled_Event");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.ApplyPlayerDataChildWidgets
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPersistentPlayerData*> OrderedData                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamCompNew_C::ApplyPlayerDataChildWidgets(TArray<class UKSPersistentPlayerData*> OrderedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.ApplyPlayerDataChildWidgets");

	struct
	{
		TArray<class UKSPersistentPlayerData*> OrderedData;
	} params;

	params.OrderedData = OrderedData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.PostSetTeam
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_TeamCompNew_C::PostSetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.PostSetTeam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamCompNew
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_TeamCompNew_C::ExecuteUbergraph_WBP_InGameJobSelect_TeamCompNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamCompNew.WBP_InGameJobSelect_TeamCompNew_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamCompNew");

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
