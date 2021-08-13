// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealOnDownModInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealOnDownModInstance.HealOnDownModInstance_C.ShouldHealOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldHeal                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UHealOnDownModInstance_C::ShouldHealOwner(bool* ShouldHeal)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.ShouldHealOwner");

	struct
	{
		bool                           ShouldHeal;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShouldHeal != nullptr)
		*ShouldHeal = params.ShouldHeal;
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.OnDownOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealOnDownModInstance_C::OnDownOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.OnDownOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.HealTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::HealTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.HealTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.StartHeal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::StartHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.StartHeal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.CheckOwnerHealth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::CheckOwnerHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.CheckOwnerHealth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.ClearHealTickTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::ClearHealTickTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.ClearHealTickTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.ModTriggered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealOnDownModInstance_C::ModTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.ModTriggered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealOnDownModInstance.HealOnDownModInstance_C.ExecuteUbergraph_HealOnDownModInstance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealOnDownModInstance_C::ExecuteUbergraph_HealOnDownModInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOnDownModInstance.HealOnDownModInstance_C.ExecuteUbergraph_HealOnDownModInstance");

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
