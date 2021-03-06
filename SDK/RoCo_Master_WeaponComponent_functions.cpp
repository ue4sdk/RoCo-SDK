// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Master_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetShieldActive__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__ShieldIsActive__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnSetShieldActive__DelegateSignature(bool bpp__ShieldIsActive__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetShieldActive__DelegateSignature");

	struct
	{
		bool                           bpp__ShieldIsActive__pf;
	} params;

	params.bpp__ShieldIsActive__pf = bpp__ShieldIsActive__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          bpp__NewxAlpha__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnSetScopeScaleAlpha__DelegateSignature(float bpp__NewxAlpha__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature");

	struct
	{
		float                          bpp__NewxAlpha__pfT;
	} params;

	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasDefaults)
// Parameters:
// struct FRotator                bpp__NewxRevolverxChamberxRotator__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnSetRevolverChamberRotate__DelegateSignature(const struct FRotator& bpp__NewxRevolverxChamberxRotator__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature");

	struct
	{
		struct FRotator                bpp__NewxRevolverxChamberxRotator__pfTTT;
	} params;

	params.bpp__NewxRevolverxChamberxRotator__pfTTT = bpp__NewxRevolverxChamberxRotator__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__LobbyxState__pfT          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnSetLobbyState__DelegateSignature(bool bpp__LobbyxState__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature");

	struct
	{
		bool                           bpp__LobbyxState__pfT;
	} params;

	params.bpp__LobbyxState__pfT = bpp__LobbyxState__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Update_Tracer_Start_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECombatState                   bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Update_Combat_State(ECombatState bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State");

	struct
	{
		ECombatState                   bpp__NewState__pf;
	} params;

	params.bpp__NewState__pf = bpp__NewState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__DeltaTime__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::UpdateMagDropBoneVelocity(float bpp__DeltaTime__pf, int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity");

	struct
	{
		float                          bpp__DeltaTime__pf;
		int                            bpp__Index__pf;
	} params;

	params.bpp__DeltaTime__pf = bpp__DeltaTime__pf;
	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::UpdateAimDownSightsBlurValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  bpp__CameraxModifier__pfT      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__PlayerxIndex__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Found__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::TryDisableCameraModifier(class UClass* bpp__CameraxModifier__pfT, int bpp__PlayerxIndex__pfT, bool* bpp__Found__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier");

	struct
	{
		class UClass*                  bpp__CameraxModifier__pfT;
		int                            bpp__PlayerxIndex__pfT;
		bool                           bpp__Found__pf;
	} params;

	params.bpp__CameraxModifier__pfT = bpp__CameraxModifier__pfT;
	params.bpp__PlayerxIndex__pfT = bpp__PlayerxIndex__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__Found__pf != nullptr)
		*bpp__Found__pf = params.bpp__Found__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FFullFireRepData        bpp__FireData__pf              (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::SyncComputeCosmeticHits(const struct FFullFireRepData& bpp__FireData__pf, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits");

	struct
	{
		struct FFullFireRepData        bpp__FireData__pf;
		TArray<struct FHitResult>      bpp__Hits__pf;
	} params;

	params.bpp__FireData__pf = bpp__FireData__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__TracexEnd__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Spawn_Tracers_Simple(const struct FVector& bpp__TracexEnd__pfT, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf;
		struct FVector                 bpp__TracexEnd__pfT;
	} params;

	params.bpp__TracexEnd__pfT = bpp__TracexEnd__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__EndPoint__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Spawn_Tracer(const struct FVector& bpp__EndPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer");

	struct
	{
		struct FVector                 bpp__EndPoint__pf;
	} params;

	params.bpp__EndPoint__pf = bpp__EndPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FFullFireRepData        bpp__Data__pf__const           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFullFireRepData        bpp__OutxData__pfT             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Spawn_Spangs_and_Decals(const struct FFullFireRepData& bpp__Data__pf__const, TArray<struct FHitResult>* bpp__Hits__pf, struct FFullFireRepData* bpp__OutxData__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals");

	struct
	{
		struct FFullFireRepData        bpp__Data__pf__const;
		TArray<struct FHitResult>      bpp__Hits__pf;
		struct FFullFireRepData        bpp__OutxData__pfT;
	} params;

	params.bpp__Data__pf__const = bpp__Data__pf__const;

	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__OutxData__pfT != nullptr)
		*bpp__OutxData__pfT = params.bpp__OutxData__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FFullFireRepData> bpp__AimData__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::SpawnTracers(TArray<struct FHitResult>* bpp__Hits__pf, TArray<struct FFullFireRepData>* bpp__AimData__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf;
		TArray<struct FFullFireRepData> bpp__AimData__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::SpawnSpangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::SpawnDecals(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__Playx1PxFire__pfTT        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ShouldPlayFireAnim1P(bool* bpp__Playx1PxFire__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P");

	struct
	{
		bool                           bpp__Playx1PxFire__pfTT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Playx1PxFire__pfTT != nullptr)
		*bpp__Playx1PxFire__pfTT = params.bpp__Playx1PxFire__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__NewxAlpha__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Set_Scope_Scale_Alpha(float bpp__NewxAlpha__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha");

	struct
	{
		float                          bpp__NewxAlpha__pfT;
	} params;

	params.bpp__NewxAlpha__pfT = bpp__NewxAlpha__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                bpp__TargetxRotator__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ResetxRotation__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Set_Revolver_Chamber_Rotate(const struct FRotator& bpp__TargetxRotator__pfT, bool bpp__ResetxRotation__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate");

	struct
	{
		struct FRotator                bpp__TargetxRotator__pfT;
		bool                           bpp__ResetxRotation__pfT;
	} params;

	params.bpp__TargetxRotator__pfT = bpp__TargetxRotator__pfT;
	params.bpp__ResetxRotation__pfT = bpp__ResetxRotation__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Set_Muzzle_Flash_Emitter_and_Offset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Mirror Anims
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Setup_Character_Mirror_Anims()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Mirror Anims");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Setup_Character_Anim_Init_Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.SetUIWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::SetUIWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.SetUIWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsxQuickxReload__pfTT     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* UMaster_WeaponComponent_C::Select_Weapon_Reload_Montage(bool bpp__IsxQuickxReload__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage");

	struct
	{
		bool                           bpp__IsxQuickxReload__pfTT;
		class UAnimMontage*            ReturnValue;
	} params;

	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Select Character Reload Montage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__ReloadMontage__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__QuickReloadMontage__pf    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Select_Character_Reload_Montage(class UAnimMontage** bpp__ReloadMontage__pf, class UAnimMontage** bpp__QuickReloadMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Select Character Reload Montage");

	struct
	{
		class UAnimMontage*            bpp__ReloadMontage__pf;
		class UAnimMontage*            bpp__QuickReloadMontage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__ReloadMontage__pf != nullptr)
		*bpp__ReloadMontage__pf = params.bpp__ReloadMontage__pf;
	if (bpp__QuickReloadMontage__pf != nullptr)
		*bpp__QuickReloadMontage__pf = params.bpp__QuickReloadMontage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Retrieve_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Reticle_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Reset_Variables_at_Start_of_Firing_Instance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Reload_Cooldown_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick");

	struct
	{
		float                          bpp__DeltaSeconds__pf;
	} params;

	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>    bpp__EndPlayReason__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> bpp__EndPlayReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    bpp__EndPlayReason__pf;
	} params;

	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMaster_WeaponComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Pre_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Prepare_Next_Tracer_Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Post_Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__PlayRate__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsxQuickxReload__pfTT     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Weapon_Reload_animation(float bpp__PlayRate__pf, bool bpp__IsxQuickxReload__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation");

	struct
	{
		float                          bpp__PlayRate__pf;
		bool                           bpp__IsxQuickxReload__pfTT;
	} params;

	params.bpp__PlayRate__pf = bpp__PlayRate__pf;
	params.bpp__IsxQuickxReload__pfTT = bpp__IsxQuickxReload__pfTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__PlayxRate__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Reload_MultiStage(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage");

	struct
	{
		float                          bpp__PlayxRate__pfT;
		class UAnimMontage*            bpp__SelectedxMontage__pfT;
	} params;

	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__ReloadxMontage__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__QuickReloadxMontage__pfT  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsxMultixStagexReloadx__pfTTTzy (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Reload_Logic(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickReloadxMontage__pfT, bool bpp__IsxMultixStagexReloadx__pfTTTzy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic");

	struct
	{
		class UAnimMontage*            bpp__ReloadxMontage__pfT;
		class UAnimMontage*            bpp__QuickReloadxMontage__pfT;
		bool                           bpp__IsxMultixStagexReloadx__pfTTTzy;
	} params;

	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickReloadxMontage__pfT = bpp__QuickReloadxMontage__pfT;
	params.bpp__IsxMultixStagexReloadx__pfTTTzy = bpp__IsxMultixStagexReloadx__pfTTTzy;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__PlayxRate__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Reload_Base(float bpp__PlayxRate__pfT, class UAnimMontage* bpp__SelectedxMontage__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base");

	struct
	{
		float                          bpp__PlayxRate__pfT;
		class UAnimMontage*            bpp__SelectedxMontage__pfT;
	} params;

	params.bpp__PlayxRate__pfT = bpp__PlayxRate__pfT;
	params.bpp__SelectedxMontage__pfT = bpp__SelectedxMontage__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Play_Post_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EAkCallbackType                bpp__CallbackxType__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         bpp__CallbackxInfo__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Fire_Tail_Sound(EAkCallbackType bpp__CallbackxType__pfT, class UAkCallbackInfo* bpp__CallbackxInfo__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound");

	struct
	{
		EAkCallbackType                bpp__CallbackxType__pfT;
		class UAkCallbackInfo*         bpp__CallbackxInfo__pfT;
	} params;

	params.bpp__CallbackxType__pfT = bpp__CallbackxType__pfT;
	params.bpp__CallbackxInfo__pfT = bpp__CallbackxInfo__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__LocalOnly__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  bpp__PrimaryxShake__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  bpp__HiFreqxShake__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Fire_Camera_Shakes(bool bpp__LocalOnly__pf, class UClass* bpp__PrimaryxShake__pfT, class UClass* bpp__HiFreqxShake__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes");

	struct
	{
		bool                           bpp__LocalOnly__pf;
		class UClass*                  bpp__PrimaryxShake__pfT;
		class UClass*                  bpp__HiFreqxShake__pfT;
	} params;

	params.bpp__LocalOnly__pf = bpp__LocalOnly__pf;
	params.bpp__PrimaryxShake__pfT = bpp__PrimaryxShake__pfT;
	params.bpp__HiFreqxShake__pfT = bpp__HiFreqxShake__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Play_Casing_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              bpp__HitResult__pf             (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Play_Bullet_Impact_SFX(const struct FHitResult& bpp__HitResult__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX");

	struct
	{
		struct FHitResult              bpp__HitResult__pf;
	} params;

	params.bpp__HitResult__pf = bpp__HitResult__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::PlayInvalidFireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAimData                bpp__InputPin__pf__const       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::PlayFireSound(const struct FAimData& bpp__InputPin__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound");

	struct
	{
		struct FAimData                bpp__InputPin__pf__const;
	} params;

	params.bpp__InputPin__pf__const = bpp__InputPin__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::PlayEmptyFireAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__BlockingxHit__pfT__const  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__OutxHits__pfT             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf__const          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf__const            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__AllowxSpangs__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__AllowxTracers__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__AllowxDecals__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::On_Cosmetic_Trace_Complete_Internal(bool bpp__BlockingxHit__pfT__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const, bool bpp__AllowxSpangs__pfT, bool bpp__AllowxTracers__pfT, bool bpp__AllowxDecals__pfT, TArray<struct FHitResult>* bpp__OutxHits__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal");

	struct
	{
		bool                           bpp__BlockingxHit__pfT__const;
		TArray<struct FHitResult>      bpp__OutxHits__pfT;
		struct FVector                 bpp__Start__pf__const;
		struct FVector                 bpp__End__pf__const;
		bool                           bpp__AllowxSpangs__pfT;
		bool                           bpp__AllowxTracers__pfT;
		bool                           bpp__AllowxDecals__pfT;
	} params;

	params.bpp__BlockingxHit__pfT__const = bpp__BlockingxHit__pfT__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;
	params.bpp__AllowxSpangs__pfT = bpp__AllowxSpangs__pfT;
	params.bpp__AllowxTracers__pfT = bpp__AllowxTracers__pfT;
	params.bpp__AllowxDecals__pfT = bpp__AllowxDecals__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__OutxHits__pfT != nullptr)
		*bpp__OutxHits__pfT = params.bpp__OutxHits__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bBlockingHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__OutHits__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf__const          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::On_Comestic_Trace_Complete(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete");

	struct
	{
		bool                           bpp__bBlockingHit__pf;
		TArray<struct FHitResult>      bpp__OutHits__pf__const;
		struct FVector                 bpp__Start__pf__const;
		struct FVector                 bpp__End__pf__const;
	} params;

	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::On_Character_Anim_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AController*             bpp__NewController__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnPossessedBy_Event_1(class AController* bpp__NewController__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1");

	struct
	{
		class AController*             bpp__NewController__pf;
	} params;

	params.bpp__NewController__pf = bpp__NewController__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacterBase*        bpp__KillerCharacter__pf__const (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSCharacterBase*        bpp__KilledCharacter__pf__const (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnKilled_Event_1(class AKSCharacterBase* bpp__KillerCharacter__pf__const, class AKSCharacterBase* bpp__KilledCharacter__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1");

	struct
	{
		class AKSCharacterBase*        bpp__KillerCharacter__pf__const;
		class AKSCharacterBase*        bpp__KilledCharacter__pf__const;
	} params;

	params.bpp__KillerCharacter__pf__const = bpp__KillerCharacter__pf__const;
	params.bpp__KilledCharacter__pf__const = bpp__KilledCharacter__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UMaster_WeaponComponent_C::NotifyStopFireReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMaster_WeaponComponent_C::IsDropMeshValid(int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid");

	struct
	{
		int                            bpp__Index__pf;
		bool                           ReturnValue;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EWeaponStateNew                bpp__OldState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::IdleWeapon(EWeaponStateNew bpp__OldState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon");

	struct
	{
		EWeaponStateNew                bpp__OldState__pf;
	} params;

	params.bpp__OldState__pf = bpp__OldState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Holster_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Hide_Magazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.HasUIWidget
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__HasUIWidget__pf           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::HasUIWidget(bool* bpp__HasUIWidget__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.HasUIWidget");

	struct
	{
		bool                           bpp__HasUIWidget__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__HasUIWidget__pf != nullptr)
		*bpp__HasUIWidget__pf = params.bpp__HasUIWidget__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFullFireRepData        bpp__Data__pf                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::HandleWeaponFiringClientEffects(const struct FFullFireRepData& bpp__Data__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects");

	struct
	{
		struct FFullFireRepData        bpp__Data__pf;
	} params;

	params.bpp__Data__pf = bpp__Data__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__Offset__pf                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Tracer_Offset(float* bpp__Offset__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset");

	struct
	{
		float                          bpp__Offset__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Offset__pf != nullptr)
		*bpp__Offset__pf = params.bpp__Offset__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// class UParticleSystem*         bpp__SpangxToxUse__pfTT        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__PlayOnHitCharacter__pf    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Spang_Particle_System(const struct FHitResult& bpp__Hit__pf, class UParticleSystem** bpp__SpangxToxUse__pfTT, bool* bpp__PlayOnHitCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System");

	struct
	{
		struct FHitResult              bpp__Hit__pf;
		class UParticleSystem*         bpp__SpangxToxUse__pfTT;
		bool                           bpp__PlayOnHitCharacter__pf;
	} params;

	params.bpp__Hit__pf = bpp__Hit__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__SpangxToxUse__pfTT != nullptr)
		*bpp__SpangxToxUse__pfTT = params.bpp__SpangxToxUse__pfTT;
	if (bpp__PlayOnHitCharacter__pf != nullptr)
		*bpp__PlayOnHitCharacter__pf = params.bpp__PlayOnHitCharacter__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__AnimxMontage__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ScaledxPlayrate__pfT      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Scaled_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate");

	struct
	{
		class UAnimMontage*            bpp__AnimxMontage__pfT;
		float                          bpp__ScaledxPlayrate__pfT;
	} params;

	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__AnimxMontage__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ScaledxPlayrate__pfT      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Scaled_Post_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate");

	struct
	{
		class UAnimMontage*            bpp__AnimxMontage__pfT;
		float                          bpp__ScaledxPlayrate__pfT;
	} params;

	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__AnimxMontage__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ScaledxPlayrate__pfT      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate");

	struct
	{
		class UAnimMontage*            bpp__AnimxMontage__pfT;
		float                          bpp__ScaledxPlayrate__pfT;
	} params;

	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Get_Reticle_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__AnimxMontage__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__PostxReloadxPosition__pfTT (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Post_Reload_Weapon_Section_Time(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__PostxReloadxPosition__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time");

	struct
	{
		class UAnimMontage*            bpp__AnimxMontage__pfT;
		float                          bpp__PostxReloadxPosition__pfTT;
	} params;

	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__PostxReloadxPosition__pfTT != nullptr)
		*bpp__PostxReloadxPosition__pfTT = params.bpp__PostxReloadxPosition__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Player_3P_Lunge_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage");

	struct
	{
		class UAnimMontage*            bpp__Montage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Player_3P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage");

	struct
	{
		class UAnimMontage*            bpp__Montage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Player_1P_Fire_Montage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage");

	struct
	{
		class UAnimMontage*            bpp__Montage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAimData                bpp__AimData__pf               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Expected_Aim_Data(struct FAimData* bpp__AimData__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data");

	struct
	{
		struct FAimData                bpp__AimData__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__AimData__pf != nullptr)
		*bpp__AimData__pf = params.bpp__AimData__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FHitDecalInfo           bpp__DecalxInfo__pfT           (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Decal_Material(const struct FHitResult& bpp__Hit__pf, struct FHitDecalInfo* bpp__DecalxInfo__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material");

	struct
	{
		struct FHitResult              bpp__Hit__pf;
		struct FHitDecalInfo           bpp__DecalxInfo__pfT;
	} params;

	params.bpp__Hit__pf = bpp__Hit__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__DecalxInfo__pfT != nullptr)
		*bpp__DecalxInfo__pfT = params.bpp__DecalxInfo__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Deattach Slot Name
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AKSCharacter*            bpp__KSCharacter__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__SlotxName__pfT            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Deattach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Deattach Slot Name");

	struct
	{
		class AKSCharacter*            bpp__KSCharacter__pf;
		struct FName                   bpp__SlotxName__pfT;
	} params;

	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__SlotxName__pfT != nullptr)
		*bpp__SlotxName__pfT = params.bpp__SlotxName__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSCharacterAnimInst*    bpp__AnimxInst__pfT            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Character_Anim_Instance(class UKSCharacterAnimInst** bpp__AnimxInst__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance");

	struct
	{
		class UKSCharacterAnimInst*    bpp__AnimxInst__pfT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__AnimxInst__pfT != nullptr)
		*bpp__AnimxInst__pfT = params.bpp__AnimxInst__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__3pxFirexSection__pfTT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Character_3p_Fire_Section(struct FName* bpp__3pxFirexSection__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section");

	struct
	{
		struct FName                   bpp__3pxFirexSection__pfTT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__3pxFirexSection__pfTT != nullptr)
		*bpp__3pxFirexSection__pfTT = params.bpp__3pxFirexSection__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__1pxFirexSection__pfTT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Character_1p_Fire_Section(struct FName* bpp__1pxFirexSection__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section");

	struct
	{
		struct FName                   bpp__1pxFirexSection__pfTT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__1pxFirexSection__pfTT != nullptr)
		*bpp__1pxFirexSection__pfTT = params.bpp__1pxFirexSection__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Attach Slot Name
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AKSCharacter*            bpp__KSCharacter__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__SlotxName__pfT            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Get_Attach_Slot_Name(class AKSCharacter* bpp__KSCharacter__pf, struct FName* bpp__SlotxName__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Get Attach Slot Name");

	struct
	{
		class AKSCharacter*            bpp__KSCharacter__pf;
		struct FName                   bpp__SlotxName__pfT;
	} params;

	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__SlotxName__pfT != nullptr)
		*bpp__SlotxName__pfT = params.bpp__SlotxName__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 bpp__TracerStartLocation__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetTracerStartPoint(struct FVector* bpp__TracerStartLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint");

	struct
	{
		struct FVector                 bpp__TracerStartLocation__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__TracerStartLocation__pf != nullptr)
		*bpp__TracerStartLocation__pf = params.bpp__TracerStartLocation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__RowNamePrefix__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__RowName__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetTableRowNameForHit(const struct FHitResult& bpp__Hit__pf, const struct FName& bpp__RowNamePrefix__pf, struct FName* bpp__RowName__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit");

	struct
	{
		struct FHitResult              bpp__Hit__pf;
		struct FName                   bpp__RowNamePrefix__pf;
		struct FName                   bpp__RowName__pf;
	} params;

	params.bpp__Hit__pf = bpp__Hit__pf;
	params.bpp__RowNamePrefix__pf = bpp__RowNamePrefix__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__RowName__pf != nullptr)
		*bpp__RowName__pf = params.bpp__RowName__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__Percent__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetPercentRemainingAmmo(float* bpp__Percent__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo");

	struct
	{
		float                          bpp__Percent__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Percent__pf != nullptr)
		*bpp__Percent__pf = params.bpp__Percent__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                bpp__WorldRotation__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetMagDropBoneRotation(int bpp__Index__pf, struct FRotator* bpp__WorldRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation");

	struct
	{
		int                            bpp__Index__pf;
		struct FRotator                bpp__WorldRotation__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__WorldRotation__pf != nullptr)
		*bpp__WorldRotation__pf = params.bpp__WorldRotation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__WorldLocation__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetMagDropBoneLocation(int bpp__Index__pf, struct FVector* bpp__WorldLocation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation");

	struct
	{
		int                            bpp__Index__pf;
		struct FVector                 bpp__WorldLocation__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__WorldLocation__pf != nullptr)
		*bpp__WorldLocation__pf = params.bpp__WorldLocation__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagazineDropBoneName
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   bpp__Name__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetMagazineDropBoneName(struct FName* bpp__Name__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagazineDropBoneName");

	struct
	{
		struct FName                   bpp__Name__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Name__pf != nullptr)
		*bpp__Name__pf = params.bpp__Name__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetFirstShotAudioEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* UMaster_WeaponComponent_C::GetFirstShotAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetFirstShotAudioEvent");

	struct
	{
		class UAkAudioEvent*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetFireAudioEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* UMaster_WeaponComponent_C::GetFireAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetFireAudioEvent");

	struct
	{
		class UAkAudioEvent*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetEchoAudioEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAkAudioEvent*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAkAudioEvent* UMaster_WeaponComponent_C::GetEchoAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetEchoAudioEvent");

	struct
	{
		class UAkAudioEvent*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__WorldVelocity__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetDropVelocity(int bpp__Index__pf, struct FVector* bpp__WorldVelocity__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity");

	struct
	{
		int                            bpp__Index__pf;
		struct FVector                 bpp__WorldVelocity__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__WorldVelocity__pf != nullptr)
		*bpp__WorldVelocity__pf = params.bpp__WorldVelocity__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class USkeletalMesh*           bpp__SkelMesh__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UStaticMesh*             bpp__StaticMesh__pf            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::GetDropMesh(int bpp__Index__pf, class USkeletalMesh** bpp__SkelMesh__pf, class UStaticMesh** bpp__StaticMesh__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh");

	struct
	{
		int                            bpp__Index__pf;
		class USkeletalMesh*           bpp__SkelMesh__pf;
		class UStaticMesh*             bpp__StaticMesh__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__SkelMesh__pf != nullptr)
		*bpp__SkelMesh__pf = params.bpp__SkelMesh__pf;
	if (bpp__StaticMesh__pf != nullptr)
		*bpp__StaticMesh__pf = params.bpp__StaticMesh__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Force_Exit_ADS_Pose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Force_ADS_Scope()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::ForceRetrieveWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::ForceRetrieveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::ForceHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToHolsterSocket
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::ForceAttachWeaponToHolsterSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToHolsterSocket");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToActiveSocket
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::ForceAttachWeaponToActiveSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToActiveSocket");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight");

	struct
	{
		class USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf;
	} params;

	params.bpp__MeshComponent__pf = bpp__MeshComponent__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Fixup_Attach_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFullFireRepData        bpp__Data__pf                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__PlayNoChainFireMontage__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Fire_Weapon(const struct FFullFireRepData& bpp__Data__pf, bool bpp__PlayNoChainFireMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon");

	struct
	{
		struct FFullFireRepData        bpp__Data__pf;
		bool                           bpp__PlayNoChainFireMontage__pf;
	} params;

	params.bpp__Data__pf = bpp__Data__pf;
	params.bpp__PlayNoChainFireMontage__pf = bpp__PlayNoChainFireMontage__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 bpp__Section__pf__const        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Fire_Montage_Jump_To_Section(const struct FString& bpp__Section__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section");

	struct
	{
		struct FString                 bpp__Section__pf__const;
	} params;

	params.bpp__Section__pf__const = bpp__Section__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__TracexHitxResults__pfTT   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__FilteredxHitxResults__pfTT (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* bpp__TracexHitxResults__pfTT, TArray<struct FHitResult>* bpp__FilteredxHitxResults__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results");

	struct
	{
		TArray<struct FHitResult>      bpp__TracexHitxResults__pfTT;
		TArray<struct FHitResult>      bpp__FilteredxHitxResults__pfTT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__TracexHitxResults__pfTT != nullptr)
		*bpp__TracexHitxResults__pfTT = params.bpp__TracexHitxResults__pfTT;
	if (bpp__FilteredxHitxResults__pfTT != nullptr)
		*bpp__FilteredxHitxResults__pfTT = params.bpp__FilteredxHitxResults__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_10
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_10(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_10");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_42
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_42(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_42");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_40
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_40(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_40");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_38
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_38(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_38");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_34
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_34(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_34");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_3
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_3(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_3");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_1
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ExecuteUbergraph_Master_WeaponComponent_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_1");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Shield Mesh Anim State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ShieldxState__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Evaluate_Shield_Mesh_Anim_State(bool bpp__ShieldxState__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Shield Mesh Anim State");

	struct
	{
		bool                           bpp__ShieldxState__pfT;
	} params;

	params.bpp__ShieldxState__pfT = bpp__ShieldxState__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Evaluate_Revolver_Chamber_Rotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__AbortxReloadxAnimation__pfTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__CancelledxAxReload__pfTT  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::End_Reload_Weapon(bool bpp__AbortxReloadxAnimation__pfTT, bool* bpp__CancelledxAxReload__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon");

	struct
	{
		bool                           bpp__AbortxReloadxAnimation__pfTT;
		bool                           bpp__CancelledxAxReload__pfTT;
	} params;

	params.bpp__AbortxReloadxAnimation__pfTT = bpp__AbortxReloadxAnimation__pfTT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__CancelledxAxReload__pfTT != nullptr)
		*bpp__CancelledxAxReload__pfTT = params.bpp__CancelledxAxReload__pfTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  bpp__Modifier__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__PlayerIndex__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCameraModifier*         bpp__ModifierxObject__pfT      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::EnableOrAddCameraModifier(class UClass* bpp__Modifier__pf, int bpp__PlayerIndex__pf, class UCameraModifier** bpp__ModifierxObject__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier");

	struct
	{
		class UClass*                  bpp__Modifier__pf;
		int                            bpp__PlayerIndex__pf;
		class UCameraModifier*         bpp__ModifierxObject__pfT;
	} params;

	params.bpp__Modifier__pf = bpp__Modifier__pf;
	params.bpp__PlayerIndex__pf = bpp__PlayerIndex__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ModifierxObject__pfT != nullptr)
		*bpp__ModifierxObject__pfT = params.bpp__ModifierxObject__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            bpp__Index__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::DropMagInternal(int bpp__Index__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal");

	struct
	{
		int                            bpp__Index__pf;
	} params;

	params.bpp__Index__pf = bpp__Index__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::DropMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::DetermineMagSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf__const           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__TracexEnd__pfT__const     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Delay_Spawn_Tracers(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__TracexEnd__pfT__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf__const;
		struct FVector                 bpp__TracexEnd__pfT__const;
	} params;

	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__TracexEnd__pfT__const = bpp__TracexEnd__pfT__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Delay_Spawn_Spangs(TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FHitResult>      bpp__Hits__pf__const           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Delay_Spawn_Decals(TArray<struct FHitResult> bpp__Hits__pf__const, const struct FVector& bpp__Start__pf, const struct FVector& bpp__End__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals");

	struct
	{
		TArray<struct FHitResult>      bpp__Hits__pf__const;
		struct FVector                 bpp__Start__pf;
		struct FVector                 bpp__End__pf;
	} params;

	params.bpp__Hits__pf__const = bpp__Hits__pf__const;
	params.bpp__Start__pf = bpp__Start__pf;
	params.bpp__End__pf = bpp__End__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   bpp__ViewPawn__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::CheckKillCamScope(class APawn* bpp__ViewPawn__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope");

	struct
	{
		class APawn*                   bpp__ViewPawn__pf;
	} params;

	params.bpp__ViewPawn__pf = bpp__ViewPawn__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECombatState                   bpp__OldCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ECombatState                   bpp__NewCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Character_Combat_State_Changed(ECombatState bpp__OldCombatState__pf, ECombatState bpp__NewCombatState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed");

	struct
	{
		ECombatState                   bpp__OldCombatState__pf;
		ECombatState                   bpp__NewCombatState__pf;
	} params;

	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__CanxSpawnxxTracer__pfTTT  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Can_Spawn_Tracer_Now(bool* bpp__CanxSpawnxxTracer__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now");

	struct
	{
		bool                           bpp__CanxSpawnxxTracer__pfTTT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__CanxSpawnxxTracer__pfTTT != nullptr)
		*bpp__CanxSpawnxxTracer__pfTTT = params.bpp__CanxSpawnxxTracer__pfTTT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::CancelReloadCosmetic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__ReloadxMontage__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__QuickxReloadxMontage__pfTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__PlayRate__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsxQuickReload__pfT       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Calculate_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time");

	struct
	{
		class UAnimMontage*            bpp__ReloadxMontage__pfT;
		class UAnimMontage*            bpp__QuickxReloadxMontage__pfTT;
		float                          bpp__PlayRate__pf;
		class UAnimMontage*            bpp__SelectedxMontage__pfT;
		bool                           bpp__IsxQuickReload__pfT;
	} params;

	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__ReloadxMontage__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__QuickxReloadxMontage__pfTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__PlayRate__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            bpp__SelectedxMontage__pfT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsxQuickReload__pfT       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Calculate_Multistage_Reload_Time(class UAnimMontage* bpp__ReloadxMontage__pfT, class UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float* bpp__PlayRate__pf, class UAnimMontage** bpp__SelectedxMontage__pfT, bool* bpp__IsxQuickReload__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time");

	struct
	{
		class UAnimMontage*            bpp__ReloadxMontage__pfT;
		class UAnimMontage*            bpp__QuickxReloadxMontage__pfTT;
		float                          bpp__PlayRate__pf;
		class UAnimMontage*            bpp__SelectedxMontage__pfT;
		bool                           bpp__IsxQuickReload__pfT;
	} params;

	params.bpp__ReloadxMontage__pfT = bpp__ReloadxMontage__pfT;
	params.bpp__QuickxReloadxMontage__pfTT = bpp__QuickxReloadxMontage__pfTT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__PlayRate__pf != nullptr)
		*bpp__PlayRate__pf = params.bpp__PlayRate__pf;
	if (bpp__SelectedxMontage__pfT != nullptr)
		*bpp__SelectedxMontage__pfT = params.bpp__SelectedxMontage__pfT;
	if (bpp__IsxQuickReload__pfT != nullptr)
		*bpp__IsxQuickReload__pfT = params.bpp__IsxQuickReload__pfT;
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::BuildupWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMaster_WeaponComponent_C::BlueprintPrepareKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UMaster_WeaponComponent_C::BlueprintPersistentCosmeticsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::AudioOnCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Holster Socket
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Attach_Weapon_To_Holster_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Holster Socket");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Attach_Weapon_To_Active_Socket()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFullFireRepData        bpp__FirexData__pfT__const     (CPF_ConstParm, CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::AsyncComputeCosmeticHitsAndPlay(const struct FFullFireRepData& bpp__FirexData__pfT__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay");

	struct
	{
		struct FFullFireRepData        bpp__FirexData__pfT__const;
	} params;

	params.bpp__FirexData__pfT__const = bpp__FirexData__pfT__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Apply_Spang_From_Hit_Result(const struct FHitResult& bpp__Hit__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result");

	struct
	{
		struct FHitResult              bpp__Hit__pf;
	} params;

	params.bpp__Hit__pf = bpp__Hit__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              bpp__Hit__pf                   (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::ApplyDecalFromHit(const struct FHitResult& bpp__Hit__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit");

	struct
	{
		struct FHitResult              bpp__Hit__pf;
	} params;

	params.bpp__Hit__pf = bpp__Hit__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Weapon State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Weapon_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Weapon State");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Use Weapon Additive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Use_Weapon_Additive(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Use Weapon Additive");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Shield Is Active
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Shield_Is_Active(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Shield Is Active");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Scope Mesh Scale
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Scope_Mesh_Scale(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Scope Mesh Scale");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Lobby State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimInstance*           bpp__BackupxAnimxInst__pfTT    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Lobby_State(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT, class UAnimInstance* bpp__BackupxAnimxInst__pfTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Lobby State");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
		class UAnimInstance*           bpp__BackupxAnimxInst__pfTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;
	params.bpp__BackupxAnimxInst__pfTT = bpp__BackupxAnimxInst__pfTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Hide Magazine
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Hide_Magazine(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Hide Magazine");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Folding Stock
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Folding_Stock(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Folding Stock");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Disable Alternate Mirroring (Temp)
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_Set_Disable_Alternate_Mirroring__Temp_(class UKSWeaponAnimInstance* bpp__KSxWeaponxAnimxInst__pfTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Disable Alternate Mirroring (Temp)");

	struct
	{
		class UKSWeaponAnimInstance*   bpp__KSxWeaponxAnimxInst__pfTTT;
	} params;

	params.bpp__KSxWeaponxAnimxInst__pfTTT = bpp__KSxWeaponxAnimxInst__pfTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkinnableSkeletalMeshComponent* bpp__SkelComp__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimInstance*           bpp__AnimInstance__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent* bpp__SkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh");

	struct
	{
		class USkinnableSkeletalMeshComponent* bpp__SkelComp__pf;
		class UAnimInstance*           bpp__AnimInstance__pf;
	} params;

	params.bpp__SkelComp__pf = bpp__SkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Ancillary_Mesh_Scale_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.Aim Over Shoulder Check Point
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMaster_WeaponComponent_C::Aim_Over_Shoulder_Check_Point()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.Aim Over Shoulder Check Point");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bBlockingHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__OutHits__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf__const          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::After_Spawn_Tracers_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay");

	struct
	{
		bool                           bpp__bBlockingHit__pf;
		TArray<struct FHitResult>      bpp__OutHits__pf__const;
		struct FVector                 bpp__Start__pf__const;
		struct FVector                 bpp__End__pf__const;
	} params;

	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bBlockingHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__OutHits__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf__const          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::After_Spawn_Spangs_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay");

	struct
	{
		bool                           bpp__bBlockingHit__pf;
		TArray<struct FHitResult>      bpp__OutHits__pf__const;
		struct FVector                 bpp__Start__pf__const;
		struct FVector                 bpp__End__pf__const;
	} params;

	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bBlockingHit__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__OutHits__pf__const        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__Start__pf__const          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__End__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::After_Spawn_Decals_Delay(bool bpp__bBlockingHit__pf, TArray<struct FHitResult> bpp__OutHits__pf__const, const struct FVector& bpp__Start__pf__const, const struct FVector& bpp__End__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay");

	struct
	{
		bool                           bpp__bBlockingHit__pf;
		TArray<struct FHitResult>      bpp__OutHits__pf__const;
		struct FVector                 bpp__Start__pf__const;
		struct FVector                 bpp__End__pf__const;
	} params;

	params.bpp__bBlockingHit__pf = bpp__bBlockingHit__pf;
	params.bpp__OutHits__pf__const = bpp__OutHits__pf__const;
	params.bpp__Start__pf__const = bpp__Start__pf__const;
	params.bpp__End__pf__const = bpp__End__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSWeaponComponent*      bpp__WeaponComponent__pf       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponStateNew                bpp__OldState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponStateNew                bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnWeaponComponentStateChanged__DelegateSignature(class UKSWeaponComponent* bpp__WeaponComponent__pf, EWeaponStateNew bpp__OldState__pf, EWeaponStateNew bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature");

	struct
	{
		class UKSWeaponComponent*      bpp__WeaponComponent__pf;
		EWeaponStateNew                bpp__OldState__pf;
		EWeaponStateNew                bpp__NewState__pf;
	} params;

	params.bpp__WeaponComponent__pf = bpp__WeaponComponent__pf;
	params.bpp__OldState__pf = bpp__OldState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AController*             bpp__NewController__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnPossessedBy__DelegateSignature(class AController* bpp__NewController__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature");

	struct
	{
		class AController*             bpp__NewController__pf;
	} params;

	params.bpp__NewController__pf = bpp__NewController__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnKilled__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacterBase*        bpp__KillerCharacter__pf       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSCharacterBase*        bpp__KilledCharacter__pf       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnKilled__DelegateSignature(class AKSCharacterBase* bpp__KillerCharacter__pf, class AKSCharacterBase* bpp__KilledCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnKilled__DelegateSignature");

	struct
	{
		class AKSCharacterBase*        bpp__KillerCharacter__pf;
		class AKSCharacterBase*        bpp__KilledCharacter__pf;
	} params;

	params.bpp__KillerCharacter__pf = bpp__KillerCharacter__pf;
	params.bpp__KilledCharacter__pf = bpp__KilledCharacter__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// ECombatState                   bpp__OldCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ECombatState                   bpp__NewCombatState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnCombatStateChanged__DelegateSignature(ECombatState bpp__OldCombatState__pf, ECombatState bpp__NewCombatState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature");

	struct
	{
		ECombatState                   bpp__OldCombatState__pf;
		ECombatState                   bpp__NewCombatState__pf;
	} params;

	params.bpp__OldCombatState__pf = bpp__OldCombatState__pf;
	params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimInstance*           bpp__AnimInstance__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMaster_WeaponComponent_C::OnAnimInitializedOnSkinnableMesh__DelegateSignature(class USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf, class UAnimInstance* bpp__AnimInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature");

	struct
	{
		class USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf;
		class UAnimInstance*           bpp__AnimInstance__pf;
	} params;

	params.bpp__SkinnableSkelComp__pf = bpp__SkinnableSkelComp__pf;
	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UMaster_WeaponComponent_C::OnAnimInitialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
