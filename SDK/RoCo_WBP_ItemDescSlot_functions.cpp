// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemDescSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemDescSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDescSlot_C::PopulateItemDescSlot(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot"));

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            HeaderColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            HeadingColor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDescSlot_C::SetTextColors(const struct FLinearColor& HeaderColor, const struct FLinearColor& HeadingColor, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors"));

	struct
	{
		struct FLinearColor            HeaderColor;
		struct FLinearColor            HeadingColor;
		struct FLinearColor            TextColor;
	} params;

	params.HeaderColor = HeaderColor;
	params.HeadingColor = HeadingColor;
	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemDescSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemDescSlot_C::ExecuteUbergraph_WBP_ItemDescSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot"));

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
