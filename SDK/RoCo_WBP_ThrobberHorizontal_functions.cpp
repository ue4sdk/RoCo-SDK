// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ThrobberHorizontal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.SetThrobberColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ThrobberHorizontal_C::SetThrobberColor(const struct FSlateColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.SetThrobberColor");

	struct
	{
		struct FSlateColor             NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ThrobberHorizontal_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ThrobberHorizontal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ThrobberHorizontal_C::ExecuteUbergraph_WBP_ThrobberHorizontal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal");

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
