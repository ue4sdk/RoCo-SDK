// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EventProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EventProgress.WBP_EventProgress_C.InitializeWithActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EventProgress_C::InitializeWithActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_EventProgress.WBP_EventProgress_C.InitializeWithActivityInstance");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
