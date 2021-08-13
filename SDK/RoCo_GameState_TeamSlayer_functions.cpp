// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameState_TeamSlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameState_TeamSlayer.GameState_TeamSlayer_C.GetKSObjectiveComponent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSHUDComponent_Objective* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSHUDComponent_Objective* AGameState_TeamSlayer_C::GetKSObjectiveComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameState_TeamSlayer.GameState_TeamSlayer_C.GetKSObjectiveComponent");

	struct
	{
		class UKSHUDComponent_Objective* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
