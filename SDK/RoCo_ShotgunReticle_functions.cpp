// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ShotgunReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponComponent*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValidWeaponType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UShotgunReticle_C::IsValidWeaponType(class UKSWeaponComponent* NewParam, bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.IsValidWeaponType");

	struct
	{
		class UKSWeaponComponent*      NewParam;
		bool                           IsValidWeaponType;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponComponent*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldHideAmmoGauge           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UShotgunReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent* NewParam, bool* bShouldHideAmmoGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ShouldHideAmmoGauge");

	struct
	{
		class UKSWeaponComponent*      NewParam;
		bool                           bShouldHideAmmoGauge;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::UpdateReloadBarPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateReloadBarPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::UpdateCrosshairDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateCrosshairDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.ColorSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShotgunReticle_C::ColorSet(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ColorSet");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::FadeClipMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.FadeClipMeter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShotgunReticle_C::UpdateOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.ChangeADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UShotgunReticle_C::ChangeADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ChangeADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.HitConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.HitConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.Headshot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.Headshot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.KillConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.KillConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.GrenadeCook
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          TickPeriod                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShotgunReticle_C::GrenadeCook(bool Active, float TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.GrenadeCook");

	struct
	{
		bool                           Active;
		float                          TickPeriod;
	} params;

	params.Active = Active;
	params.TickPeriod = TickPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.GrenadeTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UShotgunReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.GrenadeTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShotgunReticle_C::UpdateAmmoGauge(class UKSWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.UpdateAmmoGauge");

	struct
	{
		class UKSWeaponComponent*      Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UShotgunReticle_C::ExecuteUbergraph_ShotgunReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShotgunReticle.ShotgunReticle_C.ExecuteUbergraph_ShotgunReticle");

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
