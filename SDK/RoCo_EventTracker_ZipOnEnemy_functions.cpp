// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_ZipOnEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_ZipOnEnemy.EventTracker_ZipOnEnemy_C.IsValidCombatEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEventTracker_ZipOnEnemy_C::IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_ZipOnEnemy.EventTracker_ZipOnEnemy_C.IsValidCombatEvent");

	struct
	{
		struct FCombatEventInfo        EventInfo;
		bool                           IsValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (EventInfo != nullptr)
		*EventInfo = params.EventInfo;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif