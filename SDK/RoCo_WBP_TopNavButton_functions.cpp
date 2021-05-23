// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TopNavButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::SetNewIndicator(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator"));

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Disabled                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::IsDisabled(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled"));

	struct
	{
		bool                           Disabled;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::IsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive"));

	struct
	{
		bool                           Active;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Active != nullptr)
		*Active = params.Active;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_TopNavButton_C::SetMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage"));

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TopNavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::DisableButton(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton"));

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavButton_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive"));

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.NavTabSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         SelectedNavTab                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavButton_C::NavTabSelected(class UKSNavTabWidget* SelectedNavTab)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.NavTabSelected"));

	struct
	{
		class UKSNavTabWidget*         SelectedNavTab;
	} params;

	params.SelectedNavTab = SelectedNavTab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavButton_C::ExecuteUbergraph_WBP_TopNavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ButtonClicked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavButton_C::OnNonRouteClicked__DelegateSignature(class UKSWidget* ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature"));

	struct
	{
		class UKSWidget*               ButtonClicked;
	} params;

	params.ButtonClicked = ButtonClicked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavButton_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   TargetViewState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavButton_C::OnClicked__DelegateSignature(const struct FName& TargetViewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature"));

	struct
	{
		struct FName                   TargetViewState;
	} params;

	params.TargetViewState = TargetViewState;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
