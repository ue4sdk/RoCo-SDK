// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReticuleMoving_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReticuleMoving.ReticuleMoving_C.ResetADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::ResetADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ResetADS");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsShotBlocked                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector2D               Translation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               IconScale                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::UpdateBlockedShotDisplay(bool IsShotBlocked, const struct FVector2D& Translation, const struct FVector2D& IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotDisplay");

	struct
	{
		bool                           IsShotBlocked;
		struct FVector2D               Translation;
		struct FVector2D               IconScale;
	} params;

	params.IsShotBlocked = IsShotBlocked;
	params.Translation = Translation;
	params.IconScale = IconScale;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UnBindReticleAmmoGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::UnBindReticleAmmoGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UnBindReticleAmmoGauge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunElimination
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HandleShotgunElimination()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleShotgunElimination");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.ProcessShotgunHitDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShotgunHitData         InShotgunHitData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UReticuleMoving_C::ProcessShotgunHitDisplay(const struct FShotgunHitData& InShotgunHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ProcessShotgunHitDisplay");

	struct
	{
		struct FShotgunHitData         InShotgunHitData;
	} params;

	params.InShotgunHitData = InShotgunHitData;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UnbindShotgunNotify
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::UnbindShotgunNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UnbindShotgunNotify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.BindToShotgunNotify
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::BindToShotgunNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.BindToShotgunNotify");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.IsShotgunReticleType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UReticleBase_C*          Reticle                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::IsShotgunReticleType(bool* Return, class UReticleBase_C** Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.IsShotgunReticleType");

	struct
	{
		bool                           Return;
		class UReticleBase_C*          Reticle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return != nullptr)
		*Return = params.Return;
	if (Reticle != nullptr)
		*Reticle = params.Reticle;
}


// Function ReticuleMoving.ReticuleMoving_C.BindReticleAmmoGauge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::BindReticleAmmoGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.BindReticleAmmoGauge");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.CheckShotgunReload
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsShotgunReload                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticuleMoving_C::CheckShotgunReload(bool* IsShotgunReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.CheckShotgunReload");

	struct
	{
		bool                           IsShotgunReload;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsShotgunReload != nullptr)
		*IsShotgunReload = params.IsShotgunReload;
}


// Function ReticuleMoving.ReticuleMoving_C.GetActiveReticle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UReticleBase_C*          Reticle                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::GetActiveReticle(class UReticleBase_C** Reticle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.GetActiveReticle");

	struct
	{
		class UReticleBase_C*          Reticle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Reticle != nullptr)
		*Reticle = params.Reticle;
}


