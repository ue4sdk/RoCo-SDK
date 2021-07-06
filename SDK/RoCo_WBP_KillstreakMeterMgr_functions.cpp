// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillstreakMeterMgr_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.SetMountPrompt
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanMount                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::SetMountPrompt(bool CanMount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.SetMountPrompt");

	struct
	{
		bool                           CanMount;
	} params;

	params.CanMount = CanMount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Death State Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::Handle_Death_State_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Death State Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitActivatableMods
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSModInst_Activated*> Mods                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::InitActivatableMods(TArray<class UKSModInst_Activated*>* Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitActivatableMods");

	struct
	{
		TArray<class UKSModInst_Activated*> Mods;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mods != nullptr)
		*Mods = params.Mods;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.GetWeaponErrorText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     AbilityFailType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ErrorText                      (CPF_Parm, CPF_OutParm)

void UWBP_KillstreakMeterMgr_C::GetWeaponErrorText(class AKSWeapon* Weapon, EKSAbilityUsageFailureType AbilityFailType, struct FText* ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.GetWeaponErrorText");

	struct
	{
		class AKSWeapon*               Weapon;
		EKSAbilityUsageFailureType     AbilityFailType;
		struct FText                   ErrorText;
	} params;

	params.Weapon = Weapon;
	params.AbilityFailType = AbilityFailType;

	UObject::ProcessEvent(fn, &params);

	if (ErrorText != nullptr)
		*ErrorText = params.ErrorText;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.DisplayErrorText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_KillstreakMeterMgr_C::DisplayErrorText(const struct FText& ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.DisplayErrorText");

	struct
	{
		struct FText                   ErrorText;
	} params;

	params.ErrorText = ErrorText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.GetModInstErrorText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSModInst_Activated*    ModInst                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     AbilityFailType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ErrorText                      (CPF_Parm, CPF_OutParm)

void UWBP_KillstreakMeterMgr_C::GetModInstErrorText(class UKSModInst_Activated* ModInst, EKSAbilityUsageFailureType AbilityFailType, struct FText* ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.GetModInstErrorText");

	struct
	{
		class UKSModInst_Activated*    ModInst;
		EKSAbilityUsageFailureType     AbilityFailType;
		struct FText                   ErrorText;
	} params;

	params.ModInst = ModInst;
	params.AbilityFailType = AbilityFailType;

	UObject::ProcessEvent(fn, &params);

	if (ErrorText != nullptr)
		*ErrorText = params.ErrorText;
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.UpdateCanUse
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::UpdateCanUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.UpdateCanUse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Set Jammed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsJammed                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Initialize                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::Set_Jammed(bool IsJammed, bool Initialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Set Jammed");

	struct
	{
		bool                           IsJammed;
		bool                           Initialize;
	} params;

	params.IsJammed = IsJammed;
	params.Initialize = Initialize;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLockoutTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeLeft                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleEMPLockoutTick(float TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLockoutTick");

	struct
	{
		float                          TimeLeft;
	} params;

	params.TimeLeft = TimeLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.BindToEMPLockout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::BindToEMPLockout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.BindToEMPLockout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::HandleEMPLocked(bool IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleEMPLocked");

	struct
	{
		bool                           IsLocked;
	} params;

	params.IsLocked = IsLocked;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RemoveMeters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::RemoveMeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RemoveMeters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.CreateNewMeter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    KSModInstActivtd               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Reserve                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::CreateNewMeter(class UKSModInst_Activated* KSModInstActivtd, bool Reserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.CreateNewMeter");

	struct
	{
		class UKSModInst_Activated*    KSModInstActivtd;
		bool                           Reserve;
	} params;

	params.KSModInstActivtd = KSModInstActivtd;
	params.Reserve = Reserve;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPostSetPawnRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OpenPostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPostSetPawnRetry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePostSetPawnRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::ClosePostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePostSetPawnRetry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.AttemptPostSetPawnRetry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::AttemptPostSetPawnRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.AttemptPostSetPawnRetry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RetryPostSetPawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::RetryPostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.RetryPostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleModsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            KSCharacter                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleModsUpdated(class AKSCharacter* KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleModsUpdated");

	struct
	{
		class AKSCharacter*            KSCharacter;
	} params;

	params.KSCharacter = KSCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleOnPlayerEliminated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleOnPlayerEliminated(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleOnPlayerEliminated");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleDownedStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleDownedStateChange(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleDownedStateChange");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleActivateModsUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleActivateModsUpdated(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleActivateModsUpdated");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPromptFailureTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OpenPromptFailureTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OpenPromptFailureTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePromptFailureTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::ClosePromptFailureTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ClosePromptFailureTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.StartPromptFailureTimer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::StartPromptFailureTimer(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.StartPromptFailureTimer");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleKillCam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::HandleKillCam(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleKillCam");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Mod Failed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    AttemptedMod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     AbilityFailureType             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::Handle_Mod_Failed(class UKSModInst_Activated* AttemptedMod, EKSAbilityUsageFailureType AbilityFailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.Handle Mod Failed");

	struct
	{
		class UKSModInst_Activated*    AttemptedMod;
		EKSAbilityUsageFailureType     AbilityFailureType;
	} params;

	params.AttemptedMod = AttemptedMod;
	params.AbilityFailureType = AbilityFailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBuildFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KillstreakMeterMgr_C::OnBuildFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBuildFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBruteStrengthActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KillstreakMeterMgr_C::OnBruteStrengthActivated(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.OnBruteStrengthActivated");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleFireFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWeapon*               Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSAbilityUsageFailureType     FailureType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::HandleFireFailed(class AKSWeapon* Weapon, EKSAbilityUsageFailureType FailureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.HandleFireFailed");

	struct
	{
		class AKSWeapon*               Weapon;
		EKSAbilityUsageFailureType     FailureType;
	} params;

	params.Weapon = Weapon;
	params.FailureType = FailureType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ExecuteUbergraph_WBP_KillstreakMeterMgr
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KillstreakMeterMgr_C::ExecuteUbergraph_WBP_KillstreakMeterMgr(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KillstreakMeterMgr.WBP_KillstreakMeterMgr_C.ExecuteUbergraph_WBP_KillstreakMeterMgr");

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
