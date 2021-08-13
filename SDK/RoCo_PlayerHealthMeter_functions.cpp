// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerHealthMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHealthMeter.PlayerHealthMeter_C.SetImmune
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bEnabled__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bImmediate__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::SetImmune(bool bpp__bEnabled__pf, bool bpp__bImmediate__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.SetImmune");

	struct
	{
		bool                           bpp__bEnabled__pf;
		bool                           bpp__bImmediate__pf;
	} params;

	params.bpp__bEnabled__pf = bpp__bEnabled__pf;
	params.bpp__bImmediate__pf = bpp__bImmediate__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPlayerHealthMeterState bpp__HealthMeterState__pf      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::SetHealthMeterState(const struct FPlayerHealthMeterState& bpp__HealthMeterState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState");

	struct
	{
		struct FPlayerHealthMeterState bpp__HealthMeterState__pf;
	} params;

	params.bpp__HealthMeterState__pf = bpp__HealthMeterState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_2
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UImage*                  bpp__OutlineBorder__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::SequenceEvent__ENTRYPOINTPlayerHealthMeter_2(class UImage* bpp__OutlineBorder__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_2");

	struct
	{
		class UImage*                  bpp__OutlineBorder__pf;
	} params;

	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UImage*                  bpp__OutlineBorder__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::SequenceEvent__ENTRYPOINTPlayerHealthMeter_1(class UImage* bpp__OutlineBorder__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_1");

	struct
	{
		class UImage*                  bpp__OutlineBorder__pf;
	} params;

	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__IsDesignTime__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::PreConstruct(bool bpp__IsDesignTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct");

	struct
	{
		bool                           bpp__IsDesignTime__pf;
	} params;

	params.bpp__IsDesignTime__pf = bpp__IsDesignTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPlayerHealthMeter_C::PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.OnEnableImmuneParams
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UImage*                  bpp__OutlineBorder__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::OnEnableImmuneParams(class UImage* bpp__OutlineBorder__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.OnEnableImmuneParams");

	struct
	{
		class UImage*                  bpp__OutlineBorder__pf;
	} params;

	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.OnDisableImmuneParams
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UImage*                  bpp__OutlineBorder__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPlayerHealthMeter_C::OnDisableImmuneParams(class UImage* bpp__OutlineBorder__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.OnDisableImmuneParams");

	struct
	{
		class UImage*                  bpp__OutlineBorder__pf;
	} params;

	params.bpp__OutlineBorder__pf = bpp__OutlineBorder__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.InitNameplateWidgetOptimizations
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPlayerHealthMeter_C::InitNameplateWidgetOptimizations()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.InitNameplateWidgetOptimizations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UPlayerHealthMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPlayerHealthMeter_C::Apply_State_To_Segments()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments if Needed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPlayerHealthMeter_C::Add_Segments_if_Needed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments if Needed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
