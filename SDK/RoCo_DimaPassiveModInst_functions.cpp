// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DimaPassiveModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DimaPassiveModInst.DimaPassiveModInst_C.OnMatchingDamageDealt
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDimaPassiveModInst_C::OnMatchingDamageDealt(class AActor* DamagedActor, float Damage, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DimaPassiveModInst.DimaPassiveModInst_C.OnMatchingDamageDealt");

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


// Function DimaPassiveModInst.DimaPassiveModInst_C.ExecuteUbergraph_DimaPassiveModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDimaPassiveModInst_C::ExecuteUbergraph_DimaPassiveModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DimaPassiveModInst.DimaPassiveModInst_C.ExecuteUbergraph_DimaPassiveModInst");

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
