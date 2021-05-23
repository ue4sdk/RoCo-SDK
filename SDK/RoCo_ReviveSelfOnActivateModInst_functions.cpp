// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReviveSelfOnActivateModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Get outro timer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Outro_Duration_timer           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::Get_outro_timer(class UAnimMontage* Montage, float* Outro_Duration_timer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Get outro timer"));

	struct
	{
		class UAnimMontage*            Montage;
		float                          Outro_Duration_timer;
	} params;

	params.Montage = Montage;

	UObject::ProcessEvent(fn, &params);

	if (Outro_Duration_timer != nullptr)
		*Outro_Duration_timer = params.Outro_Duration_timer;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StopAnimationFromEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSCharacterAnimInst*    CharAnimInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReviveSelfOnActivateModInst_C::StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StopAnimationFromEvent"));

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


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReactsToAnimationEvent
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Priority                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UReviveSelfOnActivateModInst_C::ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReactsToAnimationEvent"));

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


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426"));

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426"));

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnInterrupted_9E1EC10C43864E26E4E9E1B703588426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::OnInterrupted_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnInterrupted_9E1EC10C43864E26E4E9E1B703588426"));

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnBlendOut_9E1EC10C43864E26E4E9E1B703588426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::OnBlendOut_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnBlendOut_9E1EC10C43864E26E4E9E1B703588426"));

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnCompleted_9E1EC10C43864E26E4E9E1B703588426
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MontageInstanceID              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::OnCompleted_9E1EC10C43864E26E4E9E1B703588426(const struct FName& NotifyName, int MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnCompleted_9E1EC10C43864E26E4E9E1B703588426"));

	struct
	{
		struct FName                   NotifyName;
		int                            MontageInstanceID;
	} params;

	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.VO_Revive_Activate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::VO_Revive_Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.VO_Revive_Activate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackDownedEndSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackDownedEndSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackDownedEndSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateStandingSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackActivateStandingSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateStandingSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateDownedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackActivateDownedSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateDownedSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Activate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::SFX_Revive_Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Activate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Complete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::SFX_Revive_Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Complete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackReviveCompleteSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackReviveCompleteSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackReviveCompleteSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.PlayAnimationFromEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimEventName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSCharacterAnimInst*    CharAnimInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::PlayAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.PlayAnimationFromEvent"));

	struct
	{
		struct FName                   AnimEventName;
		class UKSCharacterAnimInst*    CharAnimInstance;
	} params;

	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReviveSelfOnActivateModInst_C::OnActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnActivated"));

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.AdjustImmunityEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UReviveSelfOnActivateModInst_C::AdjustImmunityEffect(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.AdjustImmunityEffect"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnSetup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnSetup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Brute_Strength_Effect_Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Stop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Play Outro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Play_Outro()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Play Outro"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Play
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Brute_Strength_Effect_Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Play"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNewCharacter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnDeathStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnDeathStateChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ExecuteUbergraph_ReviveSelfOnActivateModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UReviveSelfOnActivateModInst_C::ExecuteUbergraph_ReviveSelfOnActivateModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ExecuteUbergraph_ReviveSelfOnActivateModInst"));

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
