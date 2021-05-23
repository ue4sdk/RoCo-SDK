// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillstreakDurationBars_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnAimStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSCharacterAimMode            AimMode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::OnAimStateChanged(EKSCharacterAimMode AimMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnAimStateChanged"));

	struct
	{
		EKSCharacterAimMode            AimMode;
	} params;

	params.AimMode = AimMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.DestroyUnusedDurationBars
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPlayerModInstance*> PlayerMods                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::DestroyUnusedDurationBars(TArray<class UKSPlayerModInstance*>* PlayerMods)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.DestroyUnusedDurationBars"));

	struct
	{
		TArray<class UKSPlayerModInstance*> PlayerMods;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerMods != nullptr)
		*PlayerMods = params.PlayerMods;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.GetDurationBarForModInstance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_DurationBar_C*      Duration_Bar                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::GetDurationBarForModInstance(class UKSPlayerModInstance* ModInstance, class UWBP_DurationBar_C** Duration_Bar)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.GetDurationBarForModInstance"));

	struct
	{
		class UKSPlayerModInstance*    ModInstance;
		class UWBP_DurationBar_C*      Duration_Bar;
	} params;

	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);

	if (Duration_Bar != nullptr)
		*Duration_Bar = params.Duration_Bar;
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_KillstreakDurationBars_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CloseGate_PawnRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakDurationBars_C::CloseGate_PawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CloseGate_PawnRetry"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleModsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            KSCharacterRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::HandleModsUpdated(class AKSCharacter* KSCharacterRef)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleModsUpdated"));

	struct
	{
		class AKSCharacter*            KSCharacterRef;
	} params;

	params.KSCharacterRef = KSCharacterRef;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandlePlayerDownedOrEliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::HandlePlayerDownedOrEliminated(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandlePlayerDownedOrEliminated"));

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_KillstreakDurationBars_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        KillerCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacterBase*        KilledCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::OnKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.OnKilled"));

	struct
	{
		class AKSCharacterBase*        KillerCharacter;
		class AKSCharacterBase*        KilledCharacter;
	} params;

	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleOnViewedPawnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OldViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  NewViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::HandleOnViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleOnViewedPawnChanged"));

	struct
	{
		class AKSPlayerController*     Controller;
		class AActor*                  OldViewTarget;
		class AActor*                  NewViewTarget;
	} params;

	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleProjectileFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DurationTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponAsset*          WeaponAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::HandleProjectileFired(float DurationTime, class UKSWeaponAsset* WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.HandleProjectileFired"));

	struct
	{
		float                          DurationTime;
		class UKSWeaponAsset*          WeaponAsset;
	} params;

	params.DurationTime = DurationTime;
	params.WeaponAsset = WeaponAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::CustomEvent_1(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.CustomEvent_1"));

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ResetDurationBars
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakDurationBars_C::ResetDurationBars()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ResetDurationBars"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ExecuteUbergraph_WBP_KillstreakDurationBars
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakDurationBars_C::ExecuteUbergraph_WBP_KillstreakDurationBars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C.ExecuteUbergraph_WBP_KillstreakDurationBars"));

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
