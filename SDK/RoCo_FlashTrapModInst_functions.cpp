// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashTrapModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlashTrapModInst.FlashTrapModInst_C.CanActivateNow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EKSAbilityUsageFailureType     OutAbilityFailureType          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UFlashTrapModInst_C::CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.CanActivateNow");

	struct
	{
		EKSAbilityUsageFailureType     OutAbilityFailureType;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutAbilityFailureType != nullptr)
		*OutAbilityFailureType = params.OutAbilityFailureType;

	return params.ReturnValue;
}


// Function FlashTrapModInst.FlashTrapModInst_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnNewGivenItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::OnNewGivenItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnNewGivenItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnWeaponStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EWeaponStateNew                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::OnWeaponStateChanged(class AKSWeapon* Weapon, EWeaponStateNew OldState, EWeaponStateNew NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnWeaponStateChanged");

	struct
	{
		class AKSWeapon*               Weapon;
		EWeaponStateNew                OldState;
		EWeaponStateNew                NewState;
	} params;

	params.Weapon = Weapon;
	params.OldState = OldState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.BeginActivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::BeginActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.BeginActivation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile_Grenade*   Grenade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::OnGrenadeSpawned(class AKSProjectile_Grenade* Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeSpawned");

	struct
	{
		class AKSProjectile_Grenade*   Grenade;
	} params;

	params.Grenade = Grenade;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::OnGrenadeDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnGrenadeDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.Init_RemoteThrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteThrow*   RemoteThrow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::Init_RemoteThrow(class AKSWeapon_RemoteThrow* RemoteThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.Init_RemoteThrow");

	struct
	{
		class AKSWeapon_RemoteThrow*   RemoteThrow;
	} params;

	params.RemoteThrow = RemoteThrow;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.Init_Detonator
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteTrigger* Detonator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::Init_Detonator(class AKSWeapon_RemoteTrigger* Detonator)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.Init_Detonator");

	struct
	{
		class AKSWeapon_RemoteTrigger* Detonator;
	} params;

	params.Detonator = Detonator;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Detonator Spawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteTrigger* Detonator                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::On_Detonator_Spawned(class AKSWeapon_RemoteTrigger* Detonator)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Detonator Spawned");

	struct
	{
		class AKSWeapon_RemoteTrigger* Detonator;
	} params;

	params.Detonator = Detonator;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Remote Throw Spawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon_RemoteThrow*   RemoteThrow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::On_Remote_Throw_Spawned(class AKSWeapon_RemoteThrow* RemoteThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Remote Throw Spawned");

	struct
	{
		class AKSWeapon_RemoteThrow*   RemoteThrow;
	} params;

	params.RemoteThrow = RemoteThrow;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.FiredOnAuthority
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::FiredOnAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.FiredOnAuthority");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Reclaimed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile*           Reclaimed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::On_Reclaimed(class AKSProjectile* Reclaimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Reclaimed");

	struct
	{
		class AKSProjectile*           Reclaimed;
	} params;

	params.Reclaimed = Reclaimed;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnAbilityReleased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::OnAbilityReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnAbilityReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlashTrapModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.On Character Died
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        KillerCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacterBase*        KilledCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::On_Character_Died(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.On Character Died");

	struct
	{
		class AKSCharacterBase*        KillerCharacter;
		class AKSCharacterBase*        KilledCharacter;
	} params;

	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashTrapModInst.FlashTrapModInst_C.ExecuteUbergraph_FlashTrapModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashTrapModInst_C::ExecuteUbergraph_FlashTrapModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashTrapModInst.FlashTrapModInst_C.ExecuteUbergraph_FlashTrapModInst");

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
