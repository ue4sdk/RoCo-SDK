// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_MatchInvitation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInvitation_C::BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInvitation_C::BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FClientQueueInfo        QueueInfo                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_MatchInvitation_C::ShowInvitation(class UKSPlayerInfo* playerinfo, const struct FClientQueueInfo& QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		struct FClientQueueInfo        QueueInfo;
	} params;

	params.playerinfo = playerinfo;
	params.QueueInfo = QueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_MatchInvitation_C::ShowError(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError");

	struct
	{
		struct FText                   ErrorMessage;
	} params;

	params.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInvitation_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInvitation_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_MatchInvitation_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_MatchInvitation_C::OnHideAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_MatchInvitation_C::ExecuteUbergraph_WBP_MatchInvitation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation");

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
