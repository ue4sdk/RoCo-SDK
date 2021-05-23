// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ToastNotifcation_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EToastCategory                 ToastCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotifcation_Entry_C::SetViewStyle(EToastCategory ToastCategory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle"));

	struct
	{
		EToastCategory                 ToastCategory;
	} params;

	params.ToastCategory = ToastCategory;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::PlayOutroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::HandleOutroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::PlayWaitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotifcation_Entry_C::ExecuteUbergraph_WBP_ToastNotifcation_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::FinishedIntroAnimation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ToastWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotifcation_Entry_C::OnRemoveToastNotification__DelegateSignature(class UKSWidget* ToastWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature"));

	struct
	{
		class UKSWidget*               ToastWidget;
	} params;

	params.ToastWidget = ToastWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
