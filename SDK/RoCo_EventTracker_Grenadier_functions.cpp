// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Grenadier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Grenadier.EventTracker_Grenadier_C.ProcessValidCombatEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        ValidEventInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            TriggerCount                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Grenadier_C::ProcessValidCombatEvent(struct FCombatEventInfo* ValidEventInfo, int* TriggerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Grenadier.EventTracker_Grenadier_C.ProcessValidCombatEvent");

	struct
	{
		struct FCombatEventInfo        ValidEventInfo;
		int                            TriggerCount;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ValidEventInfo != nullptr)
		*ValidEventInfo = params.ValidEventInfo;
	if (TriggerCount != nullptr)
		*TriggerCount = params.TriggerCount;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
