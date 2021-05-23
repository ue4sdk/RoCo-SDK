// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_OrdinalNumberText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Language_Code                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   Return_Value                   (CPF_Parm, CPF_OutParm)

void UWBP_OrdinalNumberText_C::Get_Language_Specific_Superscript_Text(const struct FString& Language_Code, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text"));

	struct
	{
		struct FString                 Language_Code;
		struct FText                   Return_Value;
	} params;

	params.Language_Code = Language_Code;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Language_Code                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FText                   Return_Value                   (CPF_Parm, CPF_OutParm)

void UWBP_OrdinalNumberText_C::Get_Language_Specific_Main_Text(const struct FString& Language_Code, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text"));

	struct
	{
		struct FString                 Language_Code;
		struct FText                   Return_Value;
	} params;

	params.Language_Code = Language_Code;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_OrdinalNumberText_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_OrdinalNumberText_C::Set_Font(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font"));

	struct
	{
		struct FSlateFontInfo          InFontInfo;
	} params;

	params.InFontInfo = InFontInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_OrdinalNumberText_C::Set_Value(int Number)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value"));

	struct
	{
		int                            Number;
	} params;

	params.Number = Number;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_OrdinalNumberText_C::ExecuteUbergraph_WBP_OrdinalNumberText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText"));

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
