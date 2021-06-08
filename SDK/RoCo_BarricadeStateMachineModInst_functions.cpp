// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeStateMachineModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarricadeStateMachineModInst.BarricadeStateMachineModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBarricadeStateMachineModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeStateMachineModInst.BarricadeStateMachineModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BarricadeStateMachineModInst.BarricadeStateMachineModInst_C.ExecuteUbergraph_BarricadeStateMachineModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBarricadeStateMachineModInst_C::ExecuteUbergraph_BarricadeStateMachineModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarricadeStateMachineModInst.BarricadeStateMachineModInst_C.ExecuteUbergraph_BarricadeStateMachineModInst");

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
