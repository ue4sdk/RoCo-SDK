// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SmokeGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SmokeGrenade.SmokeGrenade_C.UnrevealCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::UnrevealCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.UnrevealCharacter");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.RevealCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::RevealCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.RevealCharacter");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.DissipateSmoke
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::DissipateSmoke(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.DissipateSmoke");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ShouldExtinguishRightNow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ASmokeGrenade_C::ShouldExtinguishRightNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ShouldExtinguishRightNow");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SmokeGrenade.SmokeGrenade_C.Pass Grow Smoke Effects to Real
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ASmokeGrenade_C*         RealSmoke                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::Pass_Grow_Smoke_Effects_to_Real(class ASmokeGrenade_C* RealSmoke)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.Pass Grow Smoke Effects to Real");

	struct
	{
		class ASmokeGrenade_C*         RealSmoke;
	} params;

	params.RealSmoke = RealSmoke;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.SpawnGrowSmokeHelper
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         Effect                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystemComponent* OutComponent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::SpawnGrowSmokeHelper(class UParticleSystem* Effect, class UParticleSystemComponent** OutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.SpawnGrowSmokeHelper");

	struct
	{
		class UParticleSystem*         Effect;
		class UParticleSystemComponent* OutComponent;
	} params;

	params.Effect = Effect;

	UObject::ProcessEvent(fn, &params);

	if (OutComponent != nullptr)
		*OutComponent = params.OutComponent;
}


// Function SmokeGrenade.SmokeGrenade_C.SlowModChangeHelper
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Add                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ASmokeGrenade_C::SlowModChangeHelper(class AKSCharacter* Character, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.SlowModChangeHelper");

	struct
	{
		class AKSCharacter*            Character;
		bool                           Add;
	} params;

	params.Character = Character;
	params.Add = Add;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.GetUsedSmokeMod
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacter*            Check_Char                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPlayerMod*            Used_Mod                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::GetUsedSmokeMod(class AKSCharacter* Check_Char, class UKSPlayerMod** Used_Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.GetUsedSmokeMod");

	struct
	{
		class AKSCharacter*            Check_Char;
		class UKSPlayerMod*            Used_Mod;
	} params;

	params.Check_Char = Check_Char;

	UObject::ProcessEvent(fn, &params);

	if (Used_Mod != nullptr)
		*Used_Mod = params.Used_Mod;
}


// Function SmokeGrenade.SmokeGrenade_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* ASmokeGrenade_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SmokeGrenade.SmokeGrenade_C.RemoveAllEffects
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::RemoveAllEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.RemoveAllEffects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ClearGrowSmokeEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* Particle_System_Component      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::ClearGrowSmokeEffect(class UParticleSystemComponent* Particle_System_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ClearGrowSmokeEffect");

	struct
	{
		class UParticleSystemComponent* Particle_System_Component;
	} params;

	params.Particle_System_Component = Particle_System_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.SpawnGrowSmoke
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::SpawnGrowSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.SpawnGrowSmoke");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.UnslowCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::UnslowCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.UnslowCharacter");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.SlowCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::SlowCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.SlowCharacter");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.DetectionSphereGrowth__FinishedFunc
// (FUNC_BlueprintEvent)

void ASmokeGrenade_C::DetectionSphereGrowth__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.DetectionSphereGrowth__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.DetectionSphereGrowth__UpdateFunc
// (FUNC_BlueprintEvent)

void ASmokeGrenade_C::DetectionSphereGrowth__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.DetectionSphereGrowth__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASmokeGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ASmokeGrenade_C::BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.BndEvt__DetectionSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.Cleanup
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundInitState         RoundInitState                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ASmokeGrenade_C::Cleanup(const struct FRoundInitState& RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.Cleanup");

	struct
	{
		struct FRoundInitState         RoundInitState;
	} params;

	params.RoundInitState = RoundInitState;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ASmokeGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ASmokeGrenade_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.YieldToRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASmokeGrenade_C::YieldToRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.YieldToRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.RemoveSmoke
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::RemoveSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.RemoveSmoke");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.KillSmoke
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::KillSmoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.KillSmoke");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ASmokeGrenade_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.STOPSmokeSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::STOPSmokeSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.STOPSmokeSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.Start Dissipating Smoke
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASmokeGrenade_C::Start_Dissipating_Smoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.Start Dissipating Smoke");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.Disperse
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class USceneComponent*> HitComponents                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::Disperse(TArray<class USceneComponent*> HitComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.Disperse");

	struct
	{
		TArray<class USceneComponent*> HitComponents;
	} params;

	params.HitComponents = HitComponents;

	UObject::ProcessEvent(fn, &params);
}


// Function SmokeGrenade.SmokeGrenade_C.ExecuteUbergraph_SmokeGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASmokeGrenade_C::ExecuteUbergraph_SmokeGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmokeGrenade.SmokeGrenade_C.ExecuteUbergraph_SmokeGrenade");

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
