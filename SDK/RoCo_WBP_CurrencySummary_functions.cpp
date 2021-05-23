// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CurrencySummary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyIconWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_AsyncIcon_C*> IconWidgets                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_CurrencySummary_C::GetCurrencyIconWidgets(TArray<class UWBP_AsyncIcon_C*>* IconWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyIconWidgets"));

	struct
	{
		TArray<class UWBP_AsyncIcon_C*> IconWidgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IconWidgets != nullptr)
		*IconWidgets = params.IconWidgets;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyTextWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         TextWidgets                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_CurrencySummary_C::GetCurrencyTextWidgets(TArray<class UWidget*>* TextWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.GetCurrencyTextWidgets"));

	struct
	{
		TArray<class UWidget*>         TextWidgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TextWidgets != nullptr)
		*TextWidgets = params.TextWidgets;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrencies
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    CurrenciesToDisplay            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_CurrencySummary_C::SetDisplayedCurrencies(TArray<int>* CurrenciesToDisplay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.SetDisplayedCurrencies"));

	struct
	{
		TArray<int>                    CurrenciesToDisplay;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrenciesToDisplay != nullptr)
		*CurrenciesToDisplay = params.CurrenciesToDisplay;
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CurrencySummary_C::UpdateCurrencyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CurrencySummary_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CurrencySummary_C::ExecuteUbergraph_WBP_CurrencySummary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary"));

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
