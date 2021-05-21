// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EnemyDetected_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EnemyDetected.WBP_EnemyDetected_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EnemyDetected_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EnemyDetected.WBP_EnemyDetected_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EnemyDetected.WBP_EnemyDetected_C.OnUpdateEnemyDetectedUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EnemyDetected_C::OnUpdateEnemyDetectedUI(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EnemyDetected.WBP_EnemyDetected_C.OnUpdateEnemyDetectedUI");

	struct
	{
		bool                           bShow;
	} params;

	params.bShow = bShow;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EnemyDetected.WBP_EnemyDetected_C.ExecuteUbergraph_WBP_EnemyDetected
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EnemyDetected_C::ExecuteUbergraph_WBP_EnemyDetected(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EnemyDetected.WBP_EnemyDetected_C.ExecuteUbergraph_WBP_EnemyDetected");

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
