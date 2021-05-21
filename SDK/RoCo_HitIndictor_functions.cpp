// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HitIndictor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitIndictor.HitIndictor_C.ReturnToPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHitIndicatorSub_C*      HitIndicatorSub                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndictor_C::ReturnToPool(class UHitIndicatorSub_C* HitIndicatorSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ReturnToPool");

	struct
	{
		class UHitIndicatorSub_C*      HitIndicatorSub;
	} params;

	params.HitIndicatorSub = HitIndicatorSub;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.Init Indicator Pool
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHitIndictor_C::Init_Indicator_Pool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Init Indicator Pool");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.CreateHitIndicator
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  DamageType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DamageOrigin                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           HitArmor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHitIndictor_C::CreateHitIndicator(class UClass* DamageType, const struct FVector& DamageOrigin, bool HitArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.CreateHitIndicator");

	struct
	{
		class UClass*                  DamageType;
		struct FVector                 DamageOrigin;
		bool                           HitArmor;
	} params;

	params.DamageType = DamageType;
	params.DamageOrigin = DamageOrigin;
	params.HitArmor = HitArmor;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHitIndictor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass*                  DamageTypeClass                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DamageOrigin                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndictor_C::On_Viewed_Pawn_Take_Damage(float DamageAmount, class UClass* DamageTypeClass, class AActor* DamageCauser, const struct FVector& DamageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage");

	struct
	{
		float                          DamageAmount;
		class UClass*                  DamageTypeClass;
		class AActor*                  DamageCauser;
		struct FVector                 DamageOrigin;
	} params;

	params.DamageAmount = DamageAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.DamageCauser = DamageCauser;
	params.DamageOrigin = DamageOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UClass*                  DamageTypeClass                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 DamageOrigin                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndictor_C::HandleViewedPawnTakeArmorDamage(float DamageAmount, class UClass* DamageTypeClass, class AActor* DamageCauser, const struct FVector& DamageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage");

	struct
	{
		float                          DamageAmount;
		class UClass*                  DamageTypeClass;
		class AActor*                  DamageCauser;
		struct FVector                 DamageOrigin;
	} params;

	params.DamageAmount = DamageAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.DamageCauser = DamageCauser;
	params.DamageOrigin = DamageOrigin;

	UObject::ProcessEvent(fn, &params);
}


// Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHitIndictor_C::ExecuteUbergraph_HitIndictor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor");

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
