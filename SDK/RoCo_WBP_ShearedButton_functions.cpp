// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ShearedButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PrimaryColor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            SecondaryColor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::ApplyColors(const struct FLinearColor& PrimaryColor, const struct FLinearColor& SecondaryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors");

	struct
	{
		struct FLinearColor            PrimaryColor;
		struct FLinearColor            SecondaryColor;
	} params;

	params.PrimaryColor = PrimaryColor;
	params.SecondaryColor = SecondaryColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ShearedButton_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disable                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ShearedButton_C::SetDisabled(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled");

	struct
	{
		bool                           Disable;
	} params;

	params.Disable = Disable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_ShearedButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InTitle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ShearedButton_C::SetMessage(const struct FText& InTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage");

	struct
	{
		struct FText                   InTitle;
	} params;

	params.InTitle = InTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ShearedButton_C::SetShadowVisibility(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InOffset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::SetPositions(float InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions");

	struct
	{
		float                          InOffset;
	} params;

	params.InOffset = InOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InHeight                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::SetSizings(float InWidth, float InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings");

	struct
	{
		float                          InWidth;
		float                          InHeight;
	} params;

	params.InWidth = InWidth;
	params.InHeight = InHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::HoverStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::UnhoverStateAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::UnhoverStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::PressedStateAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::PressedStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::ReleasedStateAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::ReleasedStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::HoverStateAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ShearedButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::ProxyClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::ProxyHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::ProxyUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::ResetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::ExecuteUbergraph_WBP_ShearedButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ShearedButton_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
