// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SlotHeading_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SlotHeading.WBP_SlotHeading_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   newText                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SlotHeading_C::SetText(const struct FText& newText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.SetText"));

	struct
	{
		struct FText                   newText;
	} params;

	params.newText = newText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SlotHeading_C::SetUnderlineColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor"));

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SlotHeading_C::SetTextColor(const struct FSlateColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor"));

	struct
	{
		struct FSlateColor             NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SlotHeading_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_SlotHeading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_SlotHeading_C::SetSlotHeading(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SlotHeading_C::ExecuteUbergraph_WBP_SlotHeading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading"));

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
