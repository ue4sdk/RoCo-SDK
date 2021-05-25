// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RougeStatsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::RegisterScrollingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RougeStatsScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::TickScrolling(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::SetupTabNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_RogueStatsScreen_RogueEntry_C* StatEntry                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::GetPooledStatEntry(class UWBP_RogueStatsScreen_RogueEntry_C** StatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry");

	struct
	{
		class UWBP_RogueStatsScreen_RogueEntry_C* StatEntry;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatEntry != nullptr)
		*StatEntry = params.StatEntry;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::ReturnAllStatEntriesToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RougeStatsScreen_C::On_PnlStatEntries_SortCompareChildren_1(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1");

	struct
	{
		class UWidget*                 LHS;
		class UWidget*                 RHS;
		bool                           ReturnValue;
	} params;

	params.LHS = LHS;
	params.RHS = RHS;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityComponent_MercMastery* MercMastery                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::SelectStat(class UKSActivityComponent_MercMastery* MercMastery)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat");

	struct
	{
		class UKSActivityComponent_MercMastery* MercMastery;
	} params;

	params.MercMastery = MercMastery;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::AddStatTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RougeStatsScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RougeStatsScreen_C::ExecuteUbergraph_WBP_RougeStatsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen");

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
