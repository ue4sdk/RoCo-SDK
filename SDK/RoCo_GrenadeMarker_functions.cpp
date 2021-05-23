// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GrenadeMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GrenadeMarker.GrenadeMarker_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UGrenadeMarker_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.ShouldUpdate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Get Weapon Asset or Secondary
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponAsset*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSWeaponAsset* UGrenadeMarker_C::Get_Weapon_Asset_or_Secondary()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.Get Weapon Asset or Secondary"));

	struct
	{
		class UKSWeaponAsset*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Update
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UGrenadeMarker_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.Update"));

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GrenadeMarker.GrenadeMarker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGrenadeMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GrenadeMarker.GrenadeMarker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGrenadeMarker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GrenadeMarker.GrenadeMarker_C.OnWeaponAssetSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSProjectile*           Projectile                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponAsset*          WeaponAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGrenadeMarker_C::OnWeaponAssetSet(class AKSProjectile* Projectile, class UKSWeaponAsset* WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.OnWeaponAssetSet"));

	struct
	{
		class AKSProjectile*           Projectile;
		class UKSWeaponAsset*          WeaponAsset;
	} params;

	params.Projectile = Projectile;
	params.WeaponAsset = WeaponAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function GrenadeMarker.GrenadeMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGrenadeMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GrenadeMarker.GrenadeMarker_C.ExecuteUbergraph_GrenadeMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGrenadeMarker_C::ExecuteUbergraph_GrenadeMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GrenadeMarker.GrenadeMarker_C.ExecuteUbergraph_GrenadeMarker"));

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
