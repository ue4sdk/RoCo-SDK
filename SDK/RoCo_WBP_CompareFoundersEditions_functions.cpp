// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CompareFoundersEditions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CompareFoundersEditions_C::OnClickedOtherClosed(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CompareFoundersEditions_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CompareFoundersEditions_C::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CompareFoundersEditions_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CompareFoundersEditions_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CompareFoundersEditions_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CompareFoundersEditions_C::ExecuteUbergraph_WBP_CompareFoundersEditions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions");

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
