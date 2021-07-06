// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosRocketSegment_Molotov_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.AffectsActor
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  InActor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AChaosRocketSegment_Molotov_C::AffectsActor(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.AffectsActor");

	struct
	{
		class AActor*                  InActor;
		bool                           ReturnValue;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AChaosRocketSegment_Molotov_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Unslow Character
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::Unslow_Character(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Unslow Character");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Slow Character
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::Slow_Character(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Slow Character");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.MolotovDecal_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::MolotovDecal_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.MolotovDecal_Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.MolotovDecal_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::MolotovDecal_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.MolotovDecal_Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ScorchDecal_Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::ScorchDecal_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ScorchDecal_Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ScorchDecal_Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::ScorchDecal_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ScorchDecal_Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_StartFire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::Audio_StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_StartFire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_Glass_Impact
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::Audio_Glass_Impact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_Glass_Impact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_StopFire
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::Audio_StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_StopFire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_Extinguish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::Audio_Extinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.Audio_Extinguish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnSpreadTransformAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              AddedTransform                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void AChaosRocketSegment_Molotov_C::OnSpreadTransformAdded(const struct FTransform& AddedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnSpreadTransformAdded");

	struct
	{
		struct FTransform              AddedTransform;
	} params;

	params.AddedTransform = AddedTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnActorAffected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  AffectedActor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::OnActorAffected(class AActor* AffectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnActorAffected");

	struct
	{
		class AActor*                  AffectedActor;
	} params;

	params.AffectedActor = AffectedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnActorUnaffected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  UnaffectedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::OnActorUnaffected(class AActor* UnaffectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnActorUnaffected");

	struct
	{
		class AActor*                  UnaffectedActor;
	} params;

	params.UnaffectedActor = UnaffectedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AChaosRocketSegment_Molotov_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnAllSpreadTransformsRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::OnAllSpreadTransformsRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnAllSpreadTransformsRemoved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnSpreadTransformRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              RemovedTransform               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)

void AChaosRocketSegment_Molotov_C::OnSpreadTransformRemoved(const struct FTransform& RemovedTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.OnSpreadTransformRemoved");

	struct
	{
		struct FTransform              RemovedTransform;
	} params;

	params.RemovedTransform = RemovedTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AChaosRocketSegment_Molotov_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ConfigureSpreadTransformParticleSystem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::ConfigureSpreadTransformParticleSystem(class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ConfigureSpreadTransformParticleSystem");

	struct
	{
		class UParticleSystemComponent* ParticleSystem;
	} params;

	params.ParticleSystem = ParticleSystem;

	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.SFXTimerStopEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::SFXTimerStopEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.SFXTimerStopEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AChaosRocketSegment_Molotov_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ExecuteUbergraph_ChaosRocketSegment_Molotov
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AChaosRocketSegment_Molotov_C::ExecuteUbergraph_ChaosRocketSegment_Molotov(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChaosRocketSegment_Molotov.ChaosRocketSegment_Molotov_C.ExecuteUbergraph_ChaosRocketSegment_Molotov");

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
