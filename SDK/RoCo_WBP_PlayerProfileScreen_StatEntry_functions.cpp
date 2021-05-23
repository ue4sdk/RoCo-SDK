// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_StatEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     Instance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSActivityProgressDisplayType DisplayType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_StatEntry_C::SetActivityInstance(class UKSActivityInstance* Instance, EKSActivityProgressDisplayType DisplayType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance"));

	struct
	{
		class UKSActivityInstance*     Instance;
		EKSActivityProgressDisplayType DisplayType;
	} params;

	params.Instance = Instance;
	params.DisplayType = DisplayType;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
