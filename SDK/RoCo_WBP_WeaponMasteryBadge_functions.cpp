// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WeaponMasteryBadge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.Event Set Mastery Level
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MasteryLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponMasteryBadge_C::Event_Set_Mastery_Level(int MasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.Event Set Mastery Level");

	struct
	{
		int                            MasteryLevel;
	} params;

	params.MasteryLevel = MasteryLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.ExecuteUbergraph_WBP_WeaponMasteryBadge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponMasteryBadge_C::ExecuteUbergraph_WBP_WeaponMasteryBadge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponMasteryBadge.WBP_WeaponMasteryBadge_C.ExecuteUbergraph_WBP_WeaponMasteryBadge");

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
