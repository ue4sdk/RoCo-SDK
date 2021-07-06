// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AssaultKSAnnouncementComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C.OnBombPickedUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          BombHolderState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BombHolderTeamNum              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAssaultKSAnnouncementComponent_C::OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C.OnBombPickedUp");

	struct
	{
		class AKSPlayerState*          BombHolderState;
		int                            BombHolderTeamNum;
	} params;

	params.BombHolderState = BombHolderState;
	params.BombHolderTeamNum = BombHolderTeamNum;

	UObject::ProcessEvent(fn, &params);
}


// Function AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C.ExecuteUbergraph_AssaultKSAnnouncementComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAssaultKSAnnouncementComponent_C::ExecuteUbergraph_AssaultKSAnnouncementComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C.ExecuteUbergraph_AssaultKSAnnouncementComponent");

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
