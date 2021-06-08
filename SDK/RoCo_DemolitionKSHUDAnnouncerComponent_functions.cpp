// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DemolitionKSHUDAnnouncerComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.OnBombSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDemolitionKSHUDAnnouncerComponent_C::OnBombSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.OnBombSpawned");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.OnBombPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          BombHolderState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BombHolderTeamNum              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDemolitionKSHUDAnnouncerComponent_C::OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.OnBombPickedUp");

	struct
	{
		class AKSPlayerState*          BombHolderState;
		int                            BombHolderTeamNum;
	} params;

	params.BombHolderState = BombHolderState;
	params.BombHolderTeamNum = BombHolderTeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.ExecuteUbergraph_DemolitionKSHUDAnnouncerComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDemolitionKSHUDAnnouncerComponent_C::ExecuteUbergraph_DemolitionKSHUDAnnouncerComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C.ExecuteUbergraph_DemolitionKSHUDAnnouncerComponent");

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
