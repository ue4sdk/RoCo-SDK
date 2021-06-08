// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EscapeTeammatesStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Refresh
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEscapeTeammatesStatus_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Downed Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEscapeTeammatesStatus_C::Handle_Player_Downed_Changed(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Downed Changed");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEscapeTeammatesStatus_C::Handle_Player_Death(const struct FCombatEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Player Death");

	struct
	{
		struct FCombatEventInfo        EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Escape Point Changed
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSPlayerState*>  ContainedPlayers               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UEscapeTeammatesStatus_C::Handle_Escape_Point_Changed(TArray<class AKSPlayerState*> ContainedPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Escape Point Changed");

	struct
	{
		TArray<class AKSPlayerState*>  ContainedPlayers;
	} params;

	params.ContainedPlayers = ContainedPlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEscapeTeammatesStatus_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Round Start
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UEscapeTeammatesStatus_C::Handle_Round_Start(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.Handle Round Start");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.ExecuteUbergraph_EscapeTeammatesStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEscapeTeammatesStatus_C::ExecuteUbergraph_EscapeTeammatesStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EscapeTeammatesStatus.EscapeTeammatesStatus_C.ExecuteUbergraph_EscapeTeammatesStatus");

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
