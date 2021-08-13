// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameModeWidget_Multiple_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Bind Killcam
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::Bind_Killcam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Bind Killcam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeHudWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::InitializeHudWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeHudWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeMapWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::InitializeMapWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeMapWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeWidget_Multiple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.SetListenersActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::SetListenersActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.SetListenersActive");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle State Changed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           InVehicle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle_State_Changed__DelegateSignature(bool InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle State Changed__DelegateSignature");

	struct
	{
		bool                           InVehicle;
	} params;

	params.InVehicle = InVehicle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::HandleKillCamEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleKillCamEnabled");

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ShowHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ShowHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HideHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HideHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleTopBarHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::ToggleTopBarHUD(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleTopBarHUD");

	struct
	{
		bool                           ShouldShow;
	} params;

	params.ShouldShow = ShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleMiniMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameModeWidget_Multiple_C::ToggleMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ToggleMiniMap");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeWidget_Multiple_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Handle Swimming Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSwimming                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::Handle_Swimming_Changed(bool IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.Handle Swimming Changed");

	struct
	{
		bool                           IsSwimming;
	} params;

	params.IsSwimming = IsSwimming;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleRoundSetup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UGameModeWidget_Multiple_C::HandleRoundSetup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.HandleRoundSetup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.On Cash Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Money                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeWidget_Multiple_C::On_Cash_Changed(int Money, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.On Cash Changed");

	struct
	{
		int                            Money;
		int                            Delta;
	} params;

	params.Money = Money;
	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ExecuteUbergraph_GameModeWidget_Multiple
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameModeWidget_Multiple_C::ExecuteUbergraph_GameModeWidget_Multiple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameModeWidget_Multiple.GameModeWidget_Multiple_C.ExecuteUbergraph_GameModeWidget_Multiple");

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
