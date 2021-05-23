// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Challenge_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Panel_C::DisplayRerollPrompt(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt"));

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets"));

	struct
	{
		TArray<class UPUMG_Widget*>    Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Challenge_Panel_C::PopulateChallenges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Challenge_Panel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Challenge_Panel_C::ExecuteUbergraph_WBP_Challenge_Panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel"));

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
