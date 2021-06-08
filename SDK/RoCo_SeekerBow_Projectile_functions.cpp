// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SeekerBow_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeekerBow_Projectile.SeekerBow_Projectile_C.GetSoundForRevealIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UAkAudioEvent* ASeekerBow_Projectile_C::GetSoundForRevealIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.GetSoundForRevealIndex");

	struct
	{
		int                            Index;
		class UAkAudioEvent*           ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.TryPlayNearMissSound
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlapActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASeekerBow_Projectile_C::TryPlayNearMissSound(class AActor* OverlapActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.TryPlayNearMissSound");

	struct
	{
		class AActor*                  OverlapActor;
	} params;

	params.OverlapActor = OverlapActor;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.IsActorWithinLineOfSight
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ASeekerBow_Projectile_C::IsActorWithinLineOfSight(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.IsActorWithinLineOfSight");

	struct
	{
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.IsActorWithinRevealRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ASeekerBow_Projectile_C::IsActorWithinRevealRange(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.IsActorWithinRevealRange");

	struct
	{
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.TryToRevealEnemies
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASeekerBow_Projectile_C::TryToRevealEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.TryToRevealEnemies");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnProjectileBounced
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ASeekerBow_Projectile_C::OnProjectileBounced(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnProjectileBounced");

	struct
	{
		struct FHitResult              HitResult;
		struct FVector                 ImpactVelocity;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASeekerBow_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASeekerBow_Projectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.InitializeRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASeekerBow_Projectile_C::InitializeRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.InitializeRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnTakeOverAsRealActor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASeekerBow_Projectile_C::OnTakeOverAsRealActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnTakeOverAsRealActor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnTimeCookedSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASeekerBow_Projectile_C::OnTimeCookedSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.OnTimeCookedSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeekerBow_Projectile.SeekerBow_Projectile_C.ExecuteUbergraph_SeekerBow_Projectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASeekerBow_Projectile_C::ExecuteUbergraph_SeekerBow_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SeekerBow_Projectile.SeekerBow_Projectile_C.ExecuteUbergraph_SeekerBow_Projectile");

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
