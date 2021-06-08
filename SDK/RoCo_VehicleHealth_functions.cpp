// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VehicleHealth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleHealth.VehicleHealth_C.Set Target Value
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TargetValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleHealth_C::Set_Target_Value(float TargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Target Value");

	struct
	{
		float                          TargetValue;
	} params;

	params.TargetValue = TargetValue;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleHealth.VehicleHealth_C.Set Value
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleHealth_C::Set_Value(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Value");

	struct
	{
		float                          Percent;
	} params;

	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleHealth.VehicleHealth_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleHealth_C::ExecuteUbergraph_VehicleHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth");

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
