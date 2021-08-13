// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterMelee_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.TwistHipsOnFire
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMasterMelee_WeaponComponent_C::TwistHipsOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.TwistHipsOnFire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.PlayBulletNearMissSound
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__InxTracexStart__pfTT      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__InxTracexEnd__pfTT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      bpp__Hits__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::PlayBulletNearMissSound(const struct FVector& bpp__InxTracexStart__pfTT, const struct FVector& bpp__InxTracexEnd__pfTT, TArray<struct FHitResult>* bpp__Hits__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.PlayBulletNearMissSound");

	struct
	{
		struct FVector                 bpp__InxTracexStart__pfTT;
		struct FVector                 bpp__InxTracexEnd__pfTT;
		TArray<struct FHitResult>      bpp__Hits__pf;
	} params;

	params.bpp__InxTracexStart__pfTT = bpp__InxTracexStart__pfTT;
	params.bpp__InxTracexEnd__pfTT = bpp__InxTracexEnd__pfTT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__Hits__pf != nullptr)
		*bpp__Hits__pf = params.bpp__Hits__pf;
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Thrown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__Thrown__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::On_Thrown(bool bpp__Thrown__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Thrown");

	struct
	{
		bool                           bpp__Thrown__pf;
	} params;

	params.bpp__Thrown__pf = bpp__Thrown__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Lunge State Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsLunging__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::On_Lunge_State_Changed(bool bpp__IsLunging__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.On Lunge State Changed");

	struct
	{
		bool                           bpp__IsLunging__pf;
	} params;

	params.bpp__IsLunging__pf = bpp__IsLunging__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Lunge Attack
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsxLunging__pfT           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSCharacter*            bpp__CharacterxOwner__pfT      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::Lunge_Attack(bool bpp__IsxLunging__pfT, class AKSCharacter* bpp__CharacterxOwner__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Lunge Attack");

	struct
	{
		bool                           bpp__IsxLunging__pfT;
		class AKSCharacter*            bpp__CharacterxOwner__pfT;
	} params;

	params.bpp__IsxLunging__pfT = bpp__IsxLunging__pfT;
	params.bpp__CharacterxOwner__pfT = bpp__CharacterxOwner__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Get Or Cache Player 3P Fire Montage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__FirexMontage__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::Get_Or_Cache_Player_3P_Fire_Montage(class UAnimMontage** bpp__FirexMontage__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.Get Or Cache Player 3P Fire Montage");

	struct
	{
		class UAnimMontage*            bpp__FirexMontage__pfT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__FirexMontage__pfT != nullptr)
		*bpp__FirexMontage__pfT = params.bpp__FirexMontage__pfT;
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.GetMeleeStillMontage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            bpp__Montage__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::GetMeleeStillMontage(class UAnimMontage** bpp__Montage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.GetMeleeStillMontage");

	struct
	{
		class UAnimMontage*            bpp__Montage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__Montage__pf != nullptr)
		*bpp__Montage__pf = params.bpp__Montage__pf;
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.ExecuteUbergraph_MasterMelee_WeaponComponent_3
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::ExecuteUbergraph_MasterMelee_WeaponComponent_3(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.ExecuteUbergraph_MasterMelee_WeaponComponent_3");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.CheckForMeleeAim
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMasterMelee_WeaponComponent_C::CheckForMeleeAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.CheckForMeleeAim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnLungeChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__IsLunging__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterMelee_WeaponComponent_C::OnLungeChanged__DelegateSignature(bool bpp__IsLunging__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C.OnLungeChanged__DelegateSignature");

	struct
	{
		bool                           bpp__IsLunging__pf;
	} params;

	params.bpp__IsLunging__pf = bpp__IsLunging__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
