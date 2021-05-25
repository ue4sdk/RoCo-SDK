// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AllyMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllyMinimapIcon.AllyMinimapIcon_C.UIRelevantChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::UIRelevantChanged(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.UIRelevantChanged");

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FGeometry               bpp__MyGeometry__pf            (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          bpp__InDeltaTime__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Tick");

	struct
	{
		struct FGeometry               bpp__MyGeometry__pf;
		float                          bpp__InDeltaTime__pf;
	} params;

	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnSetupStart
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAllyMinimapIcon_C::OnSetupStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnSetupStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerRevived
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__Revivee__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::OnPlayerRevived(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerRevived");

	struct
	{
		class AKSPlayerState*          bpp__Revivee__pf;
		class AKSPlayerState*          bpp__Reviver__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerDown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        bpp__CombatEventInfo__pf       (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::OnPlayerDown(const struct FCombatEventInfo& bpp__CombatEventInfo__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.OnPlayerDown");

	struct
	{
		struct FCombatEventInfo        bpp__CombatEventInfo__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__CombatEventInfo__pf = bpp__CombatEventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Handle Bomb State Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKSNeutralBombState     bpp__BombState__pf             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::Handle_Bomb_State_Changed(const struct FKSNeutralBombState& bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Handle Bomb State Changed");

	struct
	{
		struct FKSNeutralBombState     bpp__BombState__pf;
	} params;

	params.bpp__BombState__pf = bpp__BombState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.HandleMapIconWidgetReady
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAllyMinimapIcon_C::HandleMapIconWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.HandleMapIconWidgetReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyMinimapIcon.AllyMinimapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UAllyMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMinimapIcon.AllyMinimapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerReviveDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__Revivee__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::PlayerReviveDelegate__DelegateSignature(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerReviveDelegate__DelegateSignature");

	struct
	{
		class AKSPlayerState*          bpp__Revivee__pf;
		class AKSPlayerState*          bpp__Reviver__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerDownInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FCombatEventInfo        bpp__EventInfo__pf             (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::PlayerDownInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.PlayerDownInfo__DelegateSignature");

	struct
	{
		struct FCombatEventInfo        bpp__EventInfo__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnUIRelevantPlayerStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnUIRelevantPlayerStateChanged__DelegateSignature");

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnSetupPhaseStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UAllyMinimapIcon_C::OnSetupPhaseStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnSetupPhaseStart__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnNeutralBombStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FKSNeutralBombState     bpp__BombState__pf             (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAllyMinimapIcon_C::OnNeutralBombStateChanged__DelegateSignature(const struct FKSNeutralBombState& bpp__BombState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnNeutralBombStateChanged__DelegateSignature");

	struct
	{
		struct FKSNeutralBombState     bpp__BombState__pf;
	} params;

	params.bpp__BombState__pf = bpp__BombState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnMapIconWidgetReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UAllyMinimapIcon_C::OnMapIconWidgetReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMinimapIcon.AllyMinimapIcon_C.OnMapIconWidgetReady__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
