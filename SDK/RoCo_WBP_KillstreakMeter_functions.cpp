// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillstreakMeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetActionNames
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   KeyBoardAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   GamepadAction                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   MobileAction                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::SetActionNames(const struct FName& KeyBoardAction, const struct FName& GamepadAction, const struct FName& MobileAction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetActionNames"));

	struct
	{
		struct FName                   KeyBoardAction;
		struct FName                   GamepadAction;
		struct FName                   MobileAction;
	} params;

	params.KeyBoardAction = KeyBoardAction;
	params.GamepadAction = GamepadAction;
	params.MobileAction = MobileAction;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetRevived
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnTargetRevived()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetRevived"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneAborted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnDroneAborted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneAborted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Get Current Cannot Fire Now
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CurrentCannotFireNow           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::Get_Current_Cannot_Fire_Now(bool* CurrentCannotFireNow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Get Current Cannot Fire Now"));

	struct
	{
		bool                           CurrentCannotFireNow;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurrentCannotFireNow != nullptr)
		*CurrentCannotFireNow = params.CurrentCannotFireNow;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetAcquired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSTargeter> Targeter                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::HandleOnTargetAcquired(const TScriptInterface<class UKSTargeter>& Targeter, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetAcquired"));

	struct
	{
		TScriptInterface<class UKSTargeter> Targeter;
		class AActor*                  Target;
	} params;

	params.Targeter = Targeter;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.PlayActivationEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::PlayActivationEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.PlayActivationEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Set Jammed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsJammed                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::Set_Jammed(bool IsJammed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Set Jammed"));

	struct
	{
		bool                           IsJammed;
	} params;

	params.IsJammed = IsJammed;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateLockTimer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::UpdateLockTimer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateLockTimer"));

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveTrigger
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveTrigger()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveTrigger"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveBegin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnReviveBegin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnReviveBegin"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateReviveProgressDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InProgress                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::UpdateReviveProgressDisplay(float InProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateReviveProgressDisplay"));

	struct
	{
		float                          InProgress;
	} params;

	params.InProgress = InProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetDeath
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnTargetDeath()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnTargetDeath"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneDestroyed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleOnDroneDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleOnDroneDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.IsReadyToActivate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::IsReadyToActivate(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.IsReadyToActivate"));

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Stop Ready Animations
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::Stop_Ready_Animations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Stop Ready Animations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Start Ready Animations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::Start_Ready_Animations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Start Ready Animations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.GetDynamicMats
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::GetDynamicMats()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.GetDynamicMats"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateFillMeterDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::UpdateFillMeterDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateFillMeterDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetFillValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FillValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::SetFillValue(float FillValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetFillValue"));

	struct
	{
		float                          FillValue;
	} params;

	params.FillValue = FillValue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UnbindChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::UnbindChanges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UnbindChanges"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CheckForFullCharge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::CheckForFullCharge()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CheckForFullCharge"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateCharge
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::UpdateCharge()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.UpdateCharge"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.BindToChanges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::BindToChanges()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.BindToChanges"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetupBasicDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::SetupBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.SetupBasicDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Play Ability Ready Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::Play_Ability_Ready_Sound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Play Ability Ready Sound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModChargeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    KSModInstActivated             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::HandleModChargeChange(class UKSModInst_Activated* KSModInstActivated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModChargeChange"));

	struct
	{
		class UKSModInst_Activated*    KSModInstActivated;
	} params;

	params.KSModInstActivated = KSModInstActivated;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenAnimateMeterGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenAnimateMeterGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenAnimateMeterGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseAnimateMeterGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::CloseAnimateMeterGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseAnimateMeterGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePlayerModCharge
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerMod_Activated*  KSPlayerModActivated           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::HandlePlayerModCharge(class UKSPlayerMod_Activated* KSPlayerModActivated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePlayerModCharge"));

	struct
	{
		class UKSPlayerMod_Activated*  KSPlayerModActivated;
	} params;

	params.KSPlayerModActivated = KSPlayerModActivated;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleIntroAnimFinish
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandleIntroAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleIntroAnimFinish"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePulseAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::HandlePulseAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandlePulseAnimFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Update Player Downed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDowned                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::Update_Player_Downed(bool IsDowned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.Update Player Downed"));

	struct
	{
		bool                           IsDowned;
	} params;

	params.IsDowned = IsDowned;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenRetryBasicDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenRetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenRetryBasicDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseRetryBasicDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::CloseRetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.CloseRetryBasicDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.RetryBasicDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::RetryBasicDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.RetryBasicDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ReevaluateButtonPrompts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::ReevaluateButtonPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ReevaluateButtonPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InBool                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::HandleModActivated(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.HandleModActivated"));

	struct
	{
		bool                           InBool;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenReviveProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::OpenReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OpenReviveProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.EnterReviveProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::EnterReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.EnterReviveProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedCloseReviveProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::DelayedCloseReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedCloseReviveProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedClearOfDroneMessaging
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::DelayedClearOfDroneMessaging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedClearOfDroneMessaging"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedRefundDroneMessaging
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::DelayedRefundDroneMessaging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.DelayedRefundDroneMessaging"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OnSetCannotFireNow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CannotFire                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeter_C::OnSetCannotFireNow(bool CannotFire)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.OnSetCannotFireNow"));

	struct
	{
		bool                           CannotFire;
	} params;

	params.CannotFire = CannotFire;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ImmediateCloseReviveProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeter_C::ImmediateCloseReviveProgress()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ImmediateCloseReviveProgress"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ExecuteUbergraph_WBP_KillstreakMeter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeter_C::ExecuteUbergraph_WBP_KillstreakMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_KillstreakMeter.WBP_KillstreakMeter_C.ExecuteUbergraph_WBP_KillstreakMeter"));

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
