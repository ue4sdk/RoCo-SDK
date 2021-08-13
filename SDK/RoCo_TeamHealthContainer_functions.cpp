// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TeamHealthContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamHealthContainer.TeamHealthContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTeamHealthContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamHealthContainer.TeamHealthContainer_C.UpdateTeammateHealthBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamHealthContainer_C::UpdateTeammateHealthBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.UpdateTeammateHealthBars");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandlePlayerSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamHealthContainer_C::HandlePlayerSpawn(class AKSCharacterBase* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandlePlayerSpawn");

	struct
	{
		class AKSCharacterBase*        NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandlePhaseChnage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             NewPhase                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UTeamHealthContainer_C::HandlePhaseChnage(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandlePhaseChnage");

	struct
	{
		struct FMatchPhase             NewPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.NewPhase = NewPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandleSetupStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTeamHealthContainer_C::HandleSetupStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandleSetupStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TeamHealthContainer.TeamHealthContainer_C.ExecuteUbergraph_TeamHealthContainer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTeamHealthContainer_C::ExecuteUbergraph_TeamHealthContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.ExecuteUbergraph_TeamHealthContainer");

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
