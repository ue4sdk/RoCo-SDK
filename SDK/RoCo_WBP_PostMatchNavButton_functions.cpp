// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PostMatchNavButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PostMatchNavButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PostMatchNavButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PostMatchNavButton_C::SetActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PostMatchNavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PostMatchNavButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PostMatchNavButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleNavTabSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         SelectedNavTab                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PostMatchNavButton_C::HandleNavTabSelected(class UKSNavTabWidget* SelectedNavTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleNavTabSelected");

	struct
	{
		class UKSNavTabWidget*         SelectedNavTab;
	} params;

	params.SelectedNavTab = SelectedNavTab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PostMatchNavButton_C::ExecuteUbergraph_WBP_PostMatchNavButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_PostMatchNavButton_C* SelectedWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PostMatchNavButton_C::OnClicked__DelegateSignature(class UWBP_PostMatchNavButton_C* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature");

	struct
	{
		class UWBP_PostMatchNavButton_C* SelectedWidget;
	} params;

	params.SelectedWidget = SelectedWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