// Function ReticuleMoving.ReticuleMoving_C.SetActiveReticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::SetActiveReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.SetActiveReticle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::HandleBlockedShotLerpUpdate(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpUpdate");

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HandleBlockedShotLerpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleBlockedShotLerpFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReticuleMoving_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.AimStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSCharacterAimMode            NewAimMode                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::AimStateChange(EKSCharacterAimMode NewAimMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.AimStateChange");

	struct
	{
		EKSCharacterAimMode            NewAimMode;
	} params;

	params.NewAimMode = NewAimMode;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.Kill
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UReticuleMoving_C::Kill(const struct FCombatEventInfo& Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Kill");

	struct
	{
		struct FCombatEventInfo        Victim;
	} params;

	params.Victim = Victim;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.OnInstigatedDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsHeadshot                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsDown                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isLethal                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           isShielded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UClass*                  DamageTypeClass                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Damage_Resisted                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticuleMoving_C::OnInstigatedDamage(float DamageAmount, bool IsHeadshot, bool IsDown, bool isLethal, bool isShielded, class UClass* DamageTypeClass, class AActor* Target, class AActor* DamageCauser, bool Damage_Resisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.OnInstigatedDamage");

	struct
	{
		float                          DamageAmount;
		bool                           IsHeadshot;
		bool                           IsDown;
		bool                           isLethal;
		bool                           isShielded;
		class UClass*                  DamageTypeClass;
		class AActor*                  Target;
		class AActor*                  DamageCauser;
		bool                           Damage_Resisted;
	} params;

	params.DamageAmount = DamageAmount;
	params.IsHeadshot = IsHeadshot;
	params.IsDown = IsDown;
	params.isLethal = isLethal;
	params.isShielded = isShielded;
	params.DamageTypeClass = DamageTypeClass;
	params.Target = Target;
	params.DamageCauser = DamageCauser;
	params.Damage_Resisted = Damage_Resisted;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateReticleOffset
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OffsetFromCenterScreen         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::UpdateReticleOffset(float OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateReticleOffset");

	struct
	{
		float                          OffsetFromCenterScreen;
	} params;

	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotIcon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IconVisible                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector2D               Translation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               IconScale                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.UpdateBlockedShotIcon");

	struct
	{
		bool                           IconVisible;
		struct FVector2D               Translation;
		struct FVector2D               IconScale;
	} params;

	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearActiveWeaponComponent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleOnKillCamViewProjectile
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile*           ViewProjectile                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::HandleOnKillCamViewProjectile(class AKSProjectile* ViewProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleOnKillCamViewProjectile");

	struct
	{
		class AKSProjectile*           ViewProjectile;
	} params;

	params.ViewProjectile = ViewProjectile;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticuleMoving_C::HandleKillCamEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleKillCamEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.ViewedPawnInstigatedDamageNotify
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        DamageInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UReticuleMoving_C::ViewedPawnInstigatedDamageNotify(const struct FCombatEventInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ViewedPawnInstigatedDamageNotify");

	struct
	{
		struct FCombatEventInfo        DamageInfo;
	} params;

	params.DamageInfo = DamageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.OnPlayerKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        KillerCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacterBase*        KilledCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::OnPlayerKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.OnPlayerKilled");

	struct
	{
		class AKSCharacterBase*        KillerCharacter;
		class AKSCharacterBase*        KilledCharacter;
	} params;

	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleReload (New)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::HandleReload__New_(class UKSWeaponComponent* WeaponComponent, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleReload (New)");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.WeaponComponent = WeaponComponent;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.GrenadeStateChange (New)
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                Old_State                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                New_State                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::GrenadeStateChange__New_(class UKSWeaponComponent* Weapon, EWeaponStateNew Old_State, EWeaponStateNew New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.GrenadeStateChange (New)");

	struct
	{
		class UKSWeaponComponent*      Weapon;
		EWeaponStateNew                Old_State;
		EWeaponStateNew                New_State;
	} params;

	params.Weapon = Weapon;
	params.Old_State = Old_State;
	params.New_State = New_State;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleShotgunNotify
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            KSCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FShotgunHitData         InShotgunHitData               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UReticuleMoving_C::HandleShotgunNotify(class AKSCharacter* KSCharacter, const struct FShotgunHitData& InShotgunHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleShotgunNotify");

	struct
	{
		class AKSCharacter*            KSCharacter;
		struct FShotgunHitData         InShotgunHitData;
	} params;

	params.KSCharacter = KSCharacter;
	params.InShotgunHitData = InShotgunHitData;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.PreClearPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReticuleMoving_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.PreClearPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HideResistIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HideResistIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HideResistIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HideDamagedGadgetIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HideDamagedGadgetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HideDamagedGadgetIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HideBrokenGadgetIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HideBrokenGadgetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HideBrokenGadgetIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HideFlashbangIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HideFlashbangIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HideFlashbangIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Player Down or Elim Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::Handle_Player_Down_or_Elim_Changed(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Player Down or Elim Changed");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleLightBombHitCount
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            HitCount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::HandleLightBombHitCount(int HitCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleLightBombHitCount");

	struct
	{
		int                            HitCount;
	} params;

	params.HitCount = HitCount;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleEmoteStoppedPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HandleEmoteStoppedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleEmoteStoppedPlaying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleOnEmoteStartedPlaying
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HandleOnEmoteStartedPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleOnEmoteStartedPlaying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleDeathStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::HandleDeathStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleDeathStateChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.HandleCrosshairHidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Hidden                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReticuleMoving_C::HandleCrosshairHidden(class AKSCharacter* Character, bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.HandleCrosshairHidden");

	struct
	{
		class AKSCharacter*            Character;
		bool                           Hidden;
	} params;

	params.Character = Character;
	params.Hidden = Hidden;

	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::Handle_Out_Of_Bounds_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds End");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds Begin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReticuleMoving_C::Handle_Out_Of_Bounds_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.Handle Out Of Bounds Begin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReticuleMoving.ReticuleMoving_C.ExecuteUbergraph_ReticuleMoving
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReticuleMoving_C::ExecuteUbergraph_ReticuleMoving(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReticuleMoving.ReticuleMoving_C.ExecuteUbergraph_ReticuleMoving");

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
