// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Challenge_Panel_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Challenge_Panel_v2_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_v2_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetNavigationWidgets"));

	struct
	{
		TArray<class UPUMG_Widget*>    Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetChallengeCards
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_v2_C::GetChallengeCards(TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GetChallengeCards"));

	struct
	{
		TArray<class UWBP_ChallengeEntry_Daily_Truncated_C*> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Panel_v2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PopulateChallenges
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::PopulateChallenges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.PopulateChallenges"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Force Click
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_v2_C::Force_Click()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Force Click"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Handle View State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_v2_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.Handle View State Changed"));

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.ExecuteUbergraph_WBP_Challenge_Panel_v2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_v2_C::ExecuteUbergraph_WBP_Challenge_Panel_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel_v2.WBP_Challenge_Panel_v2_C.ExecuteUbergraph_WBP_Challenge_Panel_v2"));

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
