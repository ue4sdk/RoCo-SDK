// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CharacterEmotionComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UCharacterEmotionComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::Player_Downed_Changed(class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCharacterEmotionComponent_C::Check_Death_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacterBase*        bpp__KSCharacter__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::Character_Health_Changed(class AKSCharacterBase* bpp__KSCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed");

	struct
	{
		class AKSCharacterBase*        bpp__KSCharacter__pf;
	} params;

	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EKSCharacterAimMode            bpp__NewParam__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::Character_Aim_State_Changed(EKSCharacterAimMode bpp__NewParam__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed");

	struct
	{
		EKSCharacterAimMode            bpp__NewParam__pf;
	} params;

	params.bpp__NewParam__pf = bpp__NewParam__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature");

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UCharacterEmotionComponent_C::OnDeathStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::OnCharacterDownedChanged__DelegateSignature(class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// EKSCharacterAimMode            bpp__NewAimMode__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UCharacterEmotionComponent_C::OnAimStateChange__DelegateSignature(EKSCharacterAimMode bpp__NewAimMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature");

	struct
	{
		EKSCharacterAimMode            bpp__NewAimMode__pf;
	} params;

	params.bpp__NewAimMode__pf = bpp__NewAimMode__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
