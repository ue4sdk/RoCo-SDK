// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashBangGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlashBangGrenade.FlashBangGrenade_C.DetermineFlashIntensity
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AKSCharacter*            FlashedCharacter               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EFlashBangIntensity            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EFlashBangIntensity AFlashBangGrenade_C::DetermineFlashIntensity(class AKSCharacter* FlashedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.DetermineFlashIntensity");

	struct
	{
		class AKSCharacter*            FlashedCharacter;
		EFlashBangIntensity            ReturnValue;
	} params;

	params.FlashedCharacter = FlashedCharacter;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FlashBangGrenade.FlashBangGrenade_C.GetFlashCurve
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// EFlashBangIntensity            Intensity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCurveFloat*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UCurveFloat* AFlashBangGrenade_C::GetFlashCurve(EFlashBangIntensity Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.GetFlashCurve");

	struct
	{
		EFlashBangIntensity            Intensity;
		class UCurveFloat*             ReturnValue;
	} params;

	params.Intensity = Intensity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FlashBangGrenade.FlashBangGrenade_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AFlashBangGrenade_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FlashBangGrenade.FlashBangGrenade_C.FuseTimeExpired
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AFlashBangGrenade_C::FuseTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.FuseTimeExpired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashBangGrenade.FlashBangGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AFlashBangGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashBangGrenade.FlashBangGrenade_C.TriggerExplosion
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AFlashBangGrenade_C::TriggerExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.TriggerExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashBangGrenade.FlashBangGrenade_C.ExecuteUbergraph_FlashBangGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFlashBangGrenade_C::ExecuteUbergraph_FlashBangGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangGrenade.FlashBangGrenade_C.ExecuteUbergraph_FlashBangGrenade");

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
