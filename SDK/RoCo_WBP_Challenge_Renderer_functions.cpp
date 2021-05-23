// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Challenge_Renderer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Challenge_Renderer_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Challenge_Renderer_C::SetRewardDisplay(const struct FActivityTier& ActivityTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay"));

	struct
	{
		struct FActivityTier           ActivityTier;
	} params;

	params.ActivityTier = ActivityTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Renderer_C::SetChallengeInformation(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation"));

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Renderer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Renderer_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_Challenge_Renderer_C::BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Renderer_C::ExecuteUbergraph_WBP_Challenge_Renderer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Renderer_C::DisplayRerollPrompt__DelegateSignature(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature"));

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
