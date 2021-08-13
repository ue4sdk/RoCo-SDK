// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterPosedRogue_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMasterPosedRogue_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMasterPosedRogue_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.Set Skinned Local Parameters
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterPosedRogue_ABP_C::Set_Skinned_Local_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.Set Skinned Local Parameters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.ExecuteUbergraph_MasterPosedRogue_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterPosedRogue_ABP_C::ExecuteUbergraph_MasterPosedRogue_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterPosedRogue_ABP.MasterPosedRogue_ABP_C.ExecuteUbergraph_MasterPosedRogue_ABP");

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
