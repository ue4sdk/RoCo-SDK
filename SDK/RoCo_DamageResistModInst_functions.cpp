// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DamageResistModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageResistModInst.DamageResistModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDamageResistModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageResistModInst.DamageResistModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DamageResistModInst.DamageResistModInst_C.DamageTaken
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDamageResistModInst_C::DamageTaken(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageResistModInst.DamageResistModInst_C.DamageTaken");

	struct
	{
		class AActor*                  DamagedActor;
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params;

	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}


// Function DamageResistModInst.DamageResistModInst_C.ExecuteUbergraph_DamageResistModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDamageResistModInst_C::ExecuteUbergraph_DamageResistModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageResistModInst.DamageResistModInst_C.ExecuteUbergraph_DamageResistModInst");

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
