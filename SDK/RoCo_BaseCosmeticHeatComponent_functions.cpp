// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BaseCosmeticHeatComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.DeactivateCosmetics
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseCosmeticHeatComponent_C::DeactivateCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.DeactivateCosmetics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReactToThermalVisionState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseCosmeticHeatComponent_C::ReactToThermalVisionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReactToThermalVisionState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.EnableHeat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBaseCosmeticHeatComponent_C::EnableHeat(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.EnableHeat");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.Apply Temperature
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Applied_Temp                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCosmeticHeatComponent_C::Apply_Temperature(float Applied_Temp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.Apply Temperature");

	struct
	{
		float                          Applied_Temp;
	} params;

	params.Applied_Temp = Applied_Temp;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.OnThermalVisionStateChanged
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EModViewModeState              NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCosmeticHeatComponent_C::OnThermalVisionStateChanged(EModViewModeState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.OnThermalVisionStateChanged");

	struct
	{
		EModViewModeState              NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCosmeticHeatComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBaseCosmeticHeatComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.OnTemperatureChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSHeatSourceComponent*  HeatSource                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewTemperature                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCosmeticHeatComponent_C::OnTemperatureChanged_Event(class UKSHeatSourceComponent* HeatSource, float NewTemperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.OnTemperatureChanged_Event");

	struct
	{
		class UKSHeatSourceComponent*  HeatSource;
		float                          NewTemperature;
	} params;

	params.HeatSource = HeatSource;
	params.NewTemperature = NewTemperature;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ExecuteUbergraph_BaseCosmeticHeatComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBaseCosmeticHeatComponent_C::ExecuteUbergraph_BaseCosmeticHeatComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C.ExecuteUbergraph_BaseCosmeticHeatComponent");

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
