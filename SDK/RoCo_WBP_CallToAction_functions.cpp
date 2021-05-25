// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CallToAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CallToAction_C::StopCTAAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CallToAction_C::PlayCTAAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CallToAction.WBP_CallToAction_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CallToAction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CallToAction_C::ExecuteUbergraph_WBP_CallToAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction");

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
