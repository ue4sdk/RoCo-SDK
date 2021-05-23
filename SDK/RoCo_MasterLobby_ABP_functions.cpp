// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterLobby_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMasterLobby_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_LProp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_RProp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_LProp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_RProp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterLobby_ABP_C::Set_Skinned_Local_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.UpdateTurnInPlace
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterLobby_ABP_C::UpdateTurnInPlace(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.UpdateTurnInPlace"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterLobby_ABP_C::ExecuteUbergraph_MasterLobby_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP"));

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
