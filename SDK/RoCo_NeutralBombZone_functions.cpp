// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NeutralBombZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANeutralBombZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ANeutralBombZone_C::UpdateZoneMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.RoundSetup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ANeutralBombZone_C::RoundSetup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.RoundSetup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ANeutralBombZone_C::TeamUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.TeamUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.Activated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANeutralBombZone_C::Activated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.Activated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.BombStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ANeutralBombZone_C::BombStateChanged(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.BombStateChanged");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.On Objective State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ANeutralBombZone_C::On_Objective_State_Changed(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.On Objective State Changed");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ANeutralBombZone_C::ExecuteUbergraph_NeutralBombZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone");

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
