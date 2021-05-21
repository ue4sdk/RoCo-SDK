// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TopNavBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateBattlePassTabVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::UpdateBattlePassTabVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.UpdateBattlePassTabVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasNew                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavBar_C::OnHasNewStoreItems(bool HasNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems");

	struct
	{
		bool                           HasNew;
	} params;

	params.HasNew = HasNew;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NextRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::HandleViewRouteChanged(const struct FName& CurrentRoute, const struct FName& NextRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   NextRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::HandleNavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::HandleNavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::InitializeNavButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::ShowTopBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::ShowTopBarAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::HideTopBarFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::HideTopBarAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisable                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TopNavBar_C::DisableTopBar(bool IsDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar");

	struct
	{
		bool                           IsDisable;
	} params;

	params.IsDisable = IsDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TopNavBar_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TopNavBar_C::ExecuteUbergraph_WBP_TopNavBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar");

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
