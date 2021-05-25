// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChevronProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChevronProgressBar_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetColors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChevronProgressBar_C::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ChevronProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChevronProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.ExecuteUbergraph_WBP_ChevronProgressBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChevronProgressBar_C::ExecuteUbergraph_WBP_ChevronProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.ExecuteUbergraph_WBP_ChevronProgressBar");

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
