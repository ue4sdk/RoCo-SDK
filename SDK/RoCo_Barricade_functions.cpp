// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Barricade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Barricade.Barricade_C.OnCanisterDestroyed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::OnCanisterDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnCanisterDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.GetRealActorTakeoverDelay
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABarricade_C::GetRealActorTakeoverDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.GetRealActorTakeoverDelay");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Barricade.Barricade_C.ComponentTakeDamage
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ABarricade_C::ComponentTakeDamage(class UPrimitiveComponent* PrimitiveComponent, float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.ComponentTakeDamage");

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		float                          DamageAmount;
		float                          ReturnValue;
	} params;

	params.PrimitiveComponent = PrimitiveComponent;
	params.DamageAmount = DamageAmount;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Barricade.Barricade_C.Barricade Placed_SFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Barricade_Placed_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Barricade Placed_SFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.Lightly Damaged_SFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Lightly_Damaged_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Lightly Damaged_SFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.Heavily Damaged_SFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Heavily_Damaged_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Heavily Damaged_SFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.Destroyed_SFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Destroyed_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Destroyed_SFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.Glass Broken_SFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Glass_Broken_SFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Glass Broken_SFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.BarricadeImpactSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::BarricadeImpactSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.BarricadeImpactSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.BarricadeGlassImpactSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::BarricadeGlassImpactSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.BarricadeGlassImpactSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.DamagedLoopingSFXSTOP
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::DamagedLoopingSFXSTOP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.DamagedLoopingSFXSTOP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.OnBuildComponentDestroyed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABarricade_C::OnBuildComponentDestroyed(class UPrimitiveComponent* PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnBuildComponentDestroyed");

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
	} params;

	params.PrimitiveComponent = PrimitiveComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.OnHealthChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABarricade_C::OnHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnHealthChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABarricade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.PlayDestructionEffects
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::PlayDestructionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.PlayDestructionEffects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.OnRadialDamageTaken
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABarricade_C::OnRadialDamageTaken(class UDamageType* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnRadialDamageTaken");

	struct
	{
		class UDamageType*             DamageType;
	} params;

	params.DamageType = DamageType;

	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.OnPointDamageTaken
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   HitBone                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABarricade_C::OnPointDamageTaken(class UDamageType* DamageType, class UPrimitiveComponent* PrimitiveComponent, const struct FName& HitBone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnPointDamageTaken");

	struct
	{
		class UDamageType*             DamageType;
		class UPrimitiveComponent*     PrimitiveComponent;
		struct FName                   HitBone;
	} params;

	params.DamageType = DamageType;
	params.PrimitiveComponent = PrimitiveComponent;
	params.HitBone = HitBone;

	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.SpawnDamagedEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::SpawnDamagedEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.SpawnDamagedEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.SpawnDamageSparks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::SpawnDamageSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.SpawnDamageSparks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.OnKilled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABarricade_C::OnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.OnKilled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.Update Health Changed FX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABarricade_C::Update_Health_Changed_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.Update Health Changed FX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Barricade.Barricade_C.ExecuteUbergraph_Barricade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABarricade_C::ExecuteUbergraph_Barricade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Barricade.Barricade_C.ExecuteUbergraph_Barricade");

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
