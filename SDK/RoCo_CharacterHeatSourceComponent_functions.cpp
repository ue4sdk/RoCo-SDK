// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CharacterHeatSourceComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>    bpp__EndPlayReason__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> bpp__EndPlayReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    bpp__EndPlayReason__pf;
	} params;

	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EModViewModeState              bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::OnThermalVisionStateChanged(EModViewModeState bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged");

	struct
	{
		EModViewModeState              bpp__NewState__pf;
	} params;

	params.bpp__NewState__pf = bpp__NewState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSHeatSourceComponent*  bpp__HeatSource__pf__const     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__NewTemperature__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::OnTemperatureChanged_Event_1(class UKSHeatSourceComponent* bpp__HeatSource__pf__const, float bpp__NewTemperature__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1");

	struct
	{
		class UKSHeatSourceComponent*  bpp__HeatSource__pf__const;
		float                          bpp__NewTemperature__pf;
	} params;

	params.bpp__HeatSource__pf__const = bpp__HeatSource__pf__const;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterHeatSourceComponent_C::OnOwnerInfoUpdateNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::ExecuteUbergraph_CharacterHeatSourceComponent_2(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__AppliedxTemp__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::Apply_Temperature(float bpp__AppliedxTemp__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature");

	struct
	{
		float                          bpp__AppliedxTemp__pfT;
	} params;

	params.bpp__AppliedxTemp__pfT = bpp__AppliedxTemp__pfT;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSHeatSourceComponent*  bpp__HeatSource__pf            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__NewTemperature__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterHeatSourceComponent_C::OnTempChanged__DelegateSignature(class UKSHeatSourceComponent* bpp__HeatSource__pf, float bpp__NewTemperature__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature");

	struct
	{
		class UKSHeatSourceComponent*  bpp__HeatSource__pf;
		float                          bpp__NewTemperature__pf;
	} params;

	params.bpp__HeatSource__pf = bpp__HeatSource__pf;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
