// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TextTypeEffect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TextTypeEffect.TextTypeEffect_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTextTypeEffect_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.SetText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function TextTypeEffect.TextTypeEffect_C.Tick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          dt                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTextTypeEffect_C::Tick(float dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.Tick");

	struct
	{
		float                          dt;
	} params;

	params.dt = dt;

	UObject::ProcessEvent(fn, &params);
}


// Function TextTypeEffect.TextTypeEffect_C.StartType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTextTypeEffect_C::StartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.StartType");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTextTypeEffect_C::ExecuteUbergraph_TextTypeEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect");

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
