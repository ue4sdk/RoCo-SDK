// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_C4Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function C4Projectile.C4Projectile_C.ShouldDisablePingOutline
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::ShouldDisablePingOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ShouldDisablePingOutline");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.ShouldDisablePingTargeting
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::ShouldDisablePingTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ShouldDisablePingTargeting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.ShouldNotAffectTargetingReticle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::ShouldNotAffectTargetingReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ShouldNotAffectTargetingReticle");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.ShouldSetFriendlyOutlineOnRegister
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::ShouldSetFriendlyOutlineOnRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ShouldSetFriendlyOutlineOnRegister");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.ShouldBounceOff
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::ShouldBounceOff(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ShouldBounceOff");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AC4Projectile_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.OnProjectileStopped
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AC4Projectile_C::OnProjectileStopped(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.OnProjectileStopped");

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function C4Projectile.C4Projectile_C.StopC4ProjectileBeepAlertSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AC4Projectile_C::StopC4ProjectileBeepAlertSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.StopC4ProjectileBeepAlertSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.PlayC4ProjectileBeepAlertSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AC4Projectile_C::PlayC4ProjectileBeepAlertSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.PlayC4ProjectileBeepAlertSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.PlayC4ProjectileExplosionSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AC4Projectile_C::PlayC4ProjectileExplosionSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.PlayC4ProjectileExplosionSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.PlayC4ProjectileAttachSurfaceSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AC4Projectile_C::PlayC4ProjectileAttachSurfaceSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.PlayC4ProjectileAttachSurfaceSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AC4Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AC4Projectile_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.SetOutlineColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKSOutlineParameters    OutlineParams                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AC4Projectile_C::SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.SetOutlineColor");

	struct
	{
		bool                           Enabled;
		struct FKSOutlineParameters    OutlineParams;
		int                            Color;
	} params;

	params.Enabled = Enabled;
	params.OutlineParams = OutlineParams;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.RegisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AC4Projectile_C::RegisterDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.RegisterDeployable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.UnregisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AC4Projectile_C::UnregisterDeployable(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.UnregisterDeployable");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AC4Projectile_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function C4Projectile.C4Projectile_C.ExecuteUbergraph_C4Projectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AC4Projectile_C::ExecuteUbergraph_C4Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C4Projectile.C4Projectile_C.ExecuteUbergraph_C4Projectile");

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
