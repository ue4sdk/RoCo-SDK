// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerCustomizeScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerCustomizeScreen_C::BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.ExecuteUbergraph_WBP_PlayerCustomizeScreen
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerCustomizeScreen_C::ExecuteUbergraph_WBP_PlayerCustomizeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerCustomizeScreen.WBP_PlayerCustomizeScreen_C.ExecuteUbergraph_WBP_PlayerCustomizeScreen"));

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
