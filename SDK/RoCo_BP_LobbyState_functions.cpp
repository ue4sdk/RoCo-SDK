// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_LobbyState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LobbyState.BP_LobbyState_C.GetEmoteMusicManager
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSEmoteMusicManager*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class AKSEmoteMusicManager* ABP_LobbyState_C::GetEmoteMusicManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyState.BP_LobbyState_C.GetEmoteMusicManager");

	struct
	{
		class AKSEmoteMusicManager*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LobbyState.BP_LobbyState_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LobbyState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyState.BP_LobbyState_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LobbyState.BP_LobbyState_C.ExecuteUbergraph_BP_LobbyState
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LobbyState_C::ExecuteUbergraph_BP_LobbyState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LobbyState.BP_LobbyState_C.ExecuteUbergraph_BP_LobbyState");

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
