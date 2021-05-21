// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueStatsScreen_RogueEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::TickAnchorAnim(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnimInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::PlayShowAnim(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim");

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::UpdateValueText(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     Instance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::SetActivityInstance(class UKSActivityInstance* Instance, int MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance");

	struct
	{
		class UKSActivityInstance*     Instance;
		int                            MaxValue;
	} params;

	params.Instance = Instance;
	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueStatsScreen_RogueEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueStatsScreen_RogueEntry_C::ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry");

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
