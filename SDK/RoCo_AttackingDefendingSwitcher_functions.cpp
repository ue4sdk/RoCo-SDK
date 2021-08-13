// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AttackingDefendingSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.PostSetTeam
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAttackingDefendingSwitcher_C::PostSetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.PostSetTeam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.Evaluate Attacker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            InTeam                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAttackingDefendingSwitcher_C::Evaluate_Attacker(class AKSTeamState* InTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.Evaluate Attacker");

	struct
	{
		class AKSTeamState*            InTeam;
	} params;

	params.InTeam = InTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.PreClearTeam
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAttackingDefendingSwitcher_C::PreClearTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.PreClearTeam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.ExecuteUbergraph_AttackingDefendingSwitcher
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAttackingDefendingSwitcher_C::ExecuteUbergraph_AttackingDefendingSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackingDefendingSwitcher.AttackingDefendingSwitcher_C.ExecuteUbergraph_AttackingDefendingSwitcher");

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
