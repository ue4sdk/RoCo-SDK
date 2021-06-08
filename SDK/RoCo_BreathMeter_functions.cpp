// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BreathMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BreathMeter.BreathMeter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBreathMeter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.OpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBreathMeter_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.OpenGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.CloseGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBreathMeter_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.CloseGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBreathMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.UpdateCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBreathMeter_C::UpdateCharacter(class AKSCharacter* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UpdateCharacter");

	struct
	{
		class AKSCharacter*            NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.UnbindCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBreathMeter_C::UnbindCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UnbindCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.UpdateBreath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewBreath                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBreathMeter_C::UpdateBreath(float NewBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UpdateBreath");

	struct
	{
		float                          NewBreath;
	} params;

	params.NewBreath = NewBreath;

	UObject::ProcessEvent(fn, &params);
}


// Function BreathMeter.BreathMeter_C.ExecuteUbergraph_BreathMeter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBreathMeter_C::ExecuteUbergraph_BreathMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.ExecuteUbergraph_BreathMeter");

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
