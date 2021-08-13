// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EvadeShotAtModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EvadeShotAtModInst.EvadeShotAtModInst_C.MatchingDamageTaken
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageTypeCDO                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvadeShotAtModInst_C::MatchingDamageTaken(class AActor* InActor, float DamageAmount, class UDamageType* DamageTypeCDO, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvadeShotAtModInst.EvadeShotAtModInst_C.MatchingDamageTaken");

	struct
	{
		class AActor*                  InActor;
		float                          DamageAmount;
		class UDamageType*             DamageTypeCDO;
		class AController*             EventInstigator;
		class AActor*                  DamageCauser;
	} params;

	params.InActor = InActor;
	params.DamageAmount = DamageAmount;
	params.DamageTypeCDO = DamageTypeCDO;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}


// Function EvadeShotAtModInst.EvadeShotAtModInst_C.ReviveCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvadeShotAtModInst_C::ReviveCompleted(class AKSCharacter* Reviver, class AKSCharacter* Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvadeShotAtModInst.EvadeShotAtModInst_C.ReviveCompleted");

	struct
	{
		class AKSCharacter*            Reviver;
		class AKSCharacter*            Revivee;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;

	UObject::ProcessEvent(fn, &params);
}


// Function EvadeShotAtModInst.EvadeShotAtModInst_C.NearMiss
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        NearlyMissedCharacter          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvadeShotAtModInst_C::NearMiss(class AKSCharacterBase* NearlyMissedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvadeShotAtModInst.EvadeShotAtModInst_C.NearMiss");

	struct
	{
		class AKSCharacterBase*        NearlyMissedCharacter;
	} params;

	params.NearlyMissedCharacter = NearlyMissedCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function EvadeShotAtModInst.EvadeShotAtModInst_C.ShotAtTimerComplete
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEvadeShotAtModInst_C::ShotAtTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvadeShotAtModInst.EvadeShotAtModInst_C.ShotAtTimerComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EvadeShotAtModInst.EvadeShotAtModInst_C.ExecuteUbergraph_EvadeShotAtModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvadeShotAtModInst_C::ExecuteUbergraph_EvadeShotAtModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvadeShotAtModInst.EvadeShotAtModInst_C.ExecuteUbergraph_EvadeShotAtModInst");

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
