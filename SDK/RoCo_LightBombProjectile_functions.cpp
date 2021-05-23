// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LightBombProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightBombProjectile.LightBombProjectile_C.DetermineFlashIntensity
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AKSCharacter*            FlashedCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFlashBangIntensity            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EFlashBangIntensity ALightBombProjectile_C::DetermineFlashIntensity(class AKSCharacter* FlashedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.DetermineFlashIntensity"));

	struct
	{
		class AKSCharacter*            FlashedCharacter;
		EFlashBangIntensity            ReturnValue;
	} params;

	params.FlashedCharacter = FlashedCharacter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LightBombProjectile.LightBombProjectile_C.GetFlashCurve
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EFlashBangIntensity            Intensity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UCurveFloat* ALightBombProjectile_C::GetFlashCurve(EFlashBangIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.GetFlashCurve"));

	struct
	{
		EFlashBangIntensity            Intensity;
		class UCurveFloat*             ReturnValue;
	} params;

	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LightBombProjectile.LightBombProjectile_C.ShouldBounceOff
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ALightBombProjectile_C::ShouldBounceOff(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.ShouldBounceOff"));

	struct
	{
		struct FHitResult              HitResult;
		bool                           ReturnValue;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LightBombProjectile.LightBombProjectile_C.DoDamageToActors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightBombProjectile_C::DoDamageToActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.DoDamageToActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightBombProjectile.LightBombProjectile_C.LightBombDetonateSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALightBombProjectile_C::LightBombDetonateSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.LightBombDetonateSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LightBombProjectile.LightBombProjectile_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ALightBombProjectile_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.TriggerExplosion"));

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function LightBombProjectile.LightBombProjectile_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ALightBombProjectile_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.PlayExplosion"));

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function LightBombProjectile.LightBombProjectile_C.SpawnNumberHitWidget
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumberHit                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALightBombProjectile_C::SpawnNumberHitWidget(int NumberHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.SpawnNumberHitWidget"));

	struct
	{
		int                            NumberHit;
	} params;

	params.NumberHit = NumberHit;

	UObject::ProcessEvent(fn, &params);
}


// Function LightBombProjectile.LightBombProjectile_C.ExecuteUbergraph_LightBombProjectile
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALightBombProjectile_C::ExecuteUbergraph_LightBombProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LightBombProjectile.LightBombProjectile_C.ExecuteUbergraph_LightBombProjectile"));

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
