// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PurchasedTransition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.GoToAcquisitonScene
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchasedTransition_C::GoToAcquisitonScene()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.GoToAcquisitonScene"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SetAcquisitionDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchasedTransition_C::SetAcquisitionDisplay(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SetAcquisitionDisplay"));

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchasedTransition_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchasedTransition_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAcceptPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchasedTransition_C::OnAcceptPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAcceptPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchasedTransition_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PurchasedTransition_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.ExecuteUbergraph_WBP_PurchasedTransition
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PurchasedTransition_C::ExecuteUbergraph_WBP_PurchasedTransition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.ExecuteUbergraph_WBP_PurchasedTransition"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.TransitionFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PurchasedTransition_C::TransitionFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PurchasedTransition.WBP_PurchasedTransition_C.TransitionFinished__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
