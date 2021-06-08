// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TrackerRoundsInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrackerRoundsInst.TrackerRoundsInst_C.OnMatchingDamageDealt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrackerRoundsInst_C::OnMatchingDamageDealt(class AActor* DamagedActor, float Damage, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrackerRoundsInst.TrackerRoundsInst_C.OnMatchingDamageDealt");

	struct
	{
		class AActor*                  DamagedActor;
		float                          Damage;
		class AActor*                  DamageCauser;
	} params;

	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}


// Function TrackerRoundsInst.TrackerRoundsInst_C.ExecuteUbergraph_TrackerRoundsInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrackerRoundsInst_C::ExecuteUbergraph_TrackerRoundsInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrackerRoundsInst.TrackerRoundsInst_C.ExecuteUbergraph_TrackerRoundsInst");

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
