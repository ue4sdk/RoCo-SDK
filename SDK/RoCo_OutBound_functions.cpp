// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_OutBound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OutBound.OutBound_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOutBound_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.HandleOutBoundsStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutBound_C::HandleOutBoundsStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.HandleOutBoundsWarningEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOutBound_C::HandleOutBoundsWarningEnd(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsWarningEnd");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.HandleOutBoundsEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutBound_C::HandleOutBoundsEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.HandleOutBoundsEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOutBound_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.OpenGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutBound_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.OpenGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.CloseGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOutBound_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.CloseGate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOutBound_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOutBound_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OutBound.OutBound_C.ExecuteUbergraph_OutBound
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UOutBound_C::ExecuteUbergraph_OutBound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutBound.OutBound_C.ExecuteUbergraph_OutBound");

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
