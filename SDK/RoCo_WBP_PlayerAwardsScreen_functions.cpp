// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerAwardsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerAwardsScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::RegisterScrollingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAwardsScreen_C::TickScrolling(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PlayerAwardsScreen_C::CompareChildren(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren");

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


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAwardsScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAwardsScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerAwardsScreen_C::ExecuteUbergraph_WBP_PlayerAwardsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen");

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
