// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BoxStroke_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BoxStroke_C::SetStrokeColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BoxStroke_C::SetStrokeSize(float NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize");

	struct
	{
		float                          NewSize;
	} params;

	params.NewSize = NewSize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BoxStroke_C::ApplyStrokeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BoxStroke_C::ApplyStrokeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BoxStroke_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BoxStroke_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BoxStroke_C::ExecuteUbergraph_WBP_BoxStroke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke");

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
