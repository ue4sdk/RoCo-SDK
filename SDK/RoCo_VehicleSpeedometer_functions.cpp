// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VehicleSpeedometer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TargetValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleSpeedometer_C::SetTargetValue(float TargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue");

	struct
	{
		float                          TargetValue;
	} params;

	params.TargetValue = TargetValue;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Speedo                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleSpeedometer_C::SetValue(float Speedo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue");

	struct
	{
		float                          Speedo;
	} params;

	params.Speedo = Speedo;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleSpeedometer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleSpeedometer_C::ExecuteUbergraph_VehicleSpeedometer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer");

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
