// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSelect_CaptainStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InGameJobSelect_CaptainStatus_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.CaptainTaskChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_CaptainStatus_C::CaptainTaskChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.CaptainTaskChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.Hide Captain Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InGameJobSelect_CaptainStatus_C::Hide_Captain_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.Hide Captain Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.ExecuteUbergraph_WBP_InGameJobSelect_CaptainStatus
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InGameJobSelect_CaptainStatus_C::ExecuteUbergraph_WBP_InGameJobSelect_CaptainStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_CaptainStatus.WBP_InGameJobSelect_CaptainStatus_C.ExecuteUbergraph_WBP_InGameJobSelect_CaptainStatus");

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
