// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SemtexGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SemtexGrenade.SemtexGrenade_C.DetermineIgnoredActors
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash)

TArray<class AActor*> ASemtexGrenade_C::DetermineIgnoredActors(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.DetermineIgnoredActors");

	struct
	{
		struct FHitResult              HitResult;
		TArray<class AActor*>          ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SemtexGrenade.SemtexGrenade_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* ASemtexGrenade_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SemtexGrenade.SemtexGrenade_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ASemtexGrenade_C::OnProjectileStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.OnProjectileStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SemtexGrenade.SemtexGrenade_C.PlayImpactPlayerConfirmSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASemtexGrenade_C::PlayImpactPlayerConfirmSFX(class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.PlayImpactPlayerConfirmSFX");

	struct
	{
		class AActor*                  Hit_Actor;
	} params;

	params.Hit_Actor = Hit_Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.PlayImpactSurfaceSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASemtexGrenade_C::PlayImpactSurfaceSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.PlayImpactSurfaceSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.PlayImpactPawnSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASemtexGrenade_C::PlayImpactPawnSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.PlayImpactPawnSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASemtexGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ASemtexGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ASemtexGrenade_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.PlaySemtexGrenadeExplosionSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASemtexGrenade_C::PlaySemtexGrenadeExplosionSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.PlaySemtexGrenadeExplosionSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SemtexGrenade.SemtexGrenade_C.ExecuteUbergraph_SemtexGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASemtexGrenade_C::ExecuteUbergraph_SemtexGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SemtexGrenade.SemtexGrenade_C.ExecuteUbergraph_SemtexGrenade");

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
