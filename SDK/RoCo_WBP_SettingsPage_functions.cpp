// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsPage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UScrollBox*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UScrollBox* UWBP_SettingsPage_C::GetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox");

	struct
	{
		class UScrollBox*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsSection*      Selection_Widget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPage_C::Add_Settings_Section_Widget(class UKSSettingsSection* Selection_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget");

	struct
	{
		class UKSSettingsSection*      Selection_Widget;
	} params;

	params.Selection_Widget = Selection_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::HandleShowPageAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPage_C::HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::HandleHidePageAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPage_C::HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::PlayShowPageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::PlayHidePageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::SetInitPageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SettingsPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsSection*      SettingsSection                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPage_C::AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget");

	struct
	{
		class UKSSettingsSection*      SettingsSection;
	} params;

	params.SettingsSection = SettingsSection;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPage_C::ExecuteUbergraph_WBP_SettingsPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage");

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
