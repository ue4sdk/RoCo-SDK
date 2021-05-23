// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReloadOnDodgeRollModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      Master_Weapon_Ref              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadOnDodgeRollModInst_C::MagDropForDodgeReload(class UKSWeaponComponent* Master_Weapon_Ref)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload"));

	struct
	{
		class UKSWeaponComponent*      Master_Weapon_Ref;
	} params;

	params.Master_Weapon_Ref = Master_Weapon_Ref;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSCharacterAnimInst*    CharAnimInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReloadOnDodgeRollModInst_C::StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent"));

	struct
	{
		struct FName                   AnimEventName;
		class UKSCharacterAnimInst*    CharAnimInstance;
		bool                           ReturnValue;
	} params;

	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReloadOnDodgeRollModInst_C::ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent"));

	struct
	{
		struct FName                   AnimEventName;
		int                            Priority;
		bool                           ReturnValue;
	} params;

	params.AnimEventName = AnimEventName;

	UObject::ProcessEvent(fn, &params);

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          RollDuration                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadOnDodgeRollModInst_C::OnDodgeRoll(float RollDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll"));

	struct
	{
		float                          RollDuration;
	} params;

	params.RollDuration = RollDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadOnDodgeRollModInst_C::RemotePlayerAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReloadOnDodgeRollModInst_C::Dodge_Reload_Mod_Notified()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReloadOnDodgeRollModInst_C::ExecuteUbergraph_ReloadOnDodgeRollModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst"));

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
