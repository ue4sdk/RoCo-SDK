// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MultiCosmeticHeatComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.NewEntryHelper
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::NewEntryHelper(class USceneComponent* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.NewEntryHelper");

	struct
	{
		class USceneComponent*         Parent;
	} params;

	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ApplyTempHelper
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Temp                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystemComponent* Particle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::ApplyTempHelper(float Temp, class UParticleSystemComponent* Particle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ApplyTempHelper");

	struct
	{
		float                          Temp;
		class UParticleSystemComponent* Particle;
	} params;

	params.Temp = Temp;
	params.Particle = Particle;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ReactHelper
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         Parent                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UParticleSystemComponent* Particle                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::ReactHelper(class USceneComponent* Parent, class UParticleSystemComponent* Particle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ReactHelper");

	struct
	{
		class USceneComponent*         Parent;
		class UParticleSystemComponent* Particle;
	} params;

	params.Parent = Parent;
	params.Particle = Particle;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.UnregisterAttachComp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         OldAttach                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::UnregisterAttachComp(class USceneComponent* OldAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.UnregisterAttachComp");

	struct
	{
		class USceneComponent*         OldAttach;
	} params;

	params.OldAttach = OldAttach;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.RegisterAttachComp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         NewAttach                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::RegisterAttachComp(class USceneComponent* NewAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.RegisterAttachComp");

	struct
	{
		class USceneComponent*         NewAttach;
	} params;

	params.NewAttach = NewAttach;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.DeactivateCosmetics
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiCosmeticHeatComponent_C::DeactivateCosmetics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.DeactivateCosmetics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.Apply Temperature
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Applied_Temp                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMultiCosmeticHeatComponent_C::Apply_Temperature(float Applied_Temp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.Apply Temperature");

	struct
	{
		float                          Applied_Temp;
	} params;

	params.Applied_Temp = Applied_Temp;

	UObject::ProcessEvent(fn, &params);
}


// Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ReactToThermalVisionState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMultiCosmeticHeatComponent_C::ReactToThermalVisionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C.ReactToThermalVisionState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
