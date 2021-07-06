// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterLobbyProp_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMasterLobbyProp_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMasterLobbyProp_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.ExecuteUbergraph_MasterLobbyProp_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterLobbyProp_ABP_C::ExecuteUbergraph_MasterLobbyProp_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyProp_ABP.MasterLobbyProp_ABP_C.ExecuteUbergraph_MasterLobbyProp_ABP");

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
