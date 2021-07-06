// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Evasive_OnAbilityOrGadgetUsed_ModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.SpeedBuffTimedOut
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::SpeedBuffTimedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.SpeedBuffTimedOut");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.SpeedBuffEnd
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEndingEarly                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::SpeedBuffEnd(bool bEndingEarly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.SpeedBuffEnd");

	struct
	{
		bool                           bEndingEarly;
	} params;

	params.bEndingEarly = bEndingEarly;

	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.TriggerSpeedBuff
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::TriggerSpeedBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.TriggerSpeedBuff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.Escalate SFXStop
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::Escalate_SFXStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.Escalate SFXStop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.Escalate SFXPlay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAudioActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::Escalate_SFXPlay(bool bAudioActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.Escalate SFXPlay");

	struct
	{
		bool                           bAudioActive;
	} params;

	params.bAudioActive = bAudioActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnWeaponFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::OnWeaponFired(class AKSWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnWeaponFired");

	struct
	{
		class AKSWeapon*               Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnAbilityUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::OnAbilityUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.OnAbilityUsed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.BroadcastEscalateSFXPlay
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsAudioActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::BroadcastEscalateSFXPlay(bool bIsAudioActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.BroadcastEscalateSFXPlay");

	struct
	{
		bool                           bIsAudioActive;
	} params;

	params.bIsAudioActive = bIsAudioActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.BroadcastEscalateSFXStop
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::BroadcastEscalateSFXStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.BroadcastEscalateSFXStop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.ExecuteUbergraph_Evasive_OnAbilityOrGadgetUsed_ModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEvasive_OnAbilityOrGadgetUsed_ModInst_C::ExecuteUbergraph_Evasive_OnAbilityOrGadgetUsed_ModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evasive_OnAbilityOrGadgetUsed_ModInst.Evasive_OnAbilityOrGadgetUsed_ModInst_C.ExecuteUbergraph_Evasive_OnAbilityOrGadgetUsed_ModInst");

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
