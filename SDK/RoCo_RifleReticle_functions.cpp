// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RifleReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RifleReticle.RifleReticle_C.Set Reticle Color
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::Set_Reticle_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Set Reticle Color");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.Set Reticle Height
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::Set_Reticle_Height(int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Set Reticle Height");

	struct
	{
		int                            Height;
	} params;

	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.Set Reticle Width
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::Set_Reticle_Width(int Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Set Reticle Width");

	struct
	{
		int                            Width;
	} params;

	params.Width = Width;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.ChangeReticleSizeInternal
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Center_Dot_Index               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Crosshair_Index                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::ChangeReticleSizeInternal(int Center_Dot_Index, int Crosshair_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ChangeReticleSizeInternal");

	struct
	{
		int                            Center_Dot_Index;
		int                            Crosshair_Index;
	} params;

	params.Center_Dot_Index = Center_Dot_Index;
	params.Crosshair_Index = Crosshair_Index;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.ChangeReticleSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URifleReticle_C::ChangeReticleSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ChangeReticleSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.HideAmmoProgressCircle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsADS                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URifleReticle_C::HideAmmoProgressCircle(bool IsADS)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.HideAmmoProgressCircle");

	struct
	{
		bool                           IsADS;
	} params;

	params.IsADS = IsADS;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.IsValidWeaponType
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponComponent*      NewParam1                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValidWeaponType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URifleReticle_C::IsValidWeaponType(class UKSWeaponComponent* NewParam1, bool* IsValidWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.IsValidWeaponType");

	struct
	{
		class UKSWeaponComponent*      NewParam1;
		bool                           IsValidWeaponType;
	} params;

	params.NewParam1 = NewParam1;

	UObject::ProcessEvent(fn, &params);

	if (IsValidWeaponType != nullptr)
		*IsValidWeaponType = params.IsValidWeaponType;
}


// Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldHideAmmoGauge           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URifleReticle_C::ShouldHideAmmoGauge(class UKSWeaponComponent* Weapon, bool* bShouldHideAmmoGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge");

	struct
	{
		class UKSWeaponComponent*      Weapon;
		bool                           bShouldHideAmmoGauge;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);

	if (bShouldHideAmmoGauge != nullptr)
		*bShouldHideAmmoGauge = params.bShouldHideAmmoGauge;
}


// Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InOffset                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::UpdateReticleDisplay(float InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateReticleDisplay");

	struct
	{
		float                          InOffset;
	} params;

	params.InOffset = InOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URifleReticle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.UpdateOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::UpdateOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.ChangeADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void URifleReticle_C::ChangeADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ChangeADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.HitConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URifleReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.HitConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.Headshot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URifleReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.Headshot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.KillConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URifleReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.KillConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.GrenadeCook
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          TickPeriod                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::GrenadeCook(bool Active, float TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.GrenadeCook");

	struct
	{
		bool                           Active;
		float                          TickPeriod;
	} params;

	params.Active = Active;
	params.TickPeriod = TickPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.GrenadeTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URifleReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.GrenadeTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::UpdateAmmoGauge(class UKSWeaponComponent* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateAmmoGauge");

	struct
	{
		class UKSWeaponComponent*      Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               NewOffset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::UpdateMagazineOffset(const struct FVector2D& NewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.UpdateMagazineOffset");

	struct
	{
		struct FVector2D               NewOffset;
	} params;

	params.NewOffset = NewOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URifleReticle_C::ExecuteUbergraph_RifleReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle");

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
