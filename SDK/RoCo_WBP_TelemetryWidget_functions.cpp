// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TelemetryWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateOutgoingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::UpdateOutgoingDisplay(class AKSPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateOutgoingDisplay");

	struct
	{
		class AKSPlayerController*     Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateIncomingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::UpdateIncomingDisplay(class AKSPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateIncomingDisplay");

	struct
	{
		class AKSPlayerController*     Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateFPSDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::UpdateFPSDisplay(class AKSPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateFPSDisplay");

	struct
	{
		class AKSPlayerController*     Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdatePingDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::UpdatePingDisplay(class AKSPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdatePingDisplay");

	struct
	{
		class AKSPlayerController*     Controller;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTelemetrySettings      NewSettings                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_TelemetryWidget_C::UpdateVisibility(const struct FTelemetrySettings& NewSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.UpdateVisibility");

	struct
	{
		struct FTelemetrySettings      NewSettings;
	} params;

	params.NewSettings = NewSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.ExecuteUbergraph_WBP_TelemetryWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TelemetryWidget_C::ExecuteUbergraph_WBP_TelemetryWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TelemetryWidget.WBP_TelemetryWidget_C.ExecuteUbergraph_WBP_TelemetryWidget");

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
