// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Challenge_Hub_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetCurrentViewWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_Widget*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPUMG_Widget* UWBP_Challenge_Hub_C::GetCurrentViewWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetCurrentViewWidget");

	struct
	{
		class UPUMG_Widget*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetAllViews
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_Widget*>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UPUMG_Widget*> UWBP_Challenge_Hub_C::GetAllViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.GetAllViews");

	struct
	{
		TArray<class UPUMG_Widget*>    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Set Context Bar Prompts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::Set_Context_Bar_Prompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Set Context Bar Prompts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Challenge_Hub_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Bind Vertical Tab Group
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::Bind_Vertical_Tab_Group()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.Bind Vertical Tab Group");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Hub_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.AddView
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FOverlayTabViewRow      ViewInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Challenge_Hub_C::AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.AddView");

	struct
	{
		struct FName                   ViewName;
		struct FOverlayTabViewRow      ViewInfo;
	} params;

	params.ViewName = ViewName;
	params.ViewInfo = ViewInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ClearAllViews
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::ClearAllViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ClearAllViews");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Hub_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.SelectViewAndShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Hub_C::SelectViewAndShow(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.SelectViewAndShow");

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnTabsFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::OnTabsFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnTabsFocused");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnViewFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Challenge_Hub_C::OnViewFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.OnViewFocused");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ExecuteUbergraph_WBP_Challenge_Hub
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Hub_C::ExecuteUbergraph_WBP_Challenge_Hub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Challenge_Hub.WBP_Challenge_Hub_C.ExecuteUbergraph_WBP_Challenge_Hub");

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
