// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionTally_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BonusValue                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   OptionalTextFormat             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Optional_Color                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionTally_Entry_C::SetValue(int BonusValue, const struct FText& OptionalTextFormat, const struct FLinearColor& Optional_Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetValue"));

	struct
	{
		int                            BonusValue;
		struct FText                   OptionalTextFormat;
		struct FLinearColor            Optional_Color;
	} params;

	params.BonusValue = BonusValue;
	params.OptionalTextFormat = OptionalTextFormat;
	params.Optional_Color = Optional_Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionTally_Entry_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetColor"));

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionTally_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionTally_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.ExecuteUbergraph_WBP_ProgressionTally_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionTally_Entry_C::ExecuteUbergraph_WBP_ProgressionTally_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.ExecuteUbergraph_WBP_ProgressionTally_Entry"));

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
