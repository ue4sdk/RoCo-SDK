// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosLauncherProjectile_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UChaosLauncherProjectile_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C.ExecuteUbergraph_ChaosLauncherProjectile_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UChaosLauncherProjectile_ABP_C::ExecuteUbergraph_ChaosLauncherProjectile_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosLauncherProjectile_ABP.ChaosLauncherProjectile_ABP_C.ExecuteUbergraph_ChaosLauncherProjectile_ABP");

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
