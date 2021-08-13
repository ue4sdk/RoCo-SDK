// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DecalSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DecalSpawner.DecalSpawner_C.Spawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Lifetime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::Spawn(const struct FRotator& Rotation, float Lifetime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.Spawn");

	struct
	{
		struct FRotator                Rotation;
		float                          Lifetime;
	} params;

	params.Rotation = Rotation;
	params.Lifetime = Lifetime;

	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.SpawnRandomRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Lifetime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::SpawnRandomRotation(float Lifetime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.SpawnRandomRotation");

	struct
	{
		float                          Lifetime;
	} params;

	params.Lifetime = Lifetime;

	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.SpawnRaycastRandomRotation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Lifetime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::SpawnRaycastRandomRotation(float Lifetime, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.SpawnRaycastRandomRotation");

	struct
	{
		float                          Lifetime;
		struct FVector                 Direction;
	} params;

	params.Lifetime = Lifetime;
	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.SpawnRaycast
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Lifetime                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::SpawnRaycast(const struct FVector& Direction, const struct FRotator& Rotation, float Lifetime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.SpawnRaycast");

	struct
	{
		struct FVector                 Direction;
		struct FRotator                Rotation;
		float                          Lifetime;
	} params;

	params.Direction = Direction;
	params.Rotation = Rotation;
	params.Lifetime = Lifetime;

	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDecalSpawner_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function DecalSpawner.DecalSpawner_C.ExecuteUbergraph_DecalSpawner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDecalSpawner_C::ExecuteUbergraph_DecalSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DecalSpawner.DecalSpawner_C.ExecuteUbergraph_DecalSpawner");

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
