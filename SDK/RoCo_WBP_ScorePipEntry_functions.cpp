// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ScorePipEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Set Pip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           On                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ScorePipEntry_C::Set_Pip(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Set Pip");

	struct
	{
		bool                           On;
	} params;

	params.On = On;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ScorePipEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ScorePipEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.ExecuteUbergraph_WBP_ScorePipEntry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ScorePipEntry_C::ExecuteUbergraph_WBP_ScorePipEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePipEntry.WBP_ScorePipEntry_C.ExecuteUbergraph_WBP_ScorePipEntry");

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
