// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_LTM_Zone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LTM_Zone.BP_LTM_Zone_C.ToggleCollision
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TurnCollisionOn                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_LTM_Zone_C::ToggleCollision(bool TurnCollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LTM_Zone.BP_LTM_Zone_C.ToggleCollision");

	struct
	{
		bool                           TurnCollisionOn;
	} params;

	params.TurnCollisionOn = TurnCollisionOn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LTM_Zone.BP_LTM_Zone_C.ExecuteUbergraph_BP_LTM_Zone
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_LTM_Zone_C::ExecuteUbergraph_BP_LTM_Zone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LTM_Zone.BP_LTM_Zone_C.ExecuteUbergraph_BP_LTM_Zone");

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
