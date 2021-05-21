// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PanelDefault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMargin                 ContentPadding                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelDefault_C::SetContentPadding(const struct FMargin& ContentPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding");

	struct
	{
		struct FMargin                 ContentPadding;
	} params;

	params.ContentPadding = ContentPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PanelColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PanelDefault_C::SetPanelColor(const struct FLinearColor& PanelColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor");

	struct
	{
		struct FLinearColor            PanelColor;
	} params;

	params.PanelColor = PanelColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PanelDefault_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PanelDefault_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PanelDefault_C::ExecuteUbergraph_WBP_PanelDefault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault");

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
