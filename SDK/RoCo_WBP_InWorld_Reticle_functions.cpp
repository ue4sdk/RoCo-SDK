// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InWorld_Reticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetConsoleSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_InWorld_Reticle_C::SetConsoleSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetConsoleSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPaint
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FPaintContext           Context                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_InWorld_Reticle_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPaint");

	struct
	{
		struct FPaintContext           Context;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetPlayerState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_Reticle_C::SetPlayerState(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetReticleImageColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InWorld_Reticle_C::SetReticleImageColor(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetReticleImageColor");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnWeaponSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_Reticle_C::OnWeaponSet(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnWeaponSet");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InWorld_Reticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPossession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_Reticle_C::OnPossession(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPossession");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_InWorld_Reticle_C::OnModActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnModActivated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_InWorld_Reticle_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetWeaponComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_Reticle_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.ExecuteUbergraph_WBP_InWorld_Reticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_InWorld_Reticle_C::ExecuteUbergraph_WBP_InWorld_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.ExecuteUbergraph_WBP_InWorld_Reticle");

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
