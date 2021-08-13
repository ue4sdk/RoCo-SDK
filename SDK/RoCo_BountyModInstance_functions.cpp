// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BountyModInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BountyModInstance.BountyModInstance_C.GetBountyCharacterDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacterBase*        KSCharacter                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::GetBountyCharacterDistance(class AKSCharacterBase** KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.GetBountyCharacterDistance");

	struct
	{
		class AKSCharacterBase*        KSCharacter;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (KSCharacter != nullptr)
		*KSCharacter = params.KSCharacter;
}


// Function BountyModInstance.BountyModInstance_C.GetBountyCharacterMoney
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::GetBountyCharacterMoney(class AKSCharacterBase** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.GetBountyCharacterMoney");

	struct
	{
		class AKSCharacterBase*        Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BountyModInstance.BountyModInstance_C.ReactsToAnimationEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBountyModInstance_C::ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ReactsToAnimationEvent");

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


// Function BountyModInstance.BountyModInstance_C.GetBountyCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacterBase*        KSCharacter                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::GetBountyCharacter(class AKSCharacterBase** KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.GetBountyCharacter");

	struct
	{
		class AKSCharacterBase*        KSCharacter;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (KSCharacter != nullptr)
		*KSCharacter = params.KSCharacter;
}


// Function BountyModInstance.BountyModInstance_C.CanActivateNow
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EKSAbilityUsageFailureType     OutAbilityFailureType          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBountyModInstance_C::CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.CanActivateNow");

	struct
	{
		EKSAbilityUsageFailureType     OutAbilityFailureType;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutAbilityFailureType != nullptr)
		*OutAbilityFailureType = params.OutAbilityFailureType;

	return params.ReturnValue;
}


// Function BountyModInstance.BountyModInstance_C.OnNotifyEnd_A512C1544C2300A35FF8FEBE0AAA4724
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::OnNotifyEnd_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnNotifyEnd_A512C1544C2300A35FF8FEBE0AAA4724");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.OnNotifyBegin_A512C1544C2300A35FF8FEBE0AAA4724
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::OnNotifyBegin_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnNotifyBegin_A512C1544C2300A35FF8FEBE0AAA4724");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.OnInterrupted_A512C1544C2300A35FF8FEBE0AAA4724
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::OnInterrupted_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnInterrupted_A512C1544C2300A35FF8FEBE0AAA4724");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.OnBlendOut_A512C1544C2300A35FF8FEBE0AAA4724
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::OnBlendOut_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnBlendOut_A512C1544C2300A35FF8FEBE0AAA4724");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.OnCompleted_A512C1544C2300A35FF8FEBE0AAA4724
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::OnCompleted_A512C1544C2300A35FF8FEBE0AAA4724(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnCompleted_A512C1544C2300A35FF8FEBE0AAA4724");

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.Play Bounty Killed Sound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::Play_Bounty_Killed_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.Play Bounty Killed Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.Play Ability End Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::Play_Ability_End_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.Play Ability End Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.PlayAbilityPressedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::PlayAbilityPressedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.PlayAbilityPressedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.PlayTargetFinderSnapSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::PlayTargetFinderSnapSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.PlayTargetFinderSnapSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBountyModInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.BountyTargetKilled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        KillerCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacterBase*        KilledCharacter                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::BountyTargetKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.BountyTargetKilled");

	struct
	{
		class AKSCharacterBase*        KillerCharacter;
		class AKSCharacterBase*        KilledCharacter;
	} params;

	params.KillerCharacter = KillerCharacter;
	params.KilledCharacter = KilledCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.ModSetup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::ModSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ModSetup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.ModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBountyModInstance_C::ModActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ModActivated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.PlayPostProcess
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::PlayPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.PlayPostProcess");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.OnEndActivationWarning
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBountyModInstance_C::OnEndActivationWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.OnEndActivationWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.Play Revealer Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::Play_Revealer_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.Play Revealer Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.Play Revealed Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacterBase*        RevealedChar                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::Play_Revealed_Sound(class AKSCharacterBase* RevealedChar, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.Play Revealed Sound");

	struct
	{
		class AKSCharacterBase*        RevealedChar;
		float                          Delay;
	} params;

	params.RevealedChar = RevealedChar;
	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.Play Activate Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBountyModInstance_C::Play_Activate_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.Play Activate Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BountyModInstance.BountyModInstance_C.ExecuteUbergraph_BountyModInstance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBountyModInstance_C::ExecuteUbergraph_BountyModInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyModInstance.BountyModInstance_C.ExecuteUbergraph_BountyModInstance");

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
