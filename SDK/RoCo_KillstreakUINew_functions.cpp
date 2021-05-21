// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KillstreakUINew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// EConfigPropertyGuidedCalloutScenes GuidedCalloutScene             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGuidedMenuCalloutsViewRedirector::SetNPEGuidedCalloutSeen(EConfigPropertyGuidedCalloutScenes GuidedCalloutScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen");

	struct
	{
		EConfigPropertyGuidedCalloutScenes GuidedCalloutScene;
	} params;

	params.GuidedCalloutScene = GuidedCalloutScene;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// EConfigPropertyGuidedCalloutScenes GuidedCalloutScene             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGuidedMenuCalloutsViewRedirector::HasSeenNPEGuidedCallout(EConfigPropertyGuidedCalloutScenes GuidedCalloutScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout");

	struct
	{
		EConfigPropertyGuidedCalloutScenes GuidedCalloutScene;
		bool                           ReturnValue;
	} params;

	params.GuidedCalloutScene = GuidedCalloutScene;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSWidget::UnbindFromViewportSizeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSWidget::TriggerGlobalInvalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.StopTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::StopTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.StopTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.SkipToEndTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::SkipToEndTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.SkipToEndTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          PlaybackSpeed                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::SetAllAnimationsPlaybackSpeed(float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed");

	struct
	{
		float                          PlaybackSpeed;
	} params;

	params.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.ResumeTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::ResumeTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.ResumeTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.RemoveTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::RemoveTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.RemoveTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.PlayTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::PlayTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.PlayTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.PauseTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWidget::PauseTickAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.PauseTickAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.IsInKillCamPlayback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSWidget::IsInKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.IsInKillCamPlayback");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWidget::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.InitializeTickAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.GetTickAnimationInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTickAnimationParams    OutAnimParams                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSWidget::GetTickAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetTickAnimationInfo");

	struct
	{
		struct FName                   AnimName;
		struct FTickAnimationParams    OutAnimParams;
		bool                           ReturnValue;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);

	if (OutAnimParams != nullptr)
		*OutAnimParams = params.OutAnimParams;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetNormalOwningPlayer
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerController* UKSWidget::GetNormalOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetNormalOwningPlayer");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetKillCamSpectatorController
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerController* UKSWidget::GetKillCamSpectatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetKillCamSpectatorController");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetActivePlayerController
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerController* UKSWidget::GetActivePlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetActivePlayerController");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSWidget::BlueprintPrepareKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSWidget::BlueprintFinishKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.BindToViewportSizeChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InViewportEvent                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSWidget::BindToViewportSizeChange(const struct FScriptDelegate& InViewportEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BindToViewportSizeChange");

	struct
	{
		struct FScriptDelegate         InViewportEvent;
	} params;

	params.InViewportEvent = InViewportEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWidget.AddTickAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         UpdateEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         FinishedEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSWidget::AddTickAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.AddTickAnimation");

	struct
	{
		struct FName                   AnimName;
		float                          Duration;
		struct FScriptDelegate         UpdateEvent;
		struct FScriptDelegate         FinishedEvent;
	} params;

	params.AnimName = AnimName;
	params.Duration = Duration;
	params.UpdateEvent = UpdateEvent;
	params.FinishedEvent = FinishedEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAccoladeQueueWidget.Queue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAccoladeEventEntry> Accolades                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAccoladeQueueWidget::Queue(TArray<struct FAccoladeEventEntry> Accolades)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.Queue");

	struct
	{
		TArray<struct FAccoladeEventEntry> Accolades;
	} params;

	params.Accolades = Accolades;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FAccoladeDisplayInfo    AccoladeRemoved                (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSAccoladeQueueWidget::OnAccoladeRemovedFromScreen(const struct FAccoladeDisplayInfo& AccoladeRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen");

	struct
	{
		struct FAccoladeDisplayInfo    AccoladeRemoved;
	} params;

	params.AccoladeRemoved = AccoladeRemoved;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAccoladeQueueWidget.GetNext
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAccoladeDisplayInfo    Accolade                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAccoladeQueueWidget::GetNext(struct FAccoladeDisplayInfo* Accolade)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.GetNext");

	struct
	{
		struct FAccoladeDisplayInfo    Accolade;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Accolade != nullptr)
		*Accolade = params.Accolade;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSAccoladeQueueWidget::ClearAccoladeQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAcquisitionModal.GetHeaderText
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSAcquisition*          Acquisitition                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSAcquisitionModal::GetHeaderText(class UKSAcquisition* Acquisitition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAcquisitionModal.GetHeaderText");

	struct
	{
		class UKSAcquisition*          Acquisitition;
		struct FText                   ReturnValue;
	} params;

	params.Acquisitition = Acquisitition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSAcquisitionManager*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSAcquisitionManager* UKSAcquisitionModal::GetAcquisitionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager");

	struct
	{
		class UKSAcquisitionManager*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSActiveBonusesWidget.GetBonusAppliedToLastMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FKSLimitedTimeEventMetadataRow> ActiveEvents                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSActiveBonusesWidget::GetBonusAppliedToLastMatch(TArray<struct FKSLimitedTimeEventMetadataRow>* ActiveEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveBonusesWidget.GetBonusAppliedToLastMatch");

	struct
	{
		TArray<struct FKSLimitedTimeEventMetadataRow> ActiveEvents;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ActiveEvents != nullptr)
		*ActiveEvents = params.ActiveEvents;
}


// Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPawnWidget::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.SetPawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacter*            NewPawn                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnWidget::SetPawn(class AKSCharacter* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.SetPawn");

	struct
	{
		class AKSCharacter*            NewPawn;
	} params;

	params.NewPawn = NewPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.PreClearPlayerState
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPawnWidget::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PreClearPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.PreClearPawn
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPawnWidget::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.PostSetPlayerState
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPawnWidget::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.PostSetPawn
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPawnWidget::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnWidget::OnBoundPlayerStateDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnWidget::OnBoundPawnDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnWidget.GetPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSPlayerState*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSPlayerState* UKSPawnWidget::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPlayerState");

	struct
	{
		class AKSPlayerState*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnWidget.GetPawnBase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacterBase*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSCharacterBase* UKSPawnWidget::GetPawnBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPawnBase");

	struct
	{
		class AKSCharacterBase*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnWidget.GetPawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSCharacter*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSCharacter* UKSPawnWidget::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPawn");

	struct
	{
		class AKSCharacter*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponComponent*      InWeaponComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPawnInventoryWidget::RemoveWidgetFor(class UKSWeaponComponent* InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor");

	struct
	{
		class UKSWeaponComponent*      InWeaponComponent;
		bool                           ReturnValue;
	} params;

	params.InWeaponComponent = InWeaponComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSWeaponComponent*      InWeaponComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSWeaponComponentWidget* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSWeaponComponentWidget* UKSPawnInventoryWidget::GetWidgetForWeaponComponent(class UKSWeaponComponent* InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      InWeaponComponent;
		class UKSWeaponComponentWidget* ReturnValue;
	} params;

	params.InWeaponComponent = InWeaponComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      RemovedEquipment               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnInventoryWidget::EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved");

	struct
	{
		class UKSWeaponComponent*      RemovedEquipment;
	} params;

	params.RemovedEquipment = RemovedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      InactiveEquipment              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnInventoryWidget::EquipmentEndActive(class UKSWeaponComponent* InactiveEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive");

	struct
	{
		class UKSWeaponComponent*      InactiveEquipment;
	} params;

	params.InactiveEquipment = InactiveEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      ActiveEquipment                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnInventoryWidget::EquipmentBecomeActive(class UKSWeaponComponent* ActiveEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive");

	struct
	{
		class UKSWeaponComponent*      ActiveEquipment;
	} params;

	params.ActiveEquipment = ActiveEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      AddedEquipment                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPawnInventoryWidget::EquipmentAdded(class UKSWeaponComponent* AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded");

	struct
	{
		class UKSWeaponComponent*      AddedEquipment;
	} params;

	params.AddedEquipment = AddedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSWeaponComponent*      InWeaponComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       OwningPlayer                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSWeaponComponentWidget* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSWeaponComponentWidget* UKSPawnInventoryWidget::CreateWeaponComponentWidgetFor(class UObject* WorldContextObject, class UKSWeaponComponent* InWeaponComponent, class UClass* WidgetClass, class APlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor");

	struct
	{
		class UObject*                 WorldContextObject;
		class UKSWeaponComponent*      InWeaponComponent;
		class UClass*                  WidgetClass;
		class APlayerController*       OwningPlayer;
		class UKSWeaponComponentWidget* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InWeaponComponent = InWeaponComponent;
	params.WidgetClass = WidgetClass;
	params.OwningPlayer = OwningPlayer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSActiveWeaponComponentWidget::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSActiveWeaponComponentWidget::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSWeaponComponent*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSWeaponComponent* UKSActiveWeaponComponentWidget::GetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UKSGameInstance*         GameInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSActivityManagerBase*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSActivityManagerBase* UKSActivity_ViewRedirector::GetRelevantActivityManager(class UKSGameInstance* GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager");

	struct
	{
		class UKSGameInstance*         GameInstance;
		class UKSActivityManagerBase*  ReturnValue;
	} params;

	params.GameInstance = GameInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSPlayerController*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSPlayerController* UKSAimAssistDebugWidget::GetOwningKSPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer");

	struct
	{
		class AKSPlayerController*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSAimAssistComponent*   ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSAimAssistComponent* UKSAimAssistDebugWidget::GetAimAssistComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent");

	struct
	{
		class UKSAimAssistComponent*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSMapIconWidgetBase::UpdateScreenRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateOpacityWhenAiming
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSMapIconWidgetBase::UpdateOpacityWhenAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateOpacityWhenAiming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Meters                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::UpdateMetersAway(int Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway");

	struct
	{
		int                            Meters;
	} params;

	params.Meters = Meters;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHeight                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bDepth                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::UpdateMeetsHeightThreshold(bool bHeight, bool bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold");

	struct
	{
		bool                           bHeight;
		bool                           bDepth;
	} params;

	params.bHeight = bHeight;
	params.bDepth = bDepth;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.Update
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ESlateVisibility UKSMapIconWidgetBase::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.Update");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateOpacityWhenAiming
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapIconWidgetBase::ShouldUpdateOpacityWhenAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateOpacityWhenAiming");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapIconWidgetBase::ShouldUpdateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapIconWidgetBase::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion        ScreenRegion                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::SetScreenRegion(EIconMarkerScreenRegion ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion");

	struct
	{
		EIconMarkerScreenRegion        ScreenRegion;
	} params;

	params.ScreenRegion = ScreenRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLifespan                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::SetLifeSpan(float InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan");

	struct
	{
		float                          InLifespan;
	} params;

	params.InLifespan = InLifespan;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetDisplayInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            InUniqueId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          InCreatingPlayer               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDisplayType                   InParentMapDisplayType         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InAssociatedActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 InAssociatedObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InDefaultLocation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InLifespan                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::SetDisplayInfo(int InUniqueId, class AKSPlayerState* InCreatingPlayer, EDisplayType InParentMapDisplayType, class AActor* InAssociatedActor, class UObject* InAssociatedObject, const struct FVector& InDefaultLocation, float InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetDisplayInfo");

	struct
	{
		int                            InUniqueId;
		class AKSPlayerState*          InCreatingPlayer;
		EDisplayType                   InParentMapDisplayType;
		class AActor*                  InAssociatedActor;
		class UObject*                 InAssociatedObject;
		struct FVector                 InDefaultLocation;
		float                          InLifespan;
	} params;

	params.InUniqueId = InUniqueId;
	params.InCreatingPlayer = InCreatingPlayer;
	params.InParentMapDisplayType = InParentMapDisplayType;
	params.InAssociatedActor = InAssociatedActor;
	params.InAssociatedObject = InAssociatedObject;
	params.InDefaultLocation = InDefaultLocation;
	params.InLifespan = InLifespan;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::SetArrowAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.ResetDisplayInfo
// (FUNC_Native, FUNC_Public)

void UKSMapIconWidgetBase::ResetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ResetDisplayInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSMapIconWidgetBase::OnUnhoverTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSMapIconWidgetBase::OnHoverTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EIconHoverState                NewHoverState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::OnHoverStateChanged(EIconHoverState NewHoverState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged");

	struct
	{
		EIconHoverState                NewHoverState;
	} params;

	params.NewHoverState = NewHoverState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::OnAssociatedActorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnAimStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EKSCharacterAimMode            NewAimState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewAimTransitionOffset         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::OnAimStateChanged(EKSCharacterAimMode NewAimState, float NewAimTransitionOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnAimStateChanged");

	struct
	{
		EKSCharacterAimMode            NewAimState;
		float                          NewAimTransitionOffset;
	} params;

	params.NewAimState = NewAimState;
	params.NewAimTransitionOffset = NewAimTransitionOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           InsideCenter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InsideMargins                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::IsScreenRegion(bool* InsideCenter, bool* InsideMargins)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion");

	struct
	{
		bool                           InsideCenter;
		bool                           InsideMargins;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InsideCenter != nullptr)
		*InsideCenter = params.InsideCenter;
	if (InsideMargins != nullptr)
		*InsideMargins = params.InsideMargins;
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          PositionX                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PositionY                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          XMargin                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          YMargin                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapIconWidgetBase::IsInCenteredScreenRect(float PositionX, float PositionY, float XMargin, float YMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect");

	struct
	{
		float                          PositionX;
		float                          PositionY;
		float                          XMargin;
		float                          YMargin;
		bool                           ReturnValue;
	} params;

	params.PositionX = PositionX;
	params.PositionY = PositionY;
	params.XMargin = XMargin;
	params.YMargin = YMargin;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsHovering
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapIconWidgetBase::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsHovering");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.HandleMapIconWidgetHide
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSMapIconWidgetBase::HandleMapIconWidgetHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.HandleMapIconWidgetHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMapIconWidgetBase::GetWorldYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UKSMapIconWidgetBase::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EIconHoverState                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EIconHoverState UKSMapIconWidgetBase::GetHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState");

	struct
	{
		EIconHoverState                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMapIconWidgetBase::GetEdgeArrowAngleBase(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase");

	struct
	{
		float                          Angle;
		float                          ReturnValue;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMapIconWidgetBase::GetDistanceToIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           IsIconVisible                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ArrowPosition                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetBase::GetArrowPosition(bool IsIconVisible, float Angle, struct FVector2D* ArrowPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition");

	struct
	{
		bool                           IsIconVisible;
		float                          Angle;
		struct FVector2D               ArrowPosition;
	} params;

	params.IsIconVisible = IsIconVisible;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);

	if (ArrowPosition != nullptr)
		*ArrowPosition = params.ArrowPosition;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetSelfPingIcon(EPingType PingType, EPingMessage PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon");

	struct
	{
		EPingType                      PingType;
		EPingMessage                   PingMessage;
	} params;

	params.PingType = PingType;
	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          PercentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetRevivePercent(float PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent");

	struct
	{
		float                          PercentValue;
	} params;

	params.PercentValue = PercentValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   NameText                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetNameText(const struct FText& NameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText");

	struct
	{
		struct FText                   NameText;
	} params;

	params.NameText = NameText;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EAllyMarkerState               AllyMarkerState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           HasObjective                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           HasSelfPing                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetMode(EAllyMarkerState AllyMarkerState, bool HasObjective, bool HasSelfPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode");

	struct
	{
		EAllyMarkerState               AllyMarkerState;
		bool                           HasObjective;
		bool                           HasSelfPing;
	} params;

	params.AllyMarkerState = AllyMarkerState;
	params.HasObjective = HasObjective;
	params.HasSelfPing = HasSelfPing;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              Job                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetJob(class UKSJobItem* Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob");

	struct
	{
		class UKSJobItem*              Job;
	} params;

	params.Job = Job;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          PercentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_SetHealthPercent(float PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent");

	struct
	{
		float                          PercentValue;
	} params;

	params.PercentValue = PercentValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          AcknowledingPlayer             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::View_AcknowledgeSelfPing(class AKSPlayerState* AcknowledingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing");

	struct
	{
		class AKSPlayerState*          AcknowledingPlayer;
	} params;

	params.AcknowledingPlayer = AcknowledingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSAllyMarkerWidget::SetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.SetMarkerPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          pPlayerState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::SetMarkerPlayerState(class AKSPlayerState* pPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.SetMarkerPlayerState");

	struct
	{
		class AKSPlayerState*          pPlayerState;
	} params;

	params.pPlayerState = pPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::IsOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerState*          InPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleUIRelevantChanged(class AKSPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged");

	struct
	{
		class AKSPlayerState*          InPlayerState;
	} params;

	params.InPlayerState = InPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleRemoveSelfPing(class AKSPlayerState* PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing");

	struct
	{
		class AKSPlayerState*          PingingPlayer;
	} params;

	params.PingingPlayer = PingingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerModActivated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSPlayerMod_Activated*  ActivatedMod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Active                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandlePlayerModActivated(class UKSPlayerMod_Activated* ActivatedMod, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerModActivated");

	struct
	{
		class UKSPlayerMod_Activated*  ActivatedMod;
		bool                           Active;
	} params;

	params.ActivatedMod = ActivatedMod;
	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FCombatEventInfo        CombatEventInfo                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ExpBonus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandlePlayerDown(const struct FCombatEventInfo& CombatEventInfo, int ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown");

	struct
	{
		struct FCombatEventInfo        CombatEventInfo;
		int                            ExpBonus;
	} params;

	params.CombatEventInfo = CombatEventInfo;
	params.ExpBonus = ExpBonus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FCombatEventInfo        DeathInfo                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandlePlayerDeath(const struct FCombatEventInfo& DeathInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath");

	struct
	{
		struct FCombatEventInfo        DeathInfo;
	} params;

	params.DeathInfo = DeathInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSAllyMarkerWidget::HandleOnJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleObjectiveStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleObjectiveStateChanged");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          AcknowledgingPlayer            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleChangeSelfPing(class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing");

	struct
	{
		class AKSPlayerState*          PingingPlayer;
		class AKSPlayerState*          AcknowledgingPlayer;
	} params;

	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleBombStateChanged(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::HandleAddSelfPing(class AKSPlayerState* PingingPlayer, EPingType PingType, EPingMessage PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing");

	struct
	{
		class AKSPlayerState*          PingingPlayer;
		EPingType                      PingType;
		EPingMessage                   PingMessage;
	} params;

	params.PingingPlayer = PingingPlayer;
	params.PingType = PingType;
	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType");

	struct
	{
		EPingType                      PingType;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            PingColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType");

	struct
	{
		EPingType                      PingType;
		struct FLinearColor            PingColor;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UKSAllyMarkerWidget::GetArrowPositionFromAngleBlueprint(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint");

	struct
	{
		float                          Angle;
		struct FVector2D               ReturnValue;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingTypesRow ContextualPingTypesRow         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType");

	struct
	{
		EPingType                      PingType;
		struct FContextualPingTypesRow ContextualPingTypesRow;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAllyMarkerWidget::FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		struct FContextualPingMessagesRow ContextualPingMessagesRow;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAllyMarkerWidget::ChangeOwnerContentVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility");

	struct
	{
		bool                           bVisible;
	} params;

	params.bVisible = bVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SaveText                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAlphaDisclaimer::LoadAlphaDisclaimerText(struct FString* SaveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText");

	struct
	{
		struct FString                 SaveText;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SaveText != nullptr)
		*SaveText = params.SaveText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSWeapon*               InWeapon                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWeaponWidget::SetOwningWeapon(class AKSWeapon* InWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon");

	struct
	{
		class AKSWeapon*               InWeapon;
	} params;

	params.InWeapon = InWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponWidget.PreClearWeapon
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponWidget::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.PreClearWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponWidget.PostSetWeapon
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponWidget::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.PostSetWeapon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponWidget::OtherWeaponUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  DestroyedWeapon                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWeaponWidget::OnOwningWeaponDestroyed(class AActor* DestroyedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed");

	struct
	{
		class AActor*                  DestroyedWeapon;
	} params;

	params.DestroyedWeapon = DestroyedWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSWeapon*               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSWeapon* UKSWeaponWidget::GetOwningWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon");

	struct
	{
		class AKSWeapon*               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAmmoWidget.StopReloading
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSAmmoWidget::StopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.StopReloading");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAmmoWidget.StartReloading
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSAmmoWidget::StartReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.StartReloading");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            OldInClip                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldClipSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldReserve                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewInClip                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewClipSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewReserve                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSAmmoWidget::OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged");

	struct
	{
		int                            OldInClip;
		int                            OldClipSize;
		int                            OldReserve;
		int                            NewInClip;
		int                            NewClipSize;
		int                            NewReserve;
	} params;

	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSAnnouncementQueuedMessageWidget::DisplayAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.Queue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FAnnouncementData       Announcement                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSAnnouncementQueueWidget::Queue(const struct FAnnouncementData& Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.Queue");

	struct
	{
		struct FAnnouncementData       Announcement;
	} params;

	params.Announcement = Announcement;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAnnouncementData       Announcement                   (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSAnnouncementQueueWidget::GetNext(struct FAnnouncementData* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext");

	struct
	{
		struct FAnnouncementData       Announcement;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Announcement != nullptr)
		*Announcement = params.Announcement;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSAnnouncementQueueWidget::ClearAnnoucementQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.View_SetFromItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FAccountConsumableDetails ItemDetails                    (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSBoostInventoryItemWidget::View_SetFromItem(const struct FAccountConsumableDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.View_SetFromItem");

	struct
	{
		struct FAccountConsumableDetails ItemDetails;
	} params;

	params.ItemDetails = ItemDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.ShowBoostPopup
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSBoostInventoryItemWidget::ShowBoostPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.ShowBoostPopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.SetItem
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FAccountConsumableDetails ItemDetails                    (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSBoostInventoryItemWidget::SetItem(const struct FAccountConsumableDetails& ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.SetItem");

	struct
	{
		struct FAccountConsumableDetails ItemDetails;
	} params;

	params.ItemDetails = ItemDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.PlayBoostConfirmationSound
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSBoostInventoryItemWidget::PlayBoostConfirmationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.PlayBoostConfirmationSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostConfirm
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSBoostInventoryItemWidget::OnActivateBoostConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostCancel
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSBoostInventoryItemWidget::OnActivateBoostCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSBoostInventoryItemWidget.OnActivateBoostCancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.SetChallengeData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::SetChallengeData(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.SetChallengeData");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.DisplayRewardItems
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTierRewardItemData> RewardItems                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::DisplayRewardItems(TArray<struct FTierRewardItemData> RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.DisplayRewardItems");

	struct
	{
		TArray<struct FTierRewardItemData> RewardItems;
	} params;

	params.RewardItems = RewardItems;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyRerollAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanReroll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::ApplyRerollAvailable(bool CanReroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.ApplyRerollAvailable");

	struct
	{
		bool                           CanReroll;
	} params;

	params.CanReroll = CanReroll;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyLayoutType
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EChallengeEntryCardState       CardState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::ApplyLayoutType(EChallengeEntryCardState CardState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.ApplyLayoutType");

	struct
	{
		EChallengeEntryCardState       CardState;
	} params;

	params.CardState = CardState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeProgress
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Progress                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ProgressTotal                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::ApplyChallengeProgress(int Progress, int ProgressTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeProgress");

	struct
	{
		int                            Progress;
		int                            ProgressTotal;
	} params;

	params.Progress = Progress;
	params.ProgressTotal = ProgressTotal;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   DescText                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSChallengeEntryCardBase::ApplyChallengeDescription(const struct FText& DescText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSChallengeEntryCardBase.ApplyChallengeDescription");

	struct
	{
		struct FText                   DescText;
	} params;

	params.DescText = DescText;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FCombatEventInfo        DamageInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSComponentReticleWidgetBase::ViewedPawnInstigatedDamageNotify(const struct FCombatEventInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify");

	struct
	{
		struct FCombatEventInfo        DamageInfo;
	} params;

	params.DamageInfo = DamageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OffsetFromCenterScreen         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSComponentReticleWidgetBase::UpdateReticleOffset(float OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset");

	struct
	{
		float                          OffsetFromCenterScreen;
	} params;

	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// bool                           IconVisible                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Translation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               IconScale                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSComponentReticleWidgetBase::UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon");

	struct
	{
		bool                           IconVisible;
		struct FVector2D               Translation;
		struct FVector2D               IconScale;
	} params;

	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSComponentReticleWidgetBase::CalculateReticleOffset(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSComponentReticleWidgetBase::CalculateBlockedShotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.ContextActionData.TriggerContextAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UContextActionData::TriggerContextAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.ContextActionData.TriggerContextAction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.UpdateContextActions
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*> ContextActions                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   CurrentRoute                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.UpdateContextActions");

	struct
	{
		TArray<class UContextActionData*> ContextActions;
		struct FName                   CurrentRoute;
	} params;

	params.ContextActions = ContextActions;
	params.CurrentRoute = CurrentRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.SetPrompts
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           ContextNames                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::SetPrompts(const struct FName& Route, TArray<struct FName> ContextNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPrompts");

	struct
	{
		struct FName                   Route;
		TArray<struct FName>           ContextNames;
	} params;

	params.Route = Route;
	params.ContextNames = ContextNames;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.SetPromptAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ContextName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         EventCallback                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::SetPromptAction(const struct FName& Route, const struct FName& ContextName, const struct FScriptDelegate& EventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPromptAction");

	struct
	{
		struct FName                   Route;
		struct FName                   ContextName;
		struct FScriptDelegate         EventCallback;
	} params;

	params.Route = Route;
	params.ContextName = ContextName;
	params.EventCallback = EventCallback;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.SetPrompt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ContextName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::SetPrompt(const struct FName& Route, const struct FName& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPrompt");

	struct
	{
		struct FName                   Route;
		struct FName                   ContextName;
	} params;

	params.Route = Route;
	params.ContextName = ContextName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::SetOverrideRoute(const struct FName& Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute");

	struct
	{
		struct FName                   Route;
	} params;

	params.Route = Route;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.SetActiveRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::SetActiveRoute(const struct FName& Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetActiveRoute");

	struct
	{
		struct FName                   Route;
	} params;

	params.Route = Route;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.RefreshContextBar
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSContextBarWidget::RefreshContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.RefreshContextBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.PushOverrideRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::PushOverrideRoute(const struct FName& Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.PushOverrideRoute");

	struct
	{
		struct FName                   Route;
	} params;

	params.Route = Route;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.PopOverrideRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UKSContextBarWidget::PopOverrideRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.PopOverrideRoute");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextBarWidget.OverrideKeyButtons
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSContextBarWidget::OverrideKeyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.OverrideKeyButtons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UKSContextBarWidget::GetCurrentContextRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    Key                            (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::ClearPromptByKey(const struct FName& Route, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey");

	struct
	{
		struct FName                   Route;
		struct FKey                    Key;
	} params;

	params.Route = Route;
	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.ClearPrompt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ContextName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::ClearPrompt(const struct FName& Route, const struct FName& ContextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearPrompt");

	struct
	{
		struct FName                   Route;
		struct FName                   ContextName;
	} params;

	params.Route = Route;
	params.ContextName = ContextName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.ClearOverrideRouteStack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSContextBarWidget::ClearOverrideRouteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearOverrideRouteStack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSContextBarWidget::ClearOverrideRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextBarWidget::ClearAllPrompts(const struct FName& Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts");

	struct
	{
		struct FName                   Route;
	} params;

	params.Route = Route;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.SetOptionsVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSContextMenu::SetOptionsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.SetOptionsVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.SetMenuPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UKSWidget*               WidgetToMove                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMargin                 WidgetPadding                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EViewSide                      side                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          menuWidth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          menuHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UKSContextMenu::SetMenuPosition(class UKSWidget* WidgetToMove, const struct FMargin& WidgetPadding, EViewSide side, float menuWidth, float menuHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.SetMenuPosition");

	struct
	{
		class UKSWidget*               WidgetToMove;
		struct FMargin                 WidgetPadding;
		EViewSide                      side;
		float                          menuWidth;
		float                          menuHeight;
		struct FVector2D               ReturnValue;
	} params;

	params.WidgetToMove = WidgetToMove;
	params.WidgetPadding = WidgetPadding;
	params.side = side;
	params.menuWidth = menuWidth;
	params.menuHeight = menuHeight;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.SetCurrentPlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenu::SetCurrentPlayerInfo(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.SetCurrentPlayerInfo");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.RemoveContextMenuButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSContextMenuButton*    ContextButton                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenu::RemoveContextMenuButton(class UKSContextMenuButton* ContextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.RemoveContextMenuButton");

	struct
	{
		class UKSContextMenuButton*    ContextButton;
	} params;

	params.ContextButton = ContextButton;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.OnOptionSelected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPlayerContextOptions          ContextOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextMenu::OnOptionSelected(EPlayerContextOptions ContextOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.OnOptionSelected");

	struct
	{
		EPlayerContextOptions          ContextOption;
		bool                           ReturnValue;
	} params;

	params.ContextOption = ContextOption;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.HandleOnQueueStatusChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              QueueStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenu::HandleOnQueueStatusChange(EPUMG_MatchStatus QueueStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.HandleOnQueueStatusChange");

	struct
	{
		EPUMG_MatchStatus              QueueStatus;
	} params;

	params.QueueStatus = QueueStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.GetQueueDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_QueueDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_QueueDataFactory* UKSContextMenu::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.GetQueueDataFactory");

	struct
	{
		class UPUMG_QueueDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.GetPlayerDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerDataFactory* UKSContextMenu::GetPlayerDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.GetPlayerDataFactory");

	struct
	{
		class UKSPlayerDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_PartyDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PartyDataFactory* UKSContextMenu::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.GetPartyDataFactory");

	struct
	{
		class UPUMG_PartyDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.GetFriendDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSFriendDataFactory* UKSContextMenu::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.GetFriendDataFactory");

	struct
	{
		class UKSFriendDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.GetContextButtonByEnum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPlayerContextOptions          ContextOption                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSContextMenuButton*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSContextMenuButton* UKSContextMenu::GetContextButtonByEnum(EPlayerContextOptions ContextOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.GetContextButtonByEnum");

	struct
	{
		EPlayerContextOptions          ContextOption;
		class UKSContextMenuButton*    ReturnValue;
	} params;

	params.ContextOption = ContextOption;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextMenu.ClearAllContextMenuButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSContextMenu::ClearAllContextMenuButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.ClearAllContextMenuButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenu.AddContextMenuButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSContextMenuButton*    ContextButton                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenu::AddContextMenuButton(class UKSContextMenuButton* ContextButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenu.AddContextMenuButton");

	struct
	{
		class UKSContextMenuButton*    ContextButton;
	} params;

	params.ContextButton = ContextButton;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenuButton.SetContextOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPlayerContextOptions          Context                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenuButton::SetContextOption(EPlayerContextOptions Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenuButton.SetContextOption");

	struct
	{
		EPlayerContextOptions          Context;
	} params;

	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenuButton.HandleVisibility
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenuButton::HandleVisibility(bool isVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenuButton.HandleVisibility");

	struct
	{
		bool                           isVisibility;
	} params;

	params.isVisibility = isVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenuButton.HandleActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextMenuButton::HandleActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenuButton.HandleActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextMenuButton.GetContextOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPlayerContextOptions          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPlayerContextOptions UKSContextMenuButton::GetContextOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextMenuButton.GetContextOption");

	struct
	{
		EPlayerContextOptions          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSContextualPingMarkerWidget::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FPingInfo               PingInfoVal                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSContextualPingMarkerWidget::SetPingInfo(const struct FPingInfo& PingInfoVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo");

	struct
	{
		struct FPingInfo               PingInfoVal;
	} params;

	params.PingInfoVal = PingInfoVal;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PingId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextualPingMarkerWidget::OnPingUnhovered(int PingId, class AKSPlayerState* PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered");

	struct
	{
		int                            PingId;
		class AKSPlayerState*          PingingPlayer;
	} params;

	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PingId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextualPingMarkerWidget::OnPingHovered(int PingId, class AKSPlayerState* PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered");

	struct
	{
		int                            PingId;
		class AKSPlayerState*          PingingPlayer;
	} params;

	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSContextualPingMarkerWidget::OnInitializePing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::IsInvisiblePingType(EPingType PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType");

	struct
	{
		EPingType                      PingType;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            PingId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextualPingMarkerWidget::HandleOnContextualPingRemoved(int PingId, class AKSPlayerState* PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved");

	struct
	{
		int                            PingId;
		class AKSPlayerState*          PingingPlayer;
	} params;

	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            PingId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          PingingPlayer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          AcknowledgingPlayer            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSContextualPingMarkerWidget::HandleOnContextualPingChanged(int PingId, class AKSPlayerState* PingingPlayer, class AKSPlayerState* AcknowledgingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged");

	struct
	{
		int                            PingId;
		class AKSPlayerState*          PingingPlayer;
		class AKSPlayerState*          AcknowledgingPlayer;
	} params;

	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSContextualPingMarkerWidget::GetPingLifeSpan(EPingType PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan");

	struct
	{
		EPingType                      PingType;
		float                          ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType");

	struct
	{
		EPingType                      PingType;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            PingColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType");

	struct
	{
		EPingType                      PingType;
		struct FLinearColor            PingColor;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingTypesRow ContextualPingTypesRow         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType");

	struct
	{
		EPingType                      PingType;
		struct FContextualPingTypesRow ContextualPingTypesRow;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSContextualPingMarkerWidget::FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		struct FContextualPingMessagesRow ContextualPingMessagesRow;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.TabRight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSCustomizationSelection::TabRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.TabRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.TabLeft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSCustomizationSelection::TabLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.TabLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponAsset*          WingSuit                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::SetWingSuitAsset(class UKSWeaponAsset* WingSuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset");

	struct
	{
		class UKSWeaponAsset*          WingSuit;
	} params;

	params.WingSuit = WingSuit;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.PurchaseAndEquip
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              SlotType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SlotPosition                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         StoreItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::PurchaseAndEquip(EMercCosmeticSlot SlotType, int SlotPosition, class UKSJobItem* JobItem, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.PurchaseAndEquip");

	struct
	{
		EMercCosmeticSlot              SlotType;
		int                            SlotPosition;
		class UKSJobItem*              JobItem;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.SlotType = SlotType;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.IsItemOwned
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPlatformInventoryItem*  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSCustomizationSelection::IsItemOwned(class UPlatformInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.IsItemOwned");

	struct
	{
		class UPlatformInventoryItem*  Item;
		bool                           ReturnValue;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TArray<TSoftObjectPtr<class UKSItem>> OwnedItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::GetWingSuitItems(TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems");

	struct
	{
		TArray<TSoftObjectPtr<class UKSItem>> OwnedItems;
		TArray<class UPUMG_StoreItem*> StoreItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OwnedItems != nullptr)
		*OwnedItems = params.OwnedItems;
	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSWeaponAsset*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSWeaponAsset* UKSCustomizationSelection::GetWingSuitAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset");

	struct
	{
		class UKSWeaponAsset*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// EWeaponSlot                    WeaponSlotType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UKSItem>> OwnedItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::GetWeaponSlotItems(EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems");

	struct
	{
		EWeaponSlot                    WeaponSlotType;
		class UKSJobItem*              JobItem;
		TArray<TSoftObjectPtr<class UKSItem>> OwnedItems;
		TArray<class UPUMG_StoreItem*> StoreItems;
	} params;

	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (OwnedItems != nullptr)
		*OwnedItems = params.OwnedItems;
	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EWeaponSlot                    WeaponSlotType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSWeaponAsset*          Weapon                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSCustomizationSelection::GetWeaponItem(EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, class UKSWeaponAsset** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem");

	struct
	{
		EWeaponSlot                    WeaponSlotType;
		class UKSJobItem*              JobItem;
		class UKSWeaponAsset*          Weapon;
		bool                           ReturnValue;
	} params;

	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (Weapon != nullptr)
		*Weapon = params.Weapon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UKSItem>> OwnedItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::GetSkinItemsForJobItem(class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem");

	struct
	{
		class UKSJobItem*              JobItem;
		TArray<TSoftObjectPtr<class UKSItem>> OwnedItems;
		TArray<class UPUMG_StoreItem*> StoreItems;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (OwnedItems != nullptr)
		*OwnedItems = params.OwnedItems;
	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function KillstreakUINew.KSCustomizationSelection.GetScrollBoxForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSScrollBox*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSScrollBox* UKSCustomizationSelection::GetScrollBoxForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetScrollBoxForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		class UKSScrollBox*            ReturnValue;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetRogueCustomizationRelatedInfoForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRogueCustomizationRelatedInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FRogueCustomizationRelatedInfo UKSCustomizationSelection::GetRogueCustomizationRelatedInfoForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetRogueCustomizationRelatedInfoForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		struct FRogueCustomizationRelatedInfo ReturnValue;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TSoftObjectPtr<class UKSJobItem> ForJobItem                     (CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UKSItem>> OwnedItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::GetRadialMenuItems(TSoftObjectPtr<class UKSJobItem> ForJobItem, const struct FName& Tag, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems");

	struct
	{
		TSoftObjectPtr<class UKSJobItem> ForJobItem;
		TArray<TSoftObjectPtr<class UKSItem>> OwnedItems;
		TArray<class UPUMG_StoreItem*> StoreItems;
		struct FName                   Tag;
	} params;

	params.ForJobItem = ForJobItem;
	params.Tag = Tag;

	UObject::ProcessEvent(fn, &params);

	if (OwnedItems != nullptr)
		*OwnedItems = params.OwnedItems;
	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function KillstreakUINew.KSCustomizationSelection.GetNavTabForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSNavTabWidget*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSNavTabWidget* UKSCustomizationSelection::GetNavTabForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetNavTabForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		class UKSNavTabWidget*         ReturnValue;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSCustomizationSelection::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetItemContainerForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSSortableGridPanel*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSortableGridPanel* UKSCustomizationSelection::GetItemContainerForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetItemContainerForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		class UKSSortableGridPanel*    ReturnValue;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemsForSlot
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              SlotType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponSlot                    WeaponSlotType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UKSItem>> OwnedItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::GetCosmeticItemsForSlot(EMercCosmeticSlot SlotType, EWeaponSlot WeaponSlotType, class UKSJobItem* JobItem, TArray<TSoftObjectPtr<class UKSItem>>* OwnedItems, TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemsForSlot");

	struct
	{
		EMercCosmeticSlot              SlotType;
		EWeaponSlot                    WeaponSlotType;
		class UKSJobItem*              JobItem;
		TArray<TSoftObjectPtr<class UKSItem>> OwnedItems;
		TArray<class UPUMG_StoreItem*> StoreItems;
	} params;

	params.SlotType = SlotType;
	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (OwnedItems != nullptr)
		*OwnedItems = params.OwnedItems;
	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemSelectorsForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UKSCosmeticItemSelectorWidget*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSCosmeticItemSelectorWidget*> UKSCustomizationSelection::GetCosmeticItemSelectorsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetCosmeticItemSelectorsForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		TArray<class UKSCosmeticItemSelectorWidget*> ReturnValue;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveSortableGridPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSSortableGridPanel*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSortableGridPanel* UKSCustomizationSelection::GetActiveSortableGridPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveSortableGridPanel");

	struct
	{
		class UKSSortableGridPanel*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveScrollBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSScrollBox*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSScrollBox* UKSCustomizationSelection::GetActiveScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveScrollBox");

	struct
	{
		class UKSScrollBox*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveRogueCustomizationRelatedInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRogueCustomizationRelatedInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

struct FRogueCustomizationRelatedInfo UKSCustomizationSelection::GetActiveRogueCustomizationRelatedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveRogueCustomizationRelatedInfo");

	struct
	{
		struct FRogueCustomizationRelatedInfo ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveNavTab
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSNavTabWidget*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSNavTabWidget* UKSCustomizationSelection::GetActiveNavTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveNavTab");

	struct
	{
		class UKSNavTabWidget*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMercCosmeticSlot UKSCustomizationSelection::GetActiveCosmeticSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticItemSelectors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSCosmeticItemSelectorWidget*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSCosmeticItemSelectorWidget*> UKSCustomizationSelection::GetActiveCosmeticItemSelectors()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetActiveCosmeticItemSelectors");

	struct
	{
		TArray<class UKSCosmeticItemSelectorWidget*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.ForceSetTabIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewTabIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::ForceSetTabIndex(int NewTabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.ForceSetTabIndex");

	struct
	{
		int                            NewTabIndex;
	} params;

	params.NewTabIndex = NewTabIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.ClearCosmeticItemsForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::ClearCosmeticItemsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.ClearCosmeticItemsForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.ChangeToNewTab
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSCustomizationSelection::ChangeToNewTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.ChangeToNewTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.CanChangeTab
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSCustomizationSelection::CanChangeTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.CanChangeTab");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.AddRogueCustomizationRelatedInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewSwitcherIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMercCosmeticSlot              NewCosmeticSlot                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSNavTabWidget*         NewNavTab                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSScrollBox*            NewScrollBox                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSSortableGridPanel*    NewSortableGridPanel           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::AddRogueCustomizationRelatedInfo(int NewSwitcherIndex, EMercCosmeticSlot NewCosmeticSlot, class UKSNavTabWidget* NewNavTab, class UKSScrollBox* NewScrollBox, class UKSSortableGridPanel* NewSortableGridPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.AddRogueCustomizationRelatedInfo");

	struct
	{
		int                            NewSwitcherIndex;
		EMercCosmeticSlot              NewCosmeticSlot;
		class UKSNavTabWidget*         NewNavTab;
		class UKSScrollBox*            NewScrollBox;
		class UKSSortableGridPanel*    NewSortableGridPanel;
	} params;

	params.NewSwitcherIndex = NewSwitcherIndex;
	params.NewCosmeticSlot = NewCosmeticSlot;
	params.NewNavTab = NewNavTab;
	params.NewScrollBox = NewScrollBox;
	params.NewSortableGridPanel = NewSortableGridPanel;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSCustomizationSelection.AddCosmeticItemsForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              CheckCosmeticSlot              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UKSCosmeticItemSelectorWidget*> NewCosmeticItems               (CPF_Parm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSCustomizationSelection::AddCosmeticItemsForCosmeticSlot(EMercCosmeticSlot CheckCosmeticSlot, TArray<class UKSCosmeticItemSelectorWidget*> NewCosmeticItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.AddCosmeticItemsForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CheckCosmeticSlot;
		TArray<class UKSCosmeticItemSelectorWidget*> NewCosmeticItems;
	} params;

	params.CheckCosmeticSlot = CheckCosmeticSlot;
	params.NewCosmeticItems = NewCosmeticItems;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.UpdateChallenges
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSDailyChallengeViewBase::UpdateChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.UpdateChallenges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.InitializeChallengeDisplays
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSDailyChallengeViewBase::InitializeChallengeDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.InitializeChallengeDisplays");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesReady
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSDailyChallengeViewBase::HandlePlayerChallengesReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSDailyChallengeViewBase::HandlePlayerChallengesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.HandlePlayerChallengesChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.HandleDailyChallengeTimerRefreshed
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSDailyChallengeViewBase::HandleDailyChallengeTimerRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.HandleDailyChallengeTimerRefreshed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.GetDisplayingChallenges
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSActivityInstance*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSActivityInstance*> UKSDailyChallengeViewBase::GetDisplayingChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.GetDisplayingChallenges");

	struct
	{
		TArray<class UKSActivityInstance*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallengeTimeRemaining
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeRemainingSeconds           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDailyChallengeViewBase::DisplayChallengeTimeRemaining(int TimeRemainingSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallengeTimeRemaining");

	struct
	{
		int                            TimeRemainingSeconds;
	} params;

	params.TimeRemainingSeconds = TimeRemainingSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallenge
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           PlayFlourish                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDailyChallengeViewBase::DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDailyChallengeViewBase.DisplayChallenge");

	struct
	{
		int                            Index;
		class UKSActivityInstance*     ActivityInstance;
		bool                           PlayFlourish;
	} params;

	params.Index = Index;
	params.ActivityInstance = ActivityInstance;
	params.PlayFlourish = PlayFlourish;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSDataSocialCategory::TryConsumeOpenOnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDataSocialCategory::SetOpenOnUpdate(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDataSocialCategory.SetMessageText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           bProcessing                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   MessageText                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSDataSocialCategory::SetMessageText(bool bProcessing, const struct FText& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetMessageText");

	struct
	{
		bool                           bProcessing;
		struct FText                   MessageText;
	} params;

	params.bProcessing = bProcessing;
	params.MessageText = MessageText;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDataSocialCategory.SetHeaderText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Header                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSDataSocialCategory::SetHeaderText(const struct FText& Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetHeaderText");

	struct
	{
		struct FText                   Header;
	} params;

	params.Header = Header;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDataSocialCategory.Num
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSDataSocialCategory::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.Num");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.IsProcessing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSDataSocialCategory::IsProcessing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.IsProcessing");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetPlayerList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSDataSocialPlayer*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSDataSocialPlayer*> UKSDataSocialCategory::GetPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetPlayerList");

	struct
	{
		TArray<class UKSDataSocialPlayer*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetMessageText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSDataSocialCategory::GetMessageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetMessageText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetHeaderText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSDataSocialCategory::GetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetHeaderText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

unsigned char UKSDataSocialCategory::BP_GetSectionValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue");

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDataSocialPlayer::KSSocialPlayerUpdate__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDataSocialPlayer.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSDataSocialPlayer::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialPlayer.IsValid");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerInfo*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerInfo* UKSDataSocialPlayer::GetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo");

	struct
	{
		class UKSPlayerInfo*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDebugMenu.GetSubmenu
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDebugMenuCommandInfo   BaseCommand                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FDebugMenuCommandInfo> Submenu                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSDebugMenu::GetSubmenu(const struct FDebugMenuCommandInfo& BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetSubmenu");

	struct
	{
		struct FDebugMenuCommandInfo   BaseCommand;
		TArray<struct FDebugMenuCommandInfo> Submenu;
		bool                           ReturnValue;
	} params;

	params.BaseCommand = BaseCommand;

	UObject::ProcessEvent(fn, &params);

	if (Submenu != nullptr)
		*Submenu = params.Submenu;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> SortedCommands                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDebugMenu::GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands");

	struct
	{
		TArray<struct FDebugMenuCommandInfo> SortedCommands;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SortedCommands != nullptr)
		*SortedCommands = params.SortedCommands;
}


// Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 BaseCommandString              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EConsoleCommandParamType       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EConsoleCommandParamType UKSDebugMenu::GetParamTypeForSubCommand(const struct FString& BaseCommandString)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand");

	struct
	{
		struct FString                 BaseCommandString;
		EConsoleCommandParamType       ReturnValue;
	} params;

	params.BaseCommandString = BaseCommandString;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDownloadProgressWidget.UpdateFinished
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSDownloadProgressWidget::UpdateFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDownloadProgressWidget.UpdateFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSDownloadProgressWidget.UpdatedDownloadProgress
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Total                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Eta                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSupportsEta                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDownloadProgressWidget::UpdatedDownloadProgress(float Progress, float Total, float Eta, bool bSupportsEta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDownloadProgressWidget.UpdatedDownloadProgress");

	struct
	{
		float                          Progress;
		float                          Total;
		float                          Eta;
		bool                           bSupportsEta;
	} params;

	params.Progress = Progress;
	params.Total = Total;
	params.Eta = Eta;
	params.bSupportsEta = bSupportsEta;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakenDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsElimination                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::ShowMessageForTakenDown(class AKSPlayerState* Instigator, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakenDown");

	struct
	{
		class AKSPlayerState*          Instigator;
		bool                           IsElimination;
	} params;

	params.Instigator = Instigator;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakedown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Victim                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsElimination                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::ShowMessageForTakedown(class AKSPlayerState* Victim, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForTakedown");

	struct
	{
		class AKSPlayerState*          Victim;
		bool                           IsElimination;
	} params;

	params.Victim = Victim;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForAssist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Victim                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsElimination                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::ShowMessageForAssist(class AKSPlayerState* Victim, bool IsElimination)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.ShowMessageForAssist");

	struct
	{
		class AKSPlayerState*          Victim;
		bool                           IsElimination;
	} params;

	params.Victim = Victim;
	params.IsElimination = IsElimination;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ExpBonus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::OnPlayerDownReceived(const struct FCombatEventInfo& EventInfo, int ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived");

	struct
	{
		struct FCombatEventInfo        EventInfo;
		int                            ExpBonus;
	} params;

	params.EventInfo = EventInfo;
	params.ExpBonus = ExpBonus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        EventInfo                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::OnPlayerDeathReceived(const struct FCombatEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived");

	struct
	{
		struct FCombatEventInfo        EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FAssistInfo             EventInfo                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSEliminationMessageWidget::OnPlayerAssistReceived(const struct FAssistInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived");

	struct
	{
		struct FAssistInfo             EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEliminationMessageWidget.ClearMessages
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSEliminationMessageWidget::ClearMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.ClearMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEMODataFactory.SetupTestData
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            PlayerXp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            RankedXp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            RogueXp                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReputationEarned               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlacementMatchNum              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BattlePassXp                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEMODataFactory::SetupTestData(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.SetupTestData");

	struct
	{
		int                            PlayerXp;
		int                            RankedXp;
		int                            RogueXp;
		int                            ReputationEarned;
		int                            PlacementMatchNum;
		int                            BattlePassXp;
	} params;

	params.PlayerXp = PlayerXp;
	params.RankedXp = RankedXp;
	params.RogueXp = RogueXp;
	params.ReputationEarned = ReputationEarned;
	params.PlacementMatchNum = PlacementMatchNum;
	params.BattlePassXp = BattlePassXp;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::IsLocalPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPlayerRewardsSummary   PlayerRewardSummary            (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           bFakeTestData                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSEMODataFactory::HandlePlayerRewards(const struct FPlayerRewardsSummary& PlayerRewardSummary, bool bFakeTestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards");

	struct
	{
		struct FPlayerRewardsSummary   PlayerRewardSummary;
		bool                           bFakeTestData;
	} params;

	params.PlayerRewardSummary = PlayerRewardSummary;
	params.bFakeTestData = bFakeTestData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UKSEMODataFactory::HandleEOMDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FScoreboardStats        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FScoreboardStats UKSEMODataFactory::GetScoreboardStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats");

	struct
	{
		struct FScoreboardStats        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPlayerRewardsSummary   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FPlayerRewardsSummary UKSEMODataFactory::GetPlayerRewardsSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary");

	struct
	{
		struct FPlayerRewardsSummary   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSEMODataFactory::GetLastMatchQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindReputationProgressionActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSActivityInstance*     ReputationProgressionActivity  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::FindReputationProgressionActivity(class UKSActivityInstance** ReputationProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindReputationProgressionActivity");

	struct
	{
		class UKSActivityInstance*     ReputationProgressionActivity;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ReputationProgressionActivity != nullptr)
		*ReputationProgressionActivity = params.ReputationProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindRankedProgressionActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSActivityInstance*     RankedProgressionActivity      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::FindRankedProgressionActivity(class UKSActivityInstance** RankedProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindRankedProgressionActivity");

	struct
	{
		class UKSActivityInstance*     RankedProgressionActivity;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RankedProgressionActivity != nullptr)
		*RankedProgressionActivity = params.RankedProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindPlayerXpProgressionActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSActivityInstance*     PlayerXpProgressionActivity    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::FindPlayerXpProgressionActivity(class UKSActivityInstance** PlayerXpProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindPlayerXpProgressionActivity");

	struct
	{
		class UKSActivityInstance*     PlayerXpProgressionActivity;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerXpProgressionActivity != nullptr)
		*PlayerXpProgressionActivity = params.PlayerXpProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindMiniBattlePassProgressionActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSActivityInstance*     MiniBattlePassProgressionActivity (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::FindMiniBattlePassProgressionActivity(class UKSActivityInstance** MiniBattlePassProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindMiniBattlePassProgressionActivity");

	struct
	{
		class UKSActivityInstance*     MiniBattlePassProgressionActivity;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MiniBattlePassProgressionActivity != nullptr)
		*MiniBattlePassProgressionActivity = params.MiniBattlePassProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindBattlePassProgressionActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UKSActivityInstance*     BattlePassProgressionActivity  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSEMODataFactory::FindBattlePassProgressionActivity(class UKSActivityInstance** BattlePassProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindBattlePassProgressionActivity");

	struct
	{
		class UKSActivityInstance*     BattlePassProgressionActivity;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (BattlePassProgressionActivity != nullptr)
		*BattlePassProgressionActivity = params.BattlePassProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSEMODataFactory::ComputeEOMResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FExpDisplayInfo         ExpInfo                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSExpDisplayWidget::QueueExpDisplays(const struct FExpDisplayInfo& ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays");

	struct
	{
		struct FExpDisplayInfo         ExpInfo;
	} params;

	params.ExpInfo = ExpInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo
// (FUNC_Native, FUNC_Protected)

void UKSExpDisplayWidget::NativeHandleDisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FExpDisplayInfo         ExpInfo                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSExpDisplayWidget::GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay");

	struct
	{
		struct FExpDisplayInfo         ExpInfo;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ExpInfo != nullptr)
		*ExpInfo = params.ExpInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSExpDisplayWidget::DisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFloatTickLerpWidgetBase::SetTargetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFloatTickLerpWidgetBase::SetLerpTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime");

	struct
	{
		float                          Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Power                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFloatTickLerpWidgetBase::SetLerpPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower");

	struct
	{
		float                          Power;
	} params;

	params.Power = Power;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSFloatTickLerpWidgetBase::IsLerping()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSFloatTickLerpWidgetBase::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFloatTickLerpWidgetBase::ForceCurrentValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFloatTickLerpWidgetBase::DisplayForValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPlayerRewardsSummary   PlayerRewardsSummary           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FScoreboardStats        ScoreboardStats                (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSFriendDataFactory::OnEOMRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived");

	struct
	{
		struct FPlayerRewardsSummary   PlayerRewardsSummary;
		struct FScoreboardStats        ScoreboardStats;
	} params;

	params.PlayerRewardsSummary = PlayerRewardsSummary;
	params.ScoreboardStats = ScoreboardStats;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSFriendDataFactory*    Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFriendDataFactory::KSUpdateRecentlyPlayedPlayers__DelegateSignature(class UKSFriendDataFactory* Source)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature");

	struct
	{
		class UKSFriendDataFactory*    Source;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetSuggestedFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UKSPlayerInfo*>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSPlayerInfo*> UKSFriendDataFactory::GetPlayersPlayedWithThisClientSession_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info");

	struct
	{
		TArray<class UKSPlayerInfo*>   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetPendingFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetOnlineFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetFriendRequests_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFubarPopupWidget.ReceiveFubar
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EFubarDisplayReason            Reason                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFubarPopupWidget::ReceiveFubar(EFubarDisplayReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFubarPopupWidget.ReceiveFubar");

	struct
	{
		EFubarDisplayReason            Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSFubarPopupWidget.GetSecondsToShutdown
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSFubarPopupWidget::GetSecondsToShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFubarPopupWidget.GetSecondsToShutdown");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFubarPopupWidget.DisplayFubar
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EFubarDisplayReason            Reason                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSFubarPopupWidget::DisplayFubar(EFubarDisplayReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFubarPopupWidget.DisplayFubar");

	struct
	{
		EFubarDisplayReason            Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.UpdateOpacityWhenAiming
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSMapWidgetBase::UpdateOpacityWhenAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.UpdateOpacityWhenAiming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.UpdateIcon
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSMapIconWidgetBase*    Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::UpdateIcon(class UKSMapIconWidgetBase* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.UpdateIcon");

	struct
	{
		class UKSMapIconWidgetBase*    Icon;
	} params;

	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               MapCoords                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UKSMapWidgetBase::ToIconRenderCoords(const struct FVector2D& MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords");

	struct
	{
		struct FVector2D               MapCoords;
		struct FVector2D               ReturnValue;
	} params;

	params.MapCoords = MapCoords;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          PlayerAngle                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMapWidgetBase::ToIconRenderAngle(float PlayerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle");

	struct
	{
		float                          PlayerAngle;
		float                          ReturnValue;
	} params;

	params.PlayerAngle = PlayerAngle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSMapWidgetBase::TickCachedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.ShouldUpdateOpacityWhenAiming
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapWidgetBase::ShouldUpdateOpacityWhenAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.ShouldUpdateOpacityWhenAiming");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.SetScrambleState
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           Scrambled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::SetScrambleState(bool Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.SetScrambleState");

	struct
	{
		bool                           Scrambled;
	} params;

	params.Scrambled = Scrambled;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.RemoveWidgetFromLoaderById
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            InId                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::RemoveWidgetFromLoaderById(int InId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.RemoveWidgetFromLoaderById");

	struct
	{
		int                            InId;
	} params;

	params.InId = InId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Scrambled                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::OnScrambleStateChanged(bool Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged");

	struct
	{
		bool                           Scrambled;
	} params;

	params.Scrambled = Scrambled;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FDisplayInfo            DisplayInfo                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::OnReceiveDisplayWidgetInfo(const struct FDisplayInfo& DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo");

	struct
	{
		struct FDisplayInfo            DisplayInfo;
	} params;

	params.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AGameStateBase*          GameStateBase                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::OnGameStateSet(class AGameStateBase* GameStateBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet");

	struct
	{
		class AGameStateBase*          GameStateBase;
	} params;

	params.GameStateBase = GameStateBase;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.IsOnMap
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               MapCoords                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMapWidgetBase::IsOnMap(const struct FVector2D& MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.IsOnMap");

	struct
	{
		struct FVector2D               MapCoords;
		bool                           ReturnValue;
	} params;

	params.MapCoords = MapCoords;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.HandleMoveToWidgetPool
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSMapIconWidgetBase*    MapIconWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::HandleMoveToWidgetPool(class UKSMapIconWidgetBase* MapIconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.HandleMoveToWidgetPool");

	struct
	{
		class UKSMapIconWidgetBase*    MapIconWidget;
	} params;

	params.MapIconWidget = MapIconWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.HandleDisplayFromWidgetPool
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSMapIconWidgetBase*    MapIconWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FDisplayInfo            DisplayInfo                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::HandleDisplayFromWidgetPool(class UKSMapIconWidgetBase* MapIconWidget, const struct FDisplayInfo& DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.HandleDisplayFromWidgetPool");

	struct
	{
		class UKSMapIconWidgetBase*    MapIconWidget;
		struct FDisplayInfo            DisplayInfo;
	} params;

	params.MapIconWidget = MapIconWidget;
	params.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.HandleAimStateChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EKSCharacterAimMode            NewAimState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::HandleAimStateChange(EKSCharacterAimMode NewAimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.HandleAimStateChange");

	struct
	{
		EKSCharacterAimMode            NewAimState;
	} params;

	params.NewAimState = NewAimState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.GrabMapIconWidget
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 WidgetPoolName                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSMapIconWidgetBase*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSMapIconWidgetBase* UKSMapWidgetBase::GrabMapIconWidget(const struct FString& WidgetPoolName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GrabMapIconWidget");

	struct
	{
		struct FString                 WidgetPoolName;
		class UKSMapIconWidgetBase*    ReturnValue;
	} params;

	params.WidgetPoolName = WidgetPoolName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSMapIconWidgetBase*    Icon                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMapWidgetBase::GetDistanceToIcon(class UKSMapIconWidgetBase* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon");

	struct
	{
		class UKSMapIconWidgetBase*    Icon;
		float                          ReturnValue;
	} params;

	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APawn* UKSMapWidgetBase::GetCachedViewedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UKSMapWidgetBase::GetCachedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.DisplayToMapWidget
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    MapIcon                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::DisplayToMapWidget(class UKSMapIconWidgetBase* MapIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.DisplayToMapWidget");

	struct
	{
		class UKSMapIconWidgetBase*    MapIcon;
	} params;

	params.MapIcon = MapIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UniqueId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          CreatingPlayer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDisplayType                   ParentMapDisplayType           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  AssociatedActor                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 AssociatedObject               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 DefaultLocation                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Lifespan                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSMapIconWidgetBase*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSMapIconWidgetBase* UKSMapWidgetBase::CreateNewIconWidget(class UClass* WidgetClass, int UniqueId, class AKSPlayerState* CreatingPlayer, EDisplayType ParentMapDisplayType, class AActor* AssociatedActor, class UObject* AssociatedObject, const struct FVector& DefaultLocation, float Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget");

	struct
	{
		class UClass*                  WidgetClass;
		int                            UniqueId;
		class AKSPlayerState*          CreatingPlayer;
		EDisplayType                   ParentMapDisplayType;
		class AActor*                  AssociatedActor;
		class UObject*                 AssociatedObject;
		struct FVector                 DefaultLocation;
		float                          Lifespan;
		class UKSMapIconWidgetBase*    ReturnValue;
	} params;

	params.WidgetClass = WidgetClass;
	params.UniqueId = UniqueId;
	params.CreatingPlayer = CreatingPlayer;
	params.ParentMapDisplayType = ParentMapDisplayType;
	params.AssociatedActor = AssociatedActor;
	params.AssociatedObject = AssociatedObject;
	params.DefaultLocation = DefaultLocation;
	params.Lifespan = Lifespan;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.CreateMapIconWidgetPool
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FMapIconWidgetConfig    MapIconWidgetConfig            (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSMapWidgetBase::CreateMapIconWidgetPool(const struct FMapIconWidgetConfig& MapIconWidgetConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.CreateMapIconWidgetPool");

	struct
	{
		struct FMapIconWidgetConfig    MapIconWidgetConfig;
	} params;

	params.MapIconWidgetConfig = MapIconWidgetConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.UIX_ReportServer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AKSHUDCommon::UIX_ReportServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.UIX_ReportServer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.TestChallengeNotification
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void AKSHUDCommon::TestChallengeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.TestChallengeNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.ShowErrorPopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::ShowErrorPopup(const struct FText& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShowErrorPopup");

	struct
	{
		struct FText                   ErrorMsg;
	} params;

	params.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::ShouldShowCrossplayIconForPlayerState(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState");

	struct
	{
		class AKSPlayerState*          PlayerState;
		bool                           ReturnValue;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::ShouldShowCrossplayIconForPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            SiteId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::SetPreferredSiteId(int SiteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId");

	struct
	{
		int                            SiteId;
	} params;

	params.SiteId = SiteId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.PrintToLog
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::PrintToLog(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.PrintToLog");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.MutePlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Mute                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::MutePlayer(int64_t PlayerId, bool Mute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.MutePlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           Mute;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;
	params.Mute = Mute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.LogErrorMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::LogErrorMessage(const struct FText& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.LogErrorMessage");

	struct
	{
		struct FText                   ErrorMsg;
	} params;

	params.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::IsSamePortalAsLocalPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.IsMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::IsMuted(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.IsMuted");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::HandleOpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat");

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSHUDCommon::HandleControllerDisconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.GetUISessionManager
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSUISessionManager*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSUISessionManager* AKSHUDCommon::GetUISessionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetUISessionManager");

	struct
	{
		class UKSUISessionManager*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetSiteList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TMap<int, struct FText>        OutSiteIdToNameMap             (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetSiteList");

	struct
	{
		TMap<int, struct FText>        OutSiteIdToNameMap;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutSiteIdToNameMap != nullptr)
		*OutSiteIdToNameMap = params.OutSiteIdToNameMap;
}


// Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsDataFactory* AKSHUDCommon::GetSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory");

	struct
	{
		class UKSSettingsDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            OutSiteId                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::GetPreferredSiteId(int* OutSiteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId");

	struct
	{
		int                            OutSiteId;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutSiteId != nullptr)
		*OutSiteId = params.OutSiteId;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetPlayerDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerDataFactory* AKSHUDCommon::GetPlayerDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetPlayerDataFactory");

	struct
	{
		class UKSPlayerDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPartyDataFactory* AKSHUDCommon::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory");

	struct
	{
		class UKSPartyDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSNPEDataFactory*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSNPEDataFactory* AKSHUDCommon::GetNPEDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory");

	struct
	{
		class UKSNPEDataFactory*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetMercManager
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSMercManager*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSMercManager* AKSHUDCommon::GetMercManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetMercManager");

	struct
	{
		class UKSMercManager*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_LoginDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_LoginDataFactory* AKSHUDCommon::GetLoginDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory");

	struct
	{
		class UPUMG_LoginDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSLoadoutDataFactory*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSLoadoutDataFactory* AKSHUDCommon::GetLoadoutDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory");

	struct
	{
		class UKSLoadoutDataFactory*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetItemHelper
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* AKSHUDCommon::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetFont
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   FontName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSlateFontInfo          ReturnFont                     (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::GetFont(const struct FName& FontName, struct FSlateFontInfo* ReturnFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetFont");

	struct
	{
		struct FName                   FontName;
		struct FSlateFontInfo          ReturnFont;
		bool                           ReturnValue;
	} params;

	params.FontName = FontName;

	UObject::ProcessEvent(fn, &params);

	if (ReturnFont != nullptr)
		*ReturnFont = params.ReturnFont;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPanelWidget*>    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPanelWidget*> AKSHUDCommon::GetFocusableWidgetContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers");

	struct
	{
		TArray<class UPanelWidget*>    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetContextBarWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSContextBarWidget* AKSHUDCommon::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetContextBarWidget");

	struct
	{
		class UKSContextBarWidget*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ColorName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSHUDCommon::GetColor(const struct FName& ColorName, struct FLinearColor* ReturnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetColor");

	struct
	{
		struct FName                   ColorName;
		struct FLinearColor            ReturnColor;
		bool                           ReturnValue;
	} params;

	params.ColorName = ColorName;

	UObject::ProcessEvent(fn, &params);

	if (ReturnColor != nullptr)
		*ReturnColor = params.ReturnColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetChatDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSChatDataFactory*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSChatDataFactory* AKSHUDCommon::GetChatDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetChatDataFactory");

	struct
	{
		class UKSChatDataFactory*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSAcquisitionManager*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSAcquisitionManager* AKSHUDCommon::GetAcquisitionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager");

	struct
	{
		class UKSAcquisitionManager*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.EvaluateFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AKSHUDCommon::EvaluateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.EvaluateFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.DisplayWatermark
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AKSHUDCommon::DisplayWatermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.DisplayWatermark");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.ConfirmReportServer
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSHUDCommon::ConfirmReportServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ConfirmReportServer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          SafeFrameScale                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSHUDCommon::ApplySafeFrameScale(float SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale");

	struct
	{
		float                          SafeFrameScale;
	} params;

	params.SafeFrameScale = SafeFrameScale;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AKSGameHUDNew::UIX_ReturnLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public)

void AKSGameHUDNew::ToggleAimAssistDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.SetHUDVisible
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::SetHUDVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.SetHUDVisible");

	struct
	{
		bool                           bVisible;
	} params;

	params.bVisible = bVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.ReturnToHome
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AKSGameHUDNew::ReturnToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.ReturnToHome");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UKSPlayerMod*            PlayerMod                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    ModInstance                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::OnViewedPlayerStateModRemoved(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved");

	struct
	{
		class UKSPlayerMod*            PlayerMod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.PlayerMod = PlayerMod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UKSPlayerMod*            PlayerMod                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    ModInstance                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::OnViewedPlayerStateModAdded(class UKSPlayerMod* PlayerMod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded");

	struct
	{
		class UKSPlayerMod*            PlayerMod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.PlayerMod = PlayerMod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  OldViewTarget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  NewViewTarget                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::OnViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged");

	struct
	{
		class AKSPlayerController*     Controller;
		class AActor*                  OldViewTarget;
		class AActor*                  NewViewTarget;
	} params;

	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.OnToggleHUD
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AKSGameHUDNew::OnToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnToggleHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)

void AKSGameHUDNew::OnAssetDataTableManagerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.NetworkLagStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UNetDriver*              NetDriver                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ENetworkLagState>  LagType                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::NetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState> LagType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.NetworkLagStateChanged");

	struct
	{
		class UWorld*                  World;
		class UNetDriver*              NetDriver;
		TEnumAsByte<ENetworkLagState>  LagType;
	} params;

	params.World = World;
	params.NetDriver = NetDriver;
	params.LagType = LagType;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSGameHUDNew::IsPlayerMuted(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
		bool                           ReturnValue;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameHUDNew.IsPlayerInVoiceChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          KSPlayerState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSGameHUDNew::IsPlayerInVoiceChannel(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.IsPlayerInVoiceChannel");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
		bool                           ReturnValue;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::HandleLoginStateChange(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange");

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.HandleFubar
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// EFubarDisplayReason            Reason                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSGameHUDNew::HandleFubar(EFubarDisplayReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.HandleFubar");

	struct
	{
		EFubarDisplayReason            Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSHUDStateTracker*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSHUDStateTracker* AKSGameHUDNew::GetHUDStateTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker");

	struct
	{
		class UKSHUDStateTracker*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSGameInfoOverlayBase::HandlePlayerStateReady(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGamepadPromptWidget.SetContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FButtonPromptContext    PromptContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSGamepadPromptWidget::SetContext(const struct FButtonPromptContext& PromptContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.SetContext");

	struct
	{
		struct FButtonPromptContext    PromptContext;
	} params;

	params.PromptContext = PromptContext;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGamepadPromptWidget.PushContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FButtonPromptContext    PromptContext                  (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSGamepadPromptWidget::PushContext(const struct FButtonPromptContext& PromptContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.PushContext");

	struct
	{
		struct FButtonPromptContext    PromptContext;
	} params;

	params.PromptContext = PromptContext;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGamepadPromptWidget.PopContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FButtonPromptContext    OutContext                     (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSGamepadPromptWidget::PopContext(struct FButtonPromptContext* OutContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.PopContext");

	struct
	{
		struct FButtonPromptContext    OutContext;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutContext != nullptr)
		*OutContext = params.OutContext;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSGamepadPromptWidget::ClearAllContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FButtonPromptContext    Context                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSGamepadPromptWidget::ApplyContext(const struct FButtonPromptContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext");

	struct
	{
		struct FButtonPromptContext    Context;
	} params;

	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAnimatedChange                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::OverhealChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar");

	struct
	{
		class AKSCharacterBase*        Character;
		bool                           bAnimatedChange;
	} params;

	params.Character = Character;
	params.bAnimatedChange = bAnimatedChange;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.OnOverhealChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OldOverheal                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewOverheal                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAnimatedChange                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::OnOverhealChanged(float OldOverheal, float NewOverheal, bool bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnOverhealChanged");

	struct
	{
		float                          OldOverheal;
		float                          NewOverheal;
		bool                           bAnimatedChange;
	} params;

	params.OldOverheal = OldOverheal;
	params.NewOverheal = NewOverheal;
	params.bAnimatedChange = bAnimatedChange;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.OnHealthChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OldHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OldMaxHealth                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewHealth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewMaxHealth                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAnimatedChange                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::OnHealthChanged(float OldHealth, float OldMaxHealth, float NewHealth, float NewMaxHealth, bool bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnHealthChanged");

	struct
	{
		float                          OldHealth;
		float                          OldMaxHealth;
		float                          NewHealth;
		float                          NewMaxHealth;
		bool                           bAnimatedChange;
	} params;

	params.OldHealth = OldHealth;
	params.OldMaxHealth = OldMaxHealth;
	params.NewHealth = NewHealth;
	params.NewMaxHealth = NewMaxHealth;
	params.bAnimatedChange = bAnimatedChange;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.OnArmorChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OldArmor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewArmor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::OnArmorChanged(float OldArmor, float NewArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnArmorChanged");

	struct
	{
		float                          OldArmor;
		float                          NewArmor;
	} params;

	params.OldArmor = OldArmor;
	params.NewArmor = NewArmor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAnimatedChange                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::HealthChangeFromChar(class AKSCharacterBase* Character, bool bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar");

	struct
	{
		class AKSCharacterBase*        Character;
		bool                           bAnimatedChange;
	} params;

	params.Character = Character;
	params.bAnimatedChange = bAnimatedChange;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::HandlePawnOverhealChange(class AKSCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange");

	struct
	{
		class AKSCharacterBase*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class AKSCharacterBase*        Character                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHealthWidget::HandlePawnHealthChange(class AKSCharacterBase* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange");

	struct
	{
		class AKSCharacterBase*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSHUDStateTracker::PollMatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   PreviousPhaseName              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHUDStateTracker::HandleUpdatedMatchPhase(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSGameState*            GameState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSHUDStateTracker::HandleGameStateBeginPlay(class AKSGameState* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay");

	struct
	{
		class AKSGameState*            GameState;
	} params;

	params.GameState = GameState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSWidgetInfoActor*      InfoActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSInfoActorWidgetInterface::SetInfoActor(class AKSWidgetInfoActor* InfoActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor");

	struct
	{
		class AKSWidgetInfoActor*      InfoActor;
		bool                           ReturnValue;
	} params;

	params.InfoActor = InfoActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSInspectPlayerInterface.UnbindEventFromInspectPlayerChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSInspectPlayerInterface::UnbindEventFromInspectPlayerChanged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.UnbindEventFromInspectPlayerChanged");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;

	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSInspectPlayerInterface.GetInspectPlayerState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSPlayerState* UKSInspectPlayerInterface::GetInspectPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.GetInspectPlayerState");

	struct
	{
		class AKSPlayerState*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSInspectPlayerInterface.BindEventToInspectPlayerChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSInspectPlayerInterface::BindEventToInspectPlayerChanged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.BindEventToInspectPlayerChanged");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;

	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSJobSelectionWidget.GetJobItems
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<TSoftObjectPtr<class UKSJobItem>> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class UKSJobItem>> UKSJobSelectionWidget::GetJobItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.GetJobItems");

	struct
	{
		TArray<TSoftObjectPtr<class UKSJobItem>> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSJobSelectionWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSJobSelectionWidget.GetAdOffer
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UKSJobSelectionWidget::GetAdOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.GetAdOffer");

	struct
	{
		class UPUMG_StoreItem*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSKillCardWidget.ShowPlayerAndMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSKillCardWidget::ShowPlayerAndMessage(class AKSPlayerState* PlayerState, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSKillCardWidget.ShowPlayerAndMessage");

	struct
	{
		class AKSPlayerState*          PlayerState;
		struct FText                   Message;
	} params;

	params.PlayerState = PlayerState;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSKillCardWidget.ClearMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseAnimations                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSKillCardWidget::ClearMessage(bool UseAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSKillCardWidget.ClearMessage");

	struct
	{
		bool                           UseAnimations;
	} params;

	params.UseAnimations = UseAnimations;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   CameraTag                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          BlendTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::TransitionCamera(const struct FName& CameraTag, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera");

	struct
	{
		struct FName                   CameraTag;
		float                          BlendTime;
	} params;

	params.CameraTag = CameraTag;
	params.BlendTime = BlendTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// bool                           Disable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::ToggleDisablePartyLobbyCharacters(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters");

	struct
	{
		bool                           Disable;
	} params;

	params.Disable = Disable;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.TestSetStoreRotationOverride
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 DateTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::TestSetStoreRotationOverride(const struct FString& DateTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TestSetStoreRotationOverride");

	struct
	{
		struct FString                 DateTime;
	} params;

	params.DateTime = DateTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            PlayerXp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            RankedXp                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            RogueXp                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReputationEarned               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            PlacementMatchNum              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            BattlePassXp                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::TestPostMatchLobby(int PlayerXp, int RankedXp, int RogueXp, int ReputationEarned, int PlacementMatchNum, int BattlePassXp)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby");

	struct
	{
		int                            PlayerXp;
		int                            RankedXp;
		int                            RogueXp;
		int                            ReputationEarned;
		int                            PlacementMatchNum;
		int                            BattlePassXp;
	} params;

	params.PlayerXp = PlayerXp;
	params.RankedXp = RankedXp;
	params.RogueXp = RogueXp;
	params.ReputationEarned = ReputationEarned;
	params.PlacementMatchNum = PlacementMatchNum;
	params.BattlePassXp = BattlePassXp;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.TestEventGrandPrizeAcquisition
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::TestEventGrandPrizeAcquisition()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TestEventGrandPrizeAcquisition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.TestBattlePassAcquisition
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            StartTier                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EndTier                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::TestBattlePassAcquisition(int StartTier, int EndTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TestBattlePassAcquisition");

	struct
	{
		int                            StartTier;
		int                            EndTier;
	} params;

	params.StartTier = StartTier;
	params.EndTier = EndTier;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// ESocialMessageType             MessageType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::ShowPopupConfirmation(const struct FText& Message, ESocialMessageType MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation");

	struct
	{
		struct FText                   Message;
		ESocialMessageType             MessageType;
	} params;

	params.Message = Message;
	params.MessageType = MessageType;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// ELobbyCharacterAnimState       TargetState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::SetNewLobbyAnimState(ELobbyCharacterAnimState TargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState");

	struct
	{
		ELobbyCharacterAnimState       TargetState;
	} params;

	params.TargetState = TargetState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TArray<ELobbyCharacterIndex>   IndicesToReset                 (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::ResetLobbyCharactersByIndex(TArray<ELobbyCharacterIndex> IndicesToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex");

	struct
	{
		TArray<ELobbyCharacterIndex>   IndicesToReset;
	} params;

	params.IndicesToReset = IndicesToReset;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::ResetLobbyCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   LvlSeqTag                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::PlayLoopingLevelSequence(const struct FName& LvlSeqTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence");

	struct
	{
		struct FName                   LvlSeqTag;
	} params;

	params.LvlSeqTag = LvlSeqTag;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// int                            GroupId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    VendorIds                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::OnStoreVendorsLoaded(int GroupId, TArray<int> VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded");

	struct
	{
		int                            GroupId;
		TArray<int>                    VendorIds;
	} params;

	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurreny
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_StorePurchaseRequest* PurchaseRequest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::OnNotEnoughCurreny(class UPUMG_StorePurchaseRequest* PurchaseRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurreny");

	struct
	{
		class UPUMG_StorePurchaseRequest* PurchaseRequest;
	} params;

	params.PurchaseRequest = PurchaseRequest;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NewRoute                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   PreviousRoute                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::NotifyViewStateChange(const struct FName& NewRoute, const struct FName& PreviousRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange");

	struct
	{
		struct FName                   NewRoute;
		struct FName                   PreviousRoute;
	} params;

	params.NewRoute = NewRoute;
	params.PreviousRoute = PreviousRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_PlayerInfo*        PlayerData                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSLobbyHUDNew::IsPlayerMuted(class UPUMG_PlayerInfo* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted");

	struct
	{
		class UPUMG_PlayerInfo*        PlayerData;
		bool                           ReturnValue;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandleSpecificPartyIdDataUpdated(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMember                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandleSpecificPartyDataUpdated(const struct FPUMG_PartyMemberData& PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMember;
	} params;

	params.PartyMember = PartyMember;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMember                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandleSpecificPartyDataAdded(const struct FPUMG_PartyMemberData& PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMember;
	} params;

	params.PartyMember = PartyMember;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AKSLobbyHUDNew::HandleReturnFromBattleLevelSeqStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::HandlePlayerLoadoutsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMember                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            MemberIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember, int MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMember;
		int                            MemberIndex;
	} params;

	params.PartyMember = PartyMember;
	params.MemberIndex = MemberIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyEmoteMessageReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_PlayerInfo*        Sender                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UKSEmote> SoftEmotePtr                   (CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandlePartyEmoteMessageReceived(class UPUMG_PlayerInfo* Sender, TSoftObjectPtr<class UKSEmote> SoftEmotePtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePartyEmoteMessageReceived");

	struct
	{
		class UPUMG_PlayerInfo*        Sender;
		TSoftObjectPtr<class UKSEmote> SoftEmotePtr;
	} params;

	params.Sender = Sender;
	params.SoftEmotePtr = SoftEmotePtr;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::HandlePartyDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              MatchStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandleMatchStatusUpdated(EPUMG_MatchStatus MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated");

	struct
	{
		EPUMG_MatchStatus              MatchStatus;
	} params;

	params.MatchStatus = MatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::HandleLoginUserChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AKSLobbyHUDNew::HandleLoginStateChange(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange");

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AKSLobbyHUDNew::HandleExitToGameLevelSeqStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AKSLobbyHUDNew::HandleDenyPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AKSLobbyHUDNew::HandleAcceptPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerWhoDataFactory* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerWhoDataFactory* AKSLobbyHUDNew::GetPlayerWhoDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory");

	struct
	{
		class UKSPlayerWhoDataFactory* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerQueryDataFactory* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerQueryDataFactory* AKSLobbyHUDNew::GetPlayerQueryDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory");

	struct
	{
		class UKSPlayerQueryDataFactory* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSLobbyWidget*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSLobbyWidget* AKSLobbyHUDNew::GetLobbyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget");

	struct
	{
		class UKSLobbyWidget*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// ELobbyCharacterIndex           CharacterIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSLobbyCharacter*       LobbyCharacter                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSLobbyHUDNew::GetLobbyCharacterByPosition(ELobbyCharacterIndex CharacterIndex, class AKSLobbyCharacter** LobbyCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition");

	struct
	{
		ELobbyCharacterIndex           CharacterIndex;
		class AKSLobbyCharacter*       LobbyCharacter;
		bool                           ReturnValue;
	} params;

	params.CharacterIndex = CharacterIndex;

	UObject::ProcessEvent(fn, &params);

	if (LobbyCharacter != nullptr)
		*LobbyCharacter = params.LobbyCharacter;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSQueueDataFactory* AKSLobbyHUDNew::GetKSQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory");

	struct
	{
		class UKSQueueDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJsonDataFactory* AKSLobbyHUDNew::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory");

	struct
	{
		class UKSJsonDataFactory*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetJobSelectPreviewActorByPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ELobbyCharacterIndex           CharacterIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSJobSelectPreviewActor_Lobby* PreviewActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSLobbyHUDNew::GetJobSelectPreviewActorByPosition(ELobbyCharacterIndex CharacterIndex, class AKSJobSelectPreviewActor_Lobby** PreviewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetJobSelectPreviewActorByPosition");

	struct
	{
		ELobbyCharacterIndex           CharacterIndex;
		class AKSJobSelectPreviewActor_Lobby* PreviewActor;
		bool                           ReturnValue;
	} params;

	params.CharacterIndex = CharacterIndex;

	UObject::ProcessEvent(fn, &params);

	if (PreviewActor != nullptr)
		*PreviewActor = params.PreviewActor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSFriendDataFactory* AKSLobbyHUDNew::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory");

	struct
	{
		class UKSFriendDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSEMODataFactory*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSEMODataFactory* AKSLobbyHUDNew::GetEMODataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory");

	struct
	{
		class UKSEMODataFactory*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetDefaultPlayerAccountItem
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPlayerAccountSlot             ItemSlot                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSItem*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSItem* AKSLobbyHUDNew::GetDefaultPlayerAccountItem(EPlayerAccountSlot ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetDefaultPlayerAccountItem");

	struct
	{
		EPlayerAccountSlot             ItemSlot;
		class UKSItem*                 ReturnValue;
	} params;

	params.ItemSlot = ItemSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetCharacterIndexFromPartyIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// int                            PartyMemberIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ELobbyCharacterIndex           OutCharIndex                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AKSLobbyHUDNew::GetCharacterIndexFromPartyIndex(int PartyMemberIndex, ELobbyCharacterIndex* OutCharIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetCharacterIndexFromPartyIndex");

	struct
	{
		int                            PartyMemberIndex;
		ELobbyCharacterIndex           OutCharIndex;
		bool                           ReturnValue;
	} params;

	params.PartyMemberIndex = PartyMemberIndex;

	UObject::ProcessEvent(fn, &params);

	if (OutCharIndex != nullptr)
		*OutCharIndex = params.OutCharIndex;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.ForceMinuteTimerUpdate
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void AKSLobbyHUDNew::ForceMinuteTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ForceMinuteTimerUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AKSLobbyHUDNew::ForceEulaAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void AKSLobbyHUDNew::CreateInitialPlayerLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void AKSLobbyHUDNew::CheckForVoucherRedemption()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void AKSLobbyHUDNew::CheckForExistingPenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AKSLobbyHUDNew::CancelExitToGameLevelAnimStoppedHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyNameplateWidget.SetupRankedManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSLobbyNameplateWidget::SetupRankedManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyNameplateWidget.SetupRankedManager");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLobbyNameplateWidget.RefreshRankedData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSLobbyNameplateWidget::RefreshRankedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyNameplateWidget.RefreshRankedData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLoginInventoryCheck.CancelLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSLoginInventoryCheck::CancelLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginInventoryCheck.CancelLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLoginProcessRewards.ProcessAccountRewards
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSLoginProcessRewards::ProcessAccountRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginProcessRewards.ProcessAccountRewards");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTabValidator.IsValidTab
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTabValidator::IsValidTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTabValidator.IsValidTab");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginRewardsModal.UIX_AttemptClaimReward
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSLoginRewardsModal::UIX_AttemptClaimReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.UIX_AttemptClaimReward");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLoginRewardsModal.HandlePlayerChallengesReady
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSLoginRewardsModal::HandlePlayerChallengesReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.HandlePlayerChallengesReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSLoginRewardsModal.GrabLoginRewardsFromActivityInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FLoginRewardItem> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FLoginRewardItem> UKSLoginRewardsModal::GrabLoginRewardsFromActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.GrabLoginRewardsFromActivityInstance");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		TArray<struct FLoginRewardItem> ReturnValue;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginRewardsModal.GetNumberOfItemsToDisplay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSLoginRewardsModal::GetNumberOfItemsToDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.GetNumberOfItemsToDisplay");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardProgressCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSLoginRewardsModal::GetLoginRewardProgressCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardProgressCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FLoginRewardItem> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FLoginRewardItem> UKSLoginRewardsModal::GetLoginRewardItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.GetLoginRewardItems");

	struct
	{
		TArray<struct FLoginRewardItem> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginRewardsModal.GetLoginEventTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSLoginRewardsModal::GetLoginEventTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginRewardsModal.GetLoginEventTimeRemaining");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ELowAmmoState                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ELowAmmoState UKSLowAmmoAlertWidget::GetAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState");

	struct
	{
		ELowAmmoState                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ELowAmmoState                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ELowAmmoState UKSLowAmmoAlertWidget::CalcAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState");

	struct
	{
		ELowAmmoState                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSLowAmmoAlertWidget::AmmoStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMapIconWidgetPool.GetMapIconWidget
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSMapIconWidgetBase*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSMapIconWidgetBase* UKSMapIconWidgetPool::GetMapIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetPool.GetMapIconWidget");

	struct
	{
		class UKSMapIconWidgetBase*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetPool.AddMapIconWidget
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSMapIconWidgetBase*    MapIconWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMapIconWidgetPool::AddMapIconWidget(class UKSMapIconWidgetBase* MapIconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetPool.AddMapIconWidget");

	struct
	{
		class UKSMapIconWidgetBase*    MapIconWidget;
	} params;

	params.MapIconWidget = MapIconWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 TargetLocation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          AnchorHeight                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MarginX                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MarginY                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ScreenLocation                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMarkerDisplayBase::GetScreenPositionForMarker(const struct FVector& TargetLocation, float AnchorHeight, float MarginX, float MarginY, struct FVector2D* ScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker");

	struct
	{
		struct FVector                 TargetLocation;
		float                          AnchorHeight;
		float                          MarginX;
		float                          MarginY;
		struct FVector2D               ScreenLocation;
		bool                           ReturnValue;
	} params;

	params.TargetLocation = TargetLocation;
	params.AnchorHeight = AnchorHeight;
	params.MarginX = MarginX;
	params.MarginY = MarginY;

	UObject::ProcessEvent(fn, &params);

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         GetIsSelected                  (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Select                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ShouldShowPlayer               (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Close                          (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UKSDataIndividualInviteSetup* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSDataIndividualInviteSetup* UKSDataIndividualInviteSetup::SetCallbacks(const struct FScriptDelegate& GetIsSelected, const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Close)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks");

	struct
	{
		struct FScriptDelegate         GetIsSelected;
		struct FScriptDelegate         Select;
		struct FScriptDelegate         ShouldShowPlayer;
		struct FScriptDelegate         Close;
		class UKSDataIndividualInviteSetup* ReturnValue;
	} params;

	params.GetIsSelected = GetIsSelected;
	params.Select = Select;
	params.ShouldShowPlayer = ShouldShowPlayer;
	params.Close = Close;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInviteSelectResult          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EKSInviteSelectResult UKSDataIndividualInviteSetup::KSInviteSelect__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		EKSInviteSelectResult          ReturnValue;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSDataIndividualInviteSetup::KSInviteGetIsSelected__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		bool                           ReturnValue;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Select                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         ShouldShowPlayer               (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         Cancel                         (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UKSDataBatchInviteSetup* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSDataBatchInviteSetup* UKSDataBatchInviteSetup::SetCallbacks(const struct FScriptDelegate& Select, const struct FScriptDelegate& ShouldShowPlayer, const struct FScriptDelegate& Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks");

	struct
	{
		struct FScriptDelegate         Select;
		struct FScriptDelegate         ShouldShowPlayer;
		struct FScriptDelegate         Cancel;
		class UKSDataBatchInviteSetup* ReturnValue;
	} params;

	params.Select = Select;
	params.ShouldShowPlayer = ShouldShowPlayer;
	params.Cancel = Cancel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TArray<class UKSPlayerInfo*>   playerinfo                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSDataBatchInviteSetup::KSBatchSelect__DelegateSignature(TArray<class UKSPlayerInfo*> playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature");

	struct
	{
		TArray<class UKSPlayerInfo*>   playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMassInviteModal.UpdateRouteData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMassInviteModal::UpdateRouteData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.UpdateRouteData");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.SelectPlayer
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerInfo*           Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInviteSelectResult          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EKSInviteSelectResult UKSMassInviteModal::SelectPlayer(class UKSPlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.SelectPlayer");

	struct
	{
		class UKSPlayerInfo*           Player;
		EKSInviteSelectResult          ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.RequestFriends
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnReceivePlayers               (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSMassInviteModal::RequestFriends(const struct FScriptDelegate& OnReceivePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.RequestFriends");

	struct
	{
		struct FScriptDelegate         OnReceivePlayers;
	} params;

	params.OnReceivePlayers = OnReceivePlayers;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<class UKSPlayerInfo*>   Players                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMassInviteModal::KSInviteReceivePlayers__DelegateSignature(TArray<class UKSPlayerInfo*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature");

	struct
	{
		TArray<class UKSPlayerInfo*>   Players;
	} params;

	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMassInviteModal.GetShouldSelect
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerInfo*           Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMassInviteModal::GetShouldSelect(class UKSPlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.GetShouldSelect");

	struct
	{
		class UKSPlayerInfo*           Player;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.CloseScreen
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EKSInviteCloseAction           CloseAction                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMassInviteModal::CloseScreen(EKSInviteCloseAction CloseAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.CloseScreen");

	struct
	{
		EKSInviteCloseAction           CloseAction;
	} params;

	params.CloseAction = CloseAction;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.ShowInvitation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClientQueueInfo        QueueInfo                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSMatchInvitationModal::ShowInvitation(class UKSPlayerInfo* playerinfo, const struct FClientQueueInfo& QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.ShowInvitation");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		struct FClientQueueInfo        QueueInfo;
	} params;

	params.playerinfo = playerinfo;
	params.QueueInfo = QueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.ShowError
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSMatchInvitationModal::ShowError(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.ShowError");

	struct
	{
		struct FText                   ErrorMessage;
	} params;

	params.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSMatchInvitationModal::OnInvitationExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMatchInvitationModal::HandleReceivePlayerName(class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSQueueDataFactory* UKSMatchInvitationModal::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory");

	struct
	{
		class UKSQueueDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMatchInvitationModal::GetInvitationTotalTimeToExpire()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSMatchInvitationModal::GetInvitationTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSMatchInvitationModal::DeclineInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.CloseScreen
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSMatchInvitationModal::CloseScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.CloseScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            MapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMatchInvitationModal::AcceptInvite(int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite");

	struct
	{
		int                            MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class AKSGameState_RoundGame*  pGameState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::UpdateRoundBaseScore(class AKSGameState_RoundGame* pGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore");

	struct
	{
		class AKSGameState_RoundGame*  pGameState;
	} params;

	params.pGameState = pGameState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchResult.UpdateResultStatus
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EGameResult                    Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   Status                         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::UpdateResultStatus(EGameResult Result, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.UpdateResultStatus");

	struct
	{
		EGameResult                    Result;
		struct FText                   Status;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);

	if (Status != nullptr)
		*Status = params.Status;
}


// Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EGameResult                    Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::ProcessResultAnnoucement(EGameResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement");

	struct
	{
		EGameResult                    Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchResult.HandleResultReceived
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement ResultAnnoucement              (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::HandleResultReceived(const struct FRoundResultAnnoucement& ResultAnnoucement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.HandleResultReceived");

	struct
	{
		struct FRoundResultAnnoucement ResultAnnoucement;
	} params;

	params.ResultAnnoucement = ResultAnnoucement;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchResult.HandleEndOfMatch
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSMatchResult::HandleEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.HandleEndOfMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMatchResult.GetTeamNames
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   pTeamName                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   pOpposingTeamName              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.GetTeamNames");

	struct
	{
		struct FText                   pTeamName;
		struct FText                   pOpposingTeamName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (pTeamName != nullptr)
		*pTeamName = params.pTeamName;
	if (pOpposingTeamName != nullptr)
		*pOpposingTeamName = params.pOpposingTeamName;
}


// Function KillstreakUINew.KSMatchResult.GetSurrenderText
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   pSurrenderText                 (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UKSMatchResult::GetSurrenderText(struct FText* pSurrenderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.GetSurrenderText");

	struct
	{
		struct FText                   pSurrenderText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (pSurrenderText != nullptr)
		*pSurrenderText = params.pSurrenderText;
}


// Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSMediaPlayerWidget::UIX_SkipEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanSkipEntry                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMediaPlayerWidget::OnShouldShowPromptChanged(bool bCanSkipEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged");

	struct
	{
		bool                           bCanSkipEntry;
	} params;

	params.bCanSkipEntry = bCanSkipEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformMediaSource*    PlatformMediaSource            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           PlayEvent                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAkAudioEvent*           StopEvent                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMediaPlayerWidget::OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback");

	struct
	{
		class UPlatformMediaSource*    PlatformMediaSource;
		class UAkAudioEvent*           PlayEvent;
		class UAkAudioEvent*           StopEvent;
	} params;

	params.PlatformMediaSource = PlatformMediaSource;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingPlaylist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSMediaPlayerWidget::OnEndLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingPlaylist");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingPlaylist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSMediaPlayerWidget::OnBeginLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingPlaylist");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSMediaPlayerWidget::IsCurrentEntrySkippable()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* MapMaterial                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NormalizedX                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NormalizedY                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Rotation                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSMinimapWidgetBase::UpdateMapMaterialTransform(class UMaterialInstanceDynamic* MapMaterial, float NormalizedX, float NormalizedY, float Rotation, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform");

	struct
	{
		class UMaterialInstanceDynamic* MapMaterial;
		float                          NormalizedX;
		float                          NormalizedY;
		float                          Rotation;
		float                          Scale;
	} params;

	params.MapMaterial = MapMaterial;
	params.NormalizedX = NormalizedX;
	params.NormalizedY = NormalizedY;
	params.Rotation = Rotation;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.ViewModelByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InTargetItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UDataTable*              InDataTable                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::ViewModelByName(class UObject* WorldContextObject, const struct FName& InTargetItem, class UDataTable* InDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModelByName");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InTargetItem;
		class UDataTable*              InDataTable;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InTargetItem = InTargetItem;
	params.InDataTable = InDataTable;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.ViewModelAttachment
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSWeaponAttachment*     InAttachment                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::ViewModelAttachment(class UObject* WorldContextObject, class UKSWeaponAttachment* InAttachment, const struct FName& InSpawnOnActorName, unsigned char Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModelAttachment");

	struct
	{
		class UObject*                 WorldContextObject;
		class UKSWeaponAttachment*     InAttachment;
		struct FName                   InSpawnOnActorName;
		unsigned char                  Slot;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InAttachment = InAttachment;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.Slot = Slot;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.ViewModel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSItem*                 InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponStateNew                DefaultWeaponState             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InScaleToFitTargetActor        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                InDefaultRotation              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           InBindControllerToSpawner      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::ViewModel(class UObject* WorldContextObject, class UKSItem* InItem, const struct FName& InSpawnOnActorName, EWeaponStateNew DefaultWeaponState, bool InScaleToFitTargetActor, const struct FRotator& InDefaultRotation, bool InBindControllerToSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModel");

	struct
	{
		class UObject*                 WorldContextObject;
		class UKSItem*                 InItem;
		struct FName                   InSpawnOnActorName;
		EWeaponStateNew                DefaultWeaponState;
		bool                           InScaleToFitTargetActor;
		struct FRotator                InDefaultRotation;
		bool                           InBindControllerToSpawner;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InItem = InItem;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.DefaultWeaponState = DefaultWeaponState;
	params.InScaleToFitTargetActor = InScaleToFitTargetActor;
	params.InDefaultRotation = InDefaultRotation;
	params.InBindControllerToSpawner = InBindControllerToSpawner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnActorName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::UnbindControllerFromSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnActorName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnActorName = InSpawnActorName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::UnbindAllControllersFromSpawners(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.SetAnimation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequence*           InAnim                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bLooping                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::SetAnimation(class UObject* WorldContextObject, class UAnimSequence* InAnim, const struct FName& InSpawnOnActorName, bool bLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.SetAnimation");

	struct
	{
		class UObject*                 WorldContextObject;
		class UAnimSequence*           InAnim;
		struct FName                   InSpawnOnActorName;
		bool                           bLooping;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InAnim = InAnim;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.bLooping = bLooping;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.HideModelAttachment
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::HideModelAttachment(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, unsigned char Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.HideModelAttachment");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnOnActorName;
		unsigned char                  Slot;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.Slot = Slot;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.ClearModelAttachments
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::ClearModelAttachments(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ClearModelAttachments");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnOnActorName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.ClearModel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::ClearModel(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ClearModel");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnOnActorName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnOnActorName             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         InEventCallback                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSModelViewer::BindDelForWeaponModelSet(class UObject* WorldContextObject, const struct FName& InSpawnOnActorName, const struct FScriptDelegate& InEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnOnActorName;
		struct FScriptDelegate         InEventCallback;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.InEventCallback = InEventCallback;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModelViewer.BindControllerToSpawner
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   InSpawnActorName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModelViewer::BindControllerToSpawner(class UObject* WorldContextObject, const struct FName& InSpawnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.BindControllerToSpawner");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FName                   InSpawnActorName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InSpawnActorName = InSpawnActorName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UKSModInst_DetectEnemy*  DetectEnemyModInst             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsDetectingEnemy              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSModWidget_DetectEnemy::OnDetectChanged(class UKSModInst_DetectEnemy* DetectEnemyModInst, bool bIsDetectingEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged");

	struct
	{
		class UKSModInst_DetectEnemy*  DetectEnemyModInst;
		bool                           bIsDetectingEnemy;
	} params;

	params.DetectEnemyModInst = DetectEnemyModInst;
	params.bIsDetectingEnemy = bIsDetectingEnemy;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UHorizontalBox*          ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UHorizontalBox* UKSModWidget_DetectEnemy::GetIconBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox");

	struct
	{
		class UHorizontalBox*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance*    InInstance                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSModWidgetInterface::RemoveModInstance(class UKSPlayerModInstance* InInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance");

	struct
	{
		class UKSPlayerModInstance*    InInstance;
		bool                           ReturnValue;
	} params;

	params.InInstance = InInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModWidgetInterface.AddModInstance
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance*    InInstance                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSModWidgetInterface::AddModInstance(class UKSPlayerModInstance* InInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidgetInterface.AddModInstance");

	struct
	{
		class UKSPlayerModInstance*    InInstance;
		bool                           ReturnValue;
	} params;

	params.InInstance = InInstance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNavTabWidget.UnselectNavTab
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSNavTabWidget::UnselectNavTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.UnselectNavTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNavTabWidget.SetSelected
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewSelected                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSNavTabWidget::SetSelected(bool bNewSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.SetSelected");

	struct
	{
		bool                           bNewSelected;
	} params;

	params.bNewSelected = bNewSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNavTabWidget.SetDisabled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewDisabled                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSNavTabWidget::SetDisabled(bool bNewDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.SetDisabled");

	struct
	{
		bool                           bNewDisabled;
	} params;

	params.bNewDisabled = bNewDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNavTabWidget.SelectNavTab
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSNavTabWidget::SelectNavTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.SelectNavTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNavTabWidget.IsSelected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSNavTabWidget::IsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.IsSelected");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNavTabWidget.IsDisabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSNavTabWidget::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNavTabWidget.IsDisabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNewsRotatorWidget.ShouldShowPanel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSNewsRotatorData*      Panel                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSNewsRotatorWidget::ShouldShowPanel(class UKSNewsRotatorData* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.ShouldShowPanel");

	struct
	{
		class UKSNewsRotatorData*      Panel;
		bool                           ReturnValue;
	} params;

	params.Panel = Panel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSNewsRotatorWidget::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSNewsRotatorData*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSNewsRotatorData*> UKSNewsRotatorWidget::GetPanelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData");

	struct
	{
		TArray<class UKSNewsRotatorData*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJsonDataFactory* UKSNewsRotatorWidget::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory");

	struct
	{
		class UKSJsonDataFactory*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSNPEDataFactory::UIX_ClaimTutorialActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimRegionSelectedActivity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSNPEDataFactory::UIX_ClaimRegionSelectedActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimRegionSelectedActivity");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNPEDataFactory.SkipTutorial
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSNPEDataFactory::SkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.SkipTutorial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNPEDataFactory.ShouldForceTutorial
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSNPEDataFactory::ShouldForceTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.ShouldForceTutorial");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.QueueTutorial
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSNPEDataFactory::QueueTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.QueueTutorial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSNPEDataFactory.HasClaimedActivity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            ActivityTag                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSNPEDataFactory::HasClaimedActivity(const struct FGameplayTag& ActivityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.HasClaimedActivity");

	struct
	{
		struct FGameplayTag            ActivityTag;
		bool                           ReturnValue;
	} params;

	params.ActivityTag = ActivityTag;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSQueueDataFactory* UKSNPEDataFactory::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory");

	struct
	{
		class UKSQueueDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.ClaimActivity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FGameplayTag            ActivityTag                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSNPEDataFactory::ClaimActivity(const struct FGameplayTag& ActivityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.ClaimActivity");

	struct
	{
		struct FGameplayTag            ActivityTag;
	} params;

	params.ActivityTag = ActivityTag;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToView
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSOverlayTabHubBase::SetFocusToView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToTabs
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSOverlayTabHubBase::SetFocusToTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.SetFocusToTabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.SelectViewAndShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSOverlayTabHubBase::SelectViewAndShow(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.SelectViewAndShow");

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.OnViewFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSOverlayTabHubBase::OnViewFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.OnViewFocused");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.OnTabsFocused
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSOverlayTabHubBase::OnTabsFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.OnTabsFocused");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.GetLandingView
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UKSOverlayTabHubBase::GetLandingView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.GetLandingView");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSOverlayTabHubBase.GetCurrentViewWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_Widget*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_Widget* UKSOverlayTabHubBase::GetCurrentViewWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.GetCurrentViewWidget");

	struct
	{
		class UPUMG_Widget*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSOverlayTabHubBase.GetAllViews
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_Widget*>    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_Widget*> UKSOverlayTabHubBase::GetAllViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.GetAllViews");

	struct
	{
		TArray<class UPUMG_Widget*>    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSOverlayTabHubBase.CreateAllViews
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSOverlayTabHubBase::CreateAllViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.CreateAllViews");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.ClearAllViews
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSOverlayTabHubBase::ClearAllViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.ClearAllViews");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.ChangeView
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ViewName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSOverlayTabHubBase::ChangeView(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.ChangeView");

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSOverlayTabHubBase.AddView
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FOverlayTabViewRow      ViewInfo                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSOverlayTabHubBase::AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSOverlayTabHubBase.AddView");

	struct
	{
		struct FName                   ViewName;
		struct FOverlayTabViewRow      ViewInfo;
	} params;

	params.ViewName = ViewName;
	params.ViewInfo = ViewInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyDataFactory.SetSelectedQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPartyDataFactory::SetSelectedQueueId(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.SetSelectedQueueId");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyDataFactory.PlayEmoteInParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSEmote*                Emote                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPartyDataFactory::PlayEmoteInParty(class UKSEmote* Emote)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.PlayEmoteInParty");

	struct
	{
		class UKSEmote*                Emote;
	} params;

	params.Emote = Emote;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyDataFactory.GetSelectedQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPartyDataFactory::GetSelectedQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.GetSelectedQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyDataFactory.GetPartyMinimumLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPartyDataFactory::GetPartyMinimumLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.GetPartyMinimumLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyDataFactory.GetHighestDeserterPenaltySeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPartyDataFactory::GetHighestDeserterPenaltySeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.GetHighestDeserterPenaltySeconds");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyDataFactory.CanPartyQueueForRanked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 RankedSeasonKey                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPartyDataFactory::CanPartyQueueForRanked(const struct FString& RankedSeasonKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.CanPartyQueueForRanked");

	struct
	{
		struct FString                 RankedSeasonKey;
		bool                           ReturnValue;
	} params;

	params.RankedSeasonKey = RankedSeasonKey;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InvitationError                (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPartyDataFactory::BroadcastPartyInvitationError(const struct FText& InvitationError)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError");

	struct
	{
		struct FText                   InvitationError;
	} params;

	params.InvitationError = InvitationError;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSPartyManagerWidgetBase::RefreshFromPartyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByName
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateByName(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByName");

	struct
	{
		struct FText                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateByInfo(class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateById
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateById(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateById");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   MemberData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPartyManagerWidgetBase::HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& MemberData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated");

	struct
	{
		struct FPUMG_PartyMemberData   MemberData;
	} params;

	params.MemberData = MemberData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* UKSPartyManagerWidgetBase::GetSuggestedInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite");

	struct
	{
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPartyDataFactory* UKSPartyManagerWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory");

	struct
	{
		class UKSPartyDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.GetCachedDisplayedPartyMembers
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_PartyMemberData> UKSPartyManagerWidgetBase::GetCachedDisplayedPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.GetCachedDisplayedPartyMembers");

	struct
	{
		TArray<struct FPUMG_PartyMemberData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> PartyMembers                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPartyManagerWidgetBase::ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData");

	struct
	{
		TArray<struct FPUMG_PartyMemberData> PartyMembers;
	} params;

	params.PartyMembers = PartyMembers;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyEmptyPartyData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSPartyManagerWidgetBase::ApplyEmptyPartyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyEmptyPartyData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           bLerping                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeBase::SetCursorLerping(bool bLerping)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping");

	struct
	{
		bool                           bLerping;
	} params;

	params.bLerping = bLerping;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeBase.RefreshEdge
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSPerkTreeEdgeBase*     Edge                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            column                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Row                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap                       (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeBase::RefreshEdge(class UKSPerkTreeEdgeBase* Edge, int column, int Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.RefreshEdge");

	struct
	{
		class UKSPerkTreeEdgeBase*     Edge;
		int                            column;
		int                            Row;
		TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> NodesMap;
	} params;

	params.Edge = Edge;
	params.column = column;
	params.Row = Row;
	params.NodesMap = NodesMap;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeBase.InitializeNodes
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> UKSPerkTreeBase::InitializeNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.InitializeNodes");

	struct
	{
		TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSPerkTreeNodeBase*     SelectedNode                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCustomLoadoutItem      SelectedPerk                   (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bAlreadyEquipped               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeBase::HandleTreeNodeSelected(class UKSPerkTreeNodeBase* SelectedNode, const struct FCustomLoadoutItem& SelectedPerk, bool bAlreadyEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected");

	struct
	{
		class UKSPerkTreeNodeBase*     SelectedNode;
		struct FCustomLoadoutItem      SelectedPerk;
		bool                           bAlreadyEquipped;
	} params;

	params.SelectedNode = SelectedNode;
	params.SelectedPerk = SelectedPerk;
	params.bAlreadyEquipped = bAlreadyEquipped;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSPerkTreeNodeBase*     HoveredNode                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FCustomLoadoutItem      HoveredPerk                    (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeBase::HandleTreeNodeHovered(class UKSPerkTreeNodeBase* HoveredNode, const struct FCustomLoadoutItem& HoveredPerk)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered");

	struct
	{
		class UKSPerkTreeNodeBase*     HoveredNode;
		struct FCustomLoadoutItem      HoveredPerk;
	} params;

	params.HoveredNode = HoveredNode;
	params.HoveredPerk = HoveredPerk;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidget* UKSPerkTreeBase::GetHoverCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSPerkTreeNodeBase*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPerkTreeNodeBase* UKSPerkTreeBase::GetDefaultFocusNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode");

	struct
	{
		class UKSPerkTreeNodeBase*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.BindNode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSPerkTreeNodeBase*     TreeNode                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeBase::BindNode(class UKSPerkTreeNodeBase* TreeNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.BindNode");

	struct
	{
		class UKSPerkTreeNodeBase*     TreeNode;
	} params;

	params.TreeNode = TreeNode;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSPerkTreeEdgeInfo     EdgeInfo                       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeEdgeBase::SetViewByState(const struct FKSPerkTreeEdgeInfo& EdgeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState");

	struct
	{
		struct FKSPerkTreeEdgeInfo     EdgeInfo;
	} params;

	params.EdgeInfo = EdgeInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPerkTreeNodeState             NewNodeState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPerkTreeNodeBase::SetNodeState(EPerkTreeNodeState NewNodeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState");

	struct
	{
		EPerkTreeNodeState             NewNodeState;
	} params;

	params.NewNodeState = NewNodeState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSPerkTreeNodeBase::RefreshView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EPerkTreeNodeState             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPerkTreeNodeState UKSPerkTreeNodeBase::GetNodeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState");

	struct
	{
		EPerkTreeNodeState             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewWidgetClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSWeapon*               NewWeapon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerAmmoLoaderWidget::SetActiveAmmoWidget(class UClass* NewWidgetClass, class AKSWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget");

	struct
	{
		class UClass*                  NewWidgetClass;
		class AKSWeapon*               NewWeapon;
	} params;

	params.NewWidgetClass = NewWidgetClass;
	params.NewWeapon = NewWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSAmmoWidget*           ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSAmmoWidget* UKSPlayerAmmoLoaderWidget::GetActiveAmmoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget");

	struct
	{
		class UKSAmmoWidget*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSPlayerAmmoLoaderWidget::ClearActiveAmmoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetSortedRecentlyProgressedData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FPlayerAwardsPanelData> AwardData                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPlayerAwardsPanelData> RecentlyProgressedData         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerAwardsPanelWidget::GetSortedRecentlyProgressedData(TArray<struct FPlayerAwardsPanelData> AwardData, TArray<struct FPlayerAwardsPanelData>* RecentlyProgressedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetSortedRecentlyProgressedData");

	struct
	{
		TArray<struct FPlayerAwardsPanelData> AwardData;
		TArray<struct FPlayerAwardsPanelData> RecentlyProgressedData;
	} params;

	params.AwardData = AwardData;

	UObject::ProcessEvent(fn, &params);

	if (RecentlyProgressedData != nullptr)
		*RecentlyProgressedData = params.RecentlyProgressedData;
}


// Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetActivityAwardData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FPlayerAwardsPanelData> AwardData                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerAwardsPanelWidget::GetActivityAwardData(TArray<struct FPlayerAwardsPanelData>* AwardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAwardsPanelWidget.GetActivityAwardData");

	struct
	{
		TArray<struct FPlayerAwardsPanelData> AwardData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AwardData != nullptr)
		*AwardData = params.AwardData;
}


// Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSPlayerOnlineStatus          PlayerStatus                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPortalFriend                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPending                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerCardModuleBase::View_SetPlayer(class UPUMG_PlayerInfo* playerinfo, EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
		EKSPlayerOnlineStatus          PlayerStatus;
		bool                           IsPortalFriend;
		bool                           IsPending;
	} params;

	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSPlayerOnlineStatus          PlayerStatus                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPortalFriend                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsPending                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerCardModuleBase::OnPlayerUpdate(class UPUMG_PlayerInfo* playerinfo, EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
		EKSPlayerOnlineStatus          PlayerStatus;
		bool                           IsPortalFriend;
		bool                           IsPending;
	} params;

	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerCardModuleBase::HandlePlayerDataUpdated(class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerCosmeticWidget.GetItemsForSlot
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EPlayerAccountSlot             SlotType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UKSItem>> CosmeticItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerCosmeticWidget::GetItemsForSlot(EPlayerAccountSlot SlotType, TArray<TSoftObjectPtr<class UKSItem>>* CosmeticItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCosmeticWidget.GetItemsForSlot");

	struct
	{
		EPlayerAccountSlot             SlotType;
		TArray<TSoftObjectPtr<class UKSItem>> CosmeticItems;
	} params;

	params.SlotType = SlotType;

	UObject::ProcessEvent(fn, &params);

	if (CosmeticItems != nullptr)
		*CosmeticItems = params.CosmeticItems;
}


// Function KillstreakUINew.KSPlayerDataFactory.ShouldDisplayRankedLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPlayerDataFactory::ShouldDisplayRankedLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.ShouldDisplayRankedLevel");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankIncremented
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerDataFactory::HandlePlayerRankIncremented(class UKSActivityInstance* ActivityInstance, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankIncremented");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		int                            Count;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     Activity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Tier                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerDataFactory::HandlePlayerRankChanged(class UKSActivityInstance* Activity, int Tier, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankChanged");

	struct
	{
		class UKSActivityInstance*     Activity;
		int                            Tier;
		int                            Count;
	} params;

	params.Activity = Activity;
	params.Tier = Tier;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerDataFactory::HandlePlayerLevelIncremented(class UKSActivityInstance* ActivityInstance, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		int                            Count;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     Activity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Tier                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Count                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerDataFactory::HandlePlayerLevelChanged(class UKSActivityInstance* Activity, int Tier, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged");

	struct
	{
		class UKSActivityInstance*     Activity;
		int                            Tier;
		int                            Count;
	} params;

	params.Activity = Activity;
	params.Tier = Tier;
	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerDataFactory.GetRankedLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPlayerDataFactory::GetRankedLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetRankedLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevelPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSPlayerDataFactory::GetPlayerLevelPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevelPercent");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPlayerDataFactory::GetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPlayerDataFactory::GetPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyItemByItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            CurrencyItemId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSCurrency*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSCurrency* UKSPlayerDataFactory::GetCurrencyItemByItemId(int CurrencyItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyItemByItemId");

	struct
	{
		int                            CurrencyItemId;
		class UKSCurrency*             ReturnValue;
	} params;

	params.CurrencyItemId = CurrencyItemId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyCountByItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            CurrencyItemId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSPlayerDataFactory::GetCurrencyCountByItemId(int CurrencyItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetCurrencyCountByItemId");

	struct
	{
		int                            CurrencyItemId;
		int                            ReturnValue;
	} params;

	params.CurrencyItemId = CurrencyItemId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PercentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthSegmentBase::View_SetResidualValue(float PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue");

	struct
	{
		float                          PercentValue;
	} params;

	params.PercentValue = PercentValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthSegmentBase::View_SetResidualColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          PercentValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bCanTriggerPulse               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthSegmentBase::View_SetMainValue(float PercentValue, bool bCanTriggerPulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue");

	struct
	{
		float                          PercentValue;
		bool                           bCanTriggerPulse;
	} params;

	params.PercentValue = PercentValue;
	params.bCanTriggerPulse = bCanTriggerPulse;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthSegmentBase::View_SetMainColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSPlayerHealthSegmentBase::View_PlayEmptiedPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PeakColor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            BaseColor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthSegmentBase::View_PlayDamagePulse(const struct FLinearColor& PeakColor, const struct FLinearColor& BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse");

	struct
	{
		struct FLinearColor            PeakColor;
		struct FLinearColor            BaseColor;
	} params;

	params.PeakColor = PeakColor;
	params.BaseColor = BaseColor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          ResidualPercent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetResidualPercent(float ResidualPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent");

	struct
	{
		float                          ResidualPercent;
	} params;

	params.ResidualPercent = ResidualPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHealing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetResidualMode(bool IsHealing)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode");

	struct
	{
		bool                           IsHealing;
	} params;

	params.IsHealing = IsHealing;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          ResidualAlpha                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetResidualAlpha(float ResidualAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha");

	struct
	{
		float                          ResidualAlpha;
	} params;

	params.ResidualAlpha = ResidualAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HealthValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OverhealValue                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetHealthTextValue(float HealthValue, float OverhealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue");

	struct
	{
		float                          HealthValue;
		float                          OverhealValue;
	} params;

	params.HealthValue = HealthValue;
	params.OverhealValue = OverhealValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetHealthPercent(float HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent");

	struct
	{
		float                          HealthPercent;
	} params;

	params.HealthPercent = HealthPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDowned                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsOverhealed                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::View_SetHealthMode(bool IsDowned, bool IsOverhealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode");

	struct
	{
		bool                           IsDowned;
		bool                           IsOverhealed;
	} params;

	params.IsDowned = IsDowned;
	params.IsOverhealed = IsOverhealed;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSPlayerHealthWidgetBase::View_PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSPlayerHealthWidgetBase::View_OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              Job                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::OnJobChanged(class UKSJobItem* Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged");

	struct
	{
		class UKSJobItem*              Job;
	} params;

	params.Job = Job;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSPlayerHealthWidgetBase::OnHealthMeterStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSPlayerHealthWidgetBase::OnHealthDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerState*          pKSPlayerState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerHealthWidgetBase::HandlePlayerDownedChanged(class AKSPlayerState* pKSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged");

	struct
	{
		class AKSPlayerState*          pKSPlayerState;
	} params;

	params.pKSPlayerState = pKSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerHealthWidgetBase::HandleJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerHealthWidgetBase::HandleDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.JobSelectionEntryDetails.IsSelf
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UJobSelectionEntryDetails::IsSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.IsSelf");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.IsOwned
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UJobSelectionEntryDetails::IsOwned()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.IsOwned");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.GetJobName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UJobSelectionEntryDetails::GetJobName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.GetJobName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJobItem*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJobItem* UJobSelectionEntryDetails::GetJobItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem");

	struct
	{
		class UKSJobItem*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EJobSelectionState             RequestedState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPlayerJobSelectWidgetBase::UIX_RequestJobSelect(class UJobSelectionEntryDetails* JobEntry, EJobSelectionState RequestedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		EJobSelectionState             RequestedState;
		bool                           ReturnValue;
	} params;

	params.JobEntry = JobEntry;
	params.RequestedState = RequestedState;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSPlayerJobSelectWidgetBase::OnResetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EPlayerSelectionState          NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::OnPlayerSelectionStateChanged(EPlayerSelectionState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged");

	struct
	{
		EPlayerSelectionState          NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails* JobEntry                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           EnemyTeam                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::OnJobEntryChanged(class UJobSelectionEntryDetails* JobEntry, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged");

	struct
	{
		class UJobSelectionEntryDetails* JobEntry;
		bool                           EnemyTeam;
	} params;

	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*> JobEntries                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           EnemyTeam                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady");

	struct
	{
		TArray<class UJobSelectionEntryDetails*> JobEntries;
		bool                           EnemyTeam;
	} params;

	params.JobEntries = JobEntries;
	params.EnemyTeam = EnemyTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleTeamAddedToMatch
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSTeamState*            NewTeam                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleTeamAddedToMatch(class AKSTeamState* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleTeamAddedToMatch");

	struct
	{
		class AKSTeamState*            NewTeam;
	} params;

	params.NewTeam = NewTeam;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleNewJobSelectionComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSJobSelectionComponent* NewJobSelectionComponent       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleNewJobSelectionComponent(class UKSJobSelectionComponent* NewJobSelectionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleNewJobSelectionComponent");

	struct
	{
		class UKSJobSelectionComponent* NewJobSelectionComponent;
	} params;

	params.NewJobSelectionComponent = NewJobSelectionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSJobSelectionManager*  JobSelectionManager            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobSelectionManagerReady(class UKSJobSelectionManager* JobSelectionManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady");

	struct
	{
		class UKSJobSelectionManager*  JobSelectionManager;
	} params;

	params.JobSelectionManager = JobSelectionManager;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerJobSelectWidgetBase::HandleJobSelectionInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FJobSelectionEntry      JobEntry                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryStateChangedForEnemies(const struct FJobSelectionEntry& JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies");

	struct
	{
		struct FJobSelectionEntry      JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FJobSelectionEntry      JobEntry                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryStateChanged(const struct FJobSelectionEntry& JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged");

	struct
	{
		struct FJobSelectionEntry      JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FJobSelectionEntry      JobEntry                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAddedForEnemies(const struct FJobSelectionEntry& JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies");

	struct
	{
		struct FJobSelectionEntry      JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FJobSelectionEntry      JobEntry                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAdded(const struct FJobSelectionEntry& JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded");

	struct
	{
		struct FJobSelectionEntry      JobEntry;
	} params;

	params.JobEntry = JobEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EJobSelectionState             RequestState                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAcknowledge(int ItemId, bool bSuccess, EJobSelectionState RequestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge");

	struct
	{
		int                            ItemId;
		bool                           bSuccess;
		EJobSelectionState             RequestState;
	} params;

	params.ItemId = ItemId;
	params.bSuccess = bSuccess;
	params.RequestState = RequestState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJobSelectionComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJobSelectionComponent* UKSPlayerJobSelectWidgetBase::GetJobSelectionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent");

	struct
	{
		class UKSJobSelectionComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            JobItemId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSJobItem*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJobItem* UKSPlayerJobSelectWidgetBase::GetJobItemById(int JobItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById");

	struct
	{
		int                            JobItemId;
		class UKSJobItem*              ReturnValue;
	} params;

	params.JobItemId = JobItemId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSTeamState*            Team                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerJobSelectWidgetBase::BindListenersForTeam(class AKSTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam");

	struct
	{
		class AKSTeamState*            Team;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   PlayerName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnReponse                      (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FKSPlayerQueryHandle    OutHandle                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPlayerQueryDataFactory::QueryPlayersByNameWithProfiles(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles");

	struct
	{
		struct FText                   PlayerName;
		struct FScriptDelegate         OnReponse;
		struct FKSPlayerQueryHandle    OutHandle;
		bool                           ReturnValue;
	} params;

	params.PlayerName = PlayerName;
	params.OnReponse = OnReponse;

	UObject::ProcessEvent(fn, &params);

	if (OutHandle != nullptr)
		*OutHandle = params.OutHandle;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   PlayerName                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnReponse                      (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FKSPlayerQueryHandle    OutHandle                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPlayerQueryDataFactory::QueryPlayersByName(const struct FText& PlayerName, const struct FScriptDelegate& OnReponse, struct FKSPlayerQueryHandle* OutHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName");

	struct
	{
		struct FText                   PlayerName;
		struct FScriptDelegate         OnReponse;
		struct FKSPlayerQueryHandle    OutHandle;
		bool                           ReturnValue;
	} params;

	params.PlayerName = PlayerName;
	params.OnReponse = OnReponse;

	UObject::ProcessEvent(fn, &params);

	if (OutHandle != nullptr)
		*OutHandle = params.OutHandle;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerQueryDataFactory::OnTimeoutCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FKSPlayerQueryHandle    InHandle                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSPlayerQueryDataFactory::GetQueriedName(const struct FKSPlayerQueryHandle& InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName");

	struct
	{
		struct FKSPlayerQueryHandle    InHandle;
		struct FText                   ReturnValue;
	} params;

	params.InHandle = InHandle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EKSPlayerQueryError            Error                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSPlayerQueryDataFactory::GetPlayerQueryErrorMessage(EKSPlayerQueryError Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage");

	struct
	{
		EKSPlayerQueryError            Error;
		struct FText                   ReturnValue;
	} params;

	params.Error = Error;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FKSPlayerQueryHandle    InHandle                       (CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSPlayerQueryDataFactory::CancelQuery(struct FKSPlayerQueryHandle* InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery");

	struct
	{
		struct FKSPlayerQueryHandle    InHandle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InHandle != nullptr)
		*InHandle = params.InHandle;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ForceUpdate                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::TriggerDisplayUpdate(bool ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate");

	struct
	{
		bool                           ForceUpdate;
	} params;

	params.ForceUpdate = ForceUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ChangedItem                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::ShopItemChanged(const struct FShopItem& ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged");

	struct
	{
		struct FShopItem               ChangedItem;
	} params;

	params.ChangedItem = ChangedItem;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOpen                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::SetShopState(bool IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState");

	struct
	{
		bool                           IsOpen;
	} params;

	params.IsOpen = IsOpen;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSPlayerShopWidgetBase::SetShopContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShowPrompt               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::SetPromptShow(bool ShouldShowPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow");

	struct
	{
		bool                           ShouldShowPrompt;
	} params;

	params.ShouldShowPrompt = ShouldShowPrompt;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            CashValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::SetCashValue(int CashValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue");

	struct
	{
		int                            CashValue;
	} params;

	params.CashValue = CashValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EShopItemType                  ShopItemType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::PurchaseAcknowledge(EShopItemType ShopItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge");

	struct
	{
		EShopItemType                  ShopItemType;
	} params;

	params.ShopItemType = ShopItemType;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerShopWidgetBase::HandleTeamsFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerShop*           KSPlayerShop                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandleShopOpened(class AKSPlayerShop* KSPlayerShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened");

	struct
	{
		class AKSPlayerShop*           KSPlayerShop;
	} params;

	params.KSPlayerShop = KSPlayerShop;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FShopItem               ChangedItem                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandleShopItemChanged(const struct FShopItem& ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged");

	struct
	{
		struct FShopItem               ChangedItem;
	} params;

	params.ChangedItem = ChangedItem;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerShop*           KSPlayerShop                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandleShopClosed(class AKSPlayerShop* KSPlayerShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed");

	struct
	{
		class AKSPlayerShop*           KSPlayerShop;
	} params;

	params.KSPlayerShop = KSPlayerShop;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSPlayerShop*           KSPlayerShop                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandleShopAvailabilityChanged(class AKSPlayerShop* KSPlayerShop)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged");

	struct
	{
		class AKSPlayerShop*           KSPlayerShop;
	} params;

	params.KSPlayerShop = KSPlayerShop;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EShopItemType                  ShopItemType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandlePurchaseAcknowledged(EShopItemType ShopItemType, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged");

	struct
	{
		EShopItemType                  ShopItemType;
		bool                           bSuccess;
	} params;

	params.ShopItemType = ShopItemType;
	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            Cash                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Delta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPlayerShopWidgetBase::HandleCashChanged(int Cash, int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged");

	struct
	{
		int                            Cash;
		int                            Delta;
	} params;

	params.Cash = Cash;
	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSPlayerShopWidgetBase::CheckForValidPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSPlayerWhoDataFactory::ClearSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::ViewSetCaptureProgress(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress");

	struct
	{
		float                          ProgressPercent;
	} params;

	params.ProgressPercent = ProgressPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          TimerSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TotalTimerSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::ViewApplyTimerValue(float TimerSeconds, float TotalTimerSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue");

	struct
	{
		float                          TimerSeconds;
		float                          TotalTimerSeconds;
	} params;

	params.TimerSeconds = TimerSeconds;
	params.TotalTimerSeconds = TotalTimerSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::ShouldHideObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FKSPointObjectiveMarkerViewState ViewState                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::SetView(const struct FKSPointObjectiveMarkerViewState& ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView");

	struct
	{
		struct FKSPointObjectiveMarkerViewState ViewState;
	} params;

	params.ViewState = ViewState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// TMap<EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::SetTeamColorsForState(TMap<EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState");

	struct
	{
		TMap<EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors;
	} params;

	params.StateColors = StateColors;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EPointObjectiveMarkerTeamState ObjectiveState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            StateColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::SetTeamColorForState(EPointObjectiveMarkerTeamState ObjectiveState, const struct FLinearColor& StateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState");

	struct
	{
		EPointObjectiveMarkerTeamState ObjectiveState;
		struct FLinearColor            StateColor;
		bool                           ReturnValue;
	} params;

	params.ObjectiveState = ObjectiveState;
	params.StateColor = StateColor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.OnControlTeamScoreUpdated
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::OnControlTeamScoreUpdated(class AKSTeamState* TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.OnControlTeamScoreUpdated");

	struct
	{
		class AKSTeamState*            TeamState;
	} params;

	params.TeamState = TeamState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInProgressState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInMatchTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInLockedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInCountdownState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInContestedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::IsInCapturedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   PreviousPhaseName              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::HandlePhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleObjectiveStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TScriptInterface<class UKSObjective> Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleObjectiveStateChanged");

	struct
	{
		TScriptInterface<class UKSObjective> Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleControlTeamScoreUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AKSTeamState*            TeamState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSControlPoint*         ControlPoint                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::HandleControlTeamScoreUpdated(class AKSTeamState* TeamState, class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleControlTeamScoreUpdated");

	struct
	{
		class AKSTeamState*            TeamState;
		class AKSControlPoint*         ControlPoint;
	} params;

	params.TeamState = TeamState;
	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::HandleBombStateChanged(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetTeamColorForState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            TeamColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::GetTeamColorForState(struct FLinearColor* TeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetTeamColorForState");

	struct
	{
		struct FLinearColor            TeamColor;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TeamColor != nullptr)
		*TeamColor = params.TeamColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FKSPointObjectiveMarkerViewState ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FKSPointObjectiveMarkerViewState UKSPointObjectiveMarkerWidget::GetCurrentViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState");

	struct
	{
		struct FKSPointObjectiveMarkerViewState ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSObjectiveBase*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSObjectiveBase* UKSPointObjectiveMarkerWidget::GetAssociatedObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective");

	struct
	{
		class AKSObjectiveBase*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           IsLocalPlayerOnAttackingTeam   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPointObjectiveMarkerWidget::DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist");

	struct
	{
		bool                           IsLocalPlayerOnAttackingTeam;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocalPlayerOnAttackingTeam != nullptr)
		*IsLocalPlayerOnAttackingTeam = params.IsLocalPlayerOnAttackingTeam;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ControlPointStateUpdated
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         Objective                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPointObjectiveMarkerWidget::ControlPointStateUpdated(class AKSControlPoint* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ControlPointStateUpdated");

	struct
	{
		class AKSControlPoint*         Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UPUMG_StoreItem*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StoreItem*> UKSPortalOffersWidget::GetPortalOfferItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems");

	struct
	{
		TArray<class UPUMG_StoreItem*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSPortalOffersWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSProgressionTallyWidget.SetPlayerProgressionData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSProgressionTallyWidget::SetPlayerProgressionData(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressionTallyWidget.SetPlayerProgressionData");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressionTallyWidget.GetPlayerProgressionBreakdown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            BaseXP                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            EventBonusXP                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            WinBonusXP                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MiscGainedXP                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressionTallyWidget::GetPlayerProgressionBreakdown(int* BaseXP, int* EventBonusXP, int* WinBonusXP, int* MiscGainedXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressionTallyWidget.GetPlayerProgressionBreakdown");

	struct
	{
		int                            BaseXP;
		int                            EventBonusXP;
		int                            WinBonusXP;
		int                            MiscGainedXP;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (BaseXP != nullptr)
		*BaseXP = params.BaseXP;
	if (EventBonusXP != nullptr)
		*EventBonusXP = params.EventBonusXP;
	if (WinBonusXP != nullptr)
		*WinBonusXP = params.WinBonusXP;
	if (MiscGainedXP != nullptr)
		*MiscGainedXP = params.MiscGainedXP;
}


// Function KillstreakUINew.KSProgressionTallyWidget.GetMiscXPInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FProgressionTallyMiscXPInfo ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FProgressionTallyMiscXPInfo UKSProgressionTallyWidget::GetMiscXPInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressionTallyWidget.GetMiscXPInfo");

	struct
	{
		struct FProgressionTallyMiscXPInfo ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.SetDeltaAnimationParams
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          BasePercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DeltaPercent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          AnimTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressMeterWidgetBase::SetDeltaAnimationParams(float BasePercent, float DeltaPercent, float AnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.SetDeltaAnimationParams");

	struct
	{
		float                          BasePercent;
		float                          DeltaPercent;
		float                          AnimTime;
	} params;

	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;
	params.AnimTime = AnimTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.PlayDeltaAnimation
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          StartDelay                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressMeterWidgetBase::PlayDeltaAnimation(float StartDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.PlayDeltaAnimation");

	struct
	{
		float                          StartDelay;
	} params;

	params.StartDelay = StartDelay;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationTicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSProgressMeterWidgetBase::OnDeltaAnimationTicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationTicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSProgressMeterWidgetBase::OnDeltaAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLevelChange                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressMeterWidgetBase::OnDeltaAnimationFinished(bool bLevelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationFinished");

	struct
	{
		bool                           bLevelChange;
	} params;

	params.bLevelChange = bLevelChange;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.IsPlayingDeltaAnimation
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSProgressMeterWidgetBase::IsPlayingDeltaAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.IsPlayingDeltaAnimation");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.EnableDeltaAnimation
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSProgressMeterWidgetBase::EnableDeltaAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.EnableDeltaAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages_Raw
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          BasePercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DeltaPercent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressMeterWidgetBase::ApplyMeterPercentages_Raw(float BasePercent, float DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages_Raw");

	struct
	{
		float                          BasePercent;
		float                          DeltaPercent;
	} params;

	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          BasePercent                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DeltaPercent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSProgressMeterWidgetBase::ApplyMeterPercentages(float BasePercent, float DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages");

	struct
	{
		float                          BasePercent;
		float                          DeltaPercent;
	} params;

	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.TryChangePurchaseQuantity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            QuantityChangeAmount           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPurchaseConfirmationWidget::TryChangePurchaseQuantity(int QuantityChangeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.TryChangePurchaseQuantity");

	struct
	{
		int                            QuantityChangeAmount;
		bool                           ReturnValue;
	} params;

	params.QuantityChangeAmount = QuantityChangeAmount;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.SetupEquipOnPurchase
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSEquipOnAcquisitionData* EquipOnPurchaseData            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPurchaseConfirmationWidget::SetupEquipOnPurchase(class UKSEquipOnAcquisitionData* EquipOnPurchaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.SetupEquipOnPurchase");

	struct
	{
		class UKSEquipOnAcquisitionData* EquipOnPurchaseData;
	} params;

	params.EquipOnPurchaseData = EquipOnPurchaseData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.PromptAlreadyPurchasing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSPurchaseConfirmationWidget::PromptAlreadyPurchasing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.PromptAlreadyPurchasing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.GetStoreItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSPurchaseConfirmationWidget::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.GetStoreItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.CanChangePurchaseQuantity
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QuantityChangeAmount           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSPurchaseConfirmationWidget::CanChangePurchaseQuantity(int QuantityChangeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.CanChangePurchaseQuantity");

	struct
	{
		int                            QuantityChangeAmount;
		bool                           ReturnValue;
	} params;

	params.QuantityChangeAmount = QuantityChangeAmount;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseModal.SetupBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSPurchaseModal::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.SetupBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItemPrice*    Price                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSPurchaseModal::HandleShowPurchaseModal(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal");

	struct
	{
		class UPUMG_StoreItem*         Item;
		class UPUMG_StoreItemPrice*    Price;
	} params;

	params.Item = Item;
	params.Price = Price;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_StoreItemHelper*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItemHelper* UKSPurchaseModal::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper");

	struct
	{
		class UPUMG_StoreItemHelper*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.SortQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ClientCachedQueueInfo          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsAlphanumerical               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FClientQueueInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FClientQueueInfo> UKSQueueDataFactory::SortQueues(TArray<struct FClientQueueInfo> ClientCachedQueueInfo, bool IsAlphanumerical)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SortQueues");

	struct
	{
		TArray<struct FClientQueueInfo> ClientCachedQueueInfo;
		bool                           IsAlphanumerical;
		TArray<struct FClientQueueInfo> ReturnValue;
	} params;

	params.ClientCachedQueueInfo = ClientCachedQueueInfo;
	params.IsAlphanumerical = IsAlphanumerical;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::SetSelectedQueueId(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int64_t>                PreviousMembers                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::SetPreviousCustomMatchMemberIds(TArray<int64_t> PreviousMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds");

	struct
	{
		TArray<int64_t>                PreviousMembers;
	} params;

	params.PreviousMembers = PreviousMembers;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.RetryQueuingForSheltered
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::RetryQueuingForSheltered(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.RetryQueuingForSheltered");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.PopulateMapInfos
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSQueueDataFactory::PopulateMapInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.PopulateMapInfos");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   Member                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::OnPartyMemberUpdate(const struct FPUMG_PartyMemberData& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate");

	struct
	{
		struct FPUMG_PartyMemberData   Member;
	} params;

	params.Member = Member;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::OnPartyMemberEvent(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQueueDataFactory::OnPartyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::JoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::IsTutorialQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.IsRankedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::IsRankedQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.IsRankedQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.IsQueueAvailableOnPlatform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::IsQueueAvailableOnPlatform(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.IsQueueAvailableOnPlatform");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.IsCustomSpectateEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::IsCustomSpectateEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.IsCustomSpectateEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::HandleShelteredMMTimeout(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bSendNotify                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bClearTimer                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::HandleShelteredMMSwitchFinish(bool bSendNotify, bool bClearTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish");

	struct
	{
		bool                           bSendNotify;
		bool                           bClearTimer;
	} params;

	params.bSendNotify = bSendNotify;
	params.bClearTimer = bClearTimer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueDataFactory::HandleShelteredMMQueueSwitch(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueDataFactory::GetSelectedShelteredQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueDataFactory::GetSelectedQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClientQueueInfo        InClientQueueInfo              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::GetQueueInfoById(int QueueId, struct FClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById");

	struct
	{
		int                            QueueId;
		struct FClientQueueInfo        InClientQueueInfo;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueDataFactory::GetPenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    MapIds                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::GetMapRotationsByQueueId(int QueueId, TArray<int>* MapIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId");

	struct
	{
		int                            QueueId;
		TArray<int>                    MapIds;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (MapIds != nullptr)
		*MapIds = params.MapIds;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            MapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMapDetail              MapDetail                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::GetMapInfoById(int MapId, struct FMapDetail* MapDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById");

	struct
	{
		int                            MapId;
		struct FMapDetail              MapDetail;
		bool                           ReturnValue;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);

	if (MapDetail != nullptr)
		*MapDetail = params.MapDetail;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FClientQueueInfo> UKSQueueDataFactory::GetCustomQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues");

	struct
	{
		TArray<struct FClientQueueInfo> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FClientQueueInfo        InClientQueueInfo              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::GetCurrentCustomMatchInfo(struct FClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo");

	struct
	{
		struct FClientQueueInfo        InClientQueueInfo;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FClientQueueInfo        Queue                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EKSQueueJoinError              Error                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   OutErrorMessage                (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueDataFactory::FormatQueueJoinErrorMessage(const struct FClientQueueInfo& Queue, EKSQueueJoinError Error, struct FText* OutErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage");

	struct
	{
		struct FClientQueueInfo        Queue;
		EKSQueueJoinError              Error;
		struct FText                   OutErrorMessage;
		bool                           ReturnValue;
	} params;

	params.Queue = Queue;
	params.Error = Error;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutErrorMessage != nullptr)
		*OutErrorMessage = params.OutErrorMessage;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.DetermineQueueIdForShelteredMM
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClientQueueInfo        QueueInfo                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueDataFactory::DetermineQueueIdForShelteredMM(int QueueId, const struct FClientQueueInfo& QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.DetermineQueueIdForShelteredMM");

	struct
	{
		int                            QueueId;
		struct FClientQueueInfo        QueueInfo;
		int                            ReturnValue;
	} params;

	params.QueueId = QueueId;
	params.QueueInfo = QueueInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSQueueJoinError              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EKSQueueJoinError UKSQueueDataFactory::CheckQueueJoinableById(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById");

	struct
	{
		int                            QueueId;
		EKSQueueJoinError              ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FClientQueueInfo        Queue                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EKSQueueJoinError              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EKSQueueJoinError UKSQueueDataFactory::CheckQueueJoinable(const struct FClientQueueInfo& Queue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable");

	struct
	{
		struct FClientQueueInfo        Queue;
		EKSQueueJoinError              ReturnValue;
	} params;

	params.Queue = Queue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSQueuedMessageWidget::QueueMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage");

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueuedMessageWidget::GetNextMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage");

	struct
	{
		struct FText                   Message;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UpdateQueueSelection
// (FUNC_Native, FUNC_Protected)

void UKSQueueWidgetBase::UpdateQueueSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UpdateQueueSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.UpdateQueuePermissions
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQueueWidgetBase::UpdateQueuePermissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UpdateQueuePermissions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptRejoinMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::UIX_AttemptRejoinMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptRejoinMatch");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptLeaveMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::UIX_AttemptLeaveMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptLeaveMatch");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptJoinSelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::UIX_AttemptJoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptJoinSelectedQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptCancelQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::UIX_AttemptCancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptCancelQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.SetupReadyForQueueing
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQueueWidgetBase::SetupReadyForQueueing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetupReadyForQueueing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.SetupBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSQueueWidgetBase::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetupBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.SetCurrentlySelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::SetCurrentlySelectedQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetCurrentlySelectedQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.ReceiveMatchStatusUpdate
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              CurrentMatchStatus             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::ReceiveMatchStatusUpdate(EPUMG_MatchStatus CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.ReceiveMatchStatusUpdate");

	struct
	{
		EPUMG_MatchStatus              CurrentMatchStatus;
	} params;

	params.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.OnSelectedQueueUpdate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        CurrentSelectedQueue           (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnSelectedQueueUpdate");

	struct
	{
		struct FClientQueueInfo        CurrentSelectedQueue;
	} params;

	params.CurrentSelectedQueue = CurrentSelectedQueue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.OnQueueStateUpdate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus              CurrentMatchStatus             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::OnQueueStateUpdate(EPUMG_MatchStatus CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnQueueStateUpdate");

	struct
	{
		EPUMG_MatchStatus              CurrentMatchStatus;
	} params;

	params.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.OnQueuePermissionUpdate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanQueue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::OnQueuePermissionUpdate(bool CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnQueuePermissionUpdate");

	struct
	{
		bool                           CanQueue;
	} params;

	params.CanQueue = CanQueue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.OnControlQueuePermissionUpdate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanControl                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::OnControlQueuePermissionUpdate(bool CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnControlQueuePermissionUpdate");

	struct
	{
		bool                           CanControl;
	} params;

	params.CanControl = CanControl;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.IsValidQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::IsValidQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.IsValidQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleSelectedQueueIdSet
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQueueWidgetBase::HandleSelectedQueueIdSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleSelectedQueueIdSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberRemoved
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PartyMemberId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::HandlePartyMemberRemoved(int64_t PartyMemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberRemoved");

	struct
	{
		int64_t                        PartyMemberId;
	} params;

	params.PartyMemberId = PartyMemberId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMember                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberDataUpdated");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMember;
	} params;

	params.PartyMember = PartyMember;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleMatchStatusUpdate
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              MatchStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::HandleMatchStatusUpdate(EPUMG_MatchStatus MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleMatchStatusUpdate");

	struct
	{
		EPUMG_MatchStatus              MatchStatus;
	} params;

	params.MatchStatus = MatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleConfirmLeaveQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQueueWidgetBase::HandleConfirmLeaveQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleConfirmLeaveQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueSections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ClientCachedQueueInfo          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FQueueSection>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FQueueSection> UKSQueueWidgetBase::GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueSections");

	struct
	{
		TArray<struct FClientQueueInfo> ClientCachedQueueInfo;
		TArray<struct FQueueSection>   ReturnValue;
	} params;

	params.ClientCachedQueueInfo = ClientCachedQueueInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FClientQueueInfo> UKSQueueWidgetBase::GetQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueues");

	struct
	{
		TArray<struct FClientQueueInfo> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueuePermissions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           CanControl                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           CanQueue                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueWidgetBase::GetQueuePermissions(bool* CanControl, bool* CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueuePermissions");

	struct
	{
		bool                           CanControl;
		bool                           CanQueue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanControl != nullptr)
		*CanControl = params.CanControl;
	if (CanQueue != nullptr)
		*CanQueue = params.CanQueue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueInfoById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClientQueueInfo        QueueInfo                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQueueWidgetBase::GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueInfoById");

	struct
	{
		int                            QueueId;
		struct FClientQueueInfo        QueueInfo;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (QueueInfo != nullptr)
		*QueueInfo = params.QueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSQueueDataFactory* UKSQueueWidgetBase::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueDataFactory");

	struct
	{
		class UKSQueueDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetPlayerDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UKSPlayerDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerDataFactory* UKSQueueWidgetBase::GetPlayerDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetPlayerDataFactory");

	struct
	{
		class UKSPlayerDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UPUMG_PartyDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PartyDataFactory* UKSQueueWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetPartyDataFactory");

	struct
	{
		class UPUMG_PartyDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetCurrentlySelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FClientQueueInfo        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FClientQueueInfo UKSQueueWidgetBase::GetCurrentlySelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetCurrentlySelectedQueue");

	struct
	{
		struct FClientQueueInfo        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EQueueTimerState               State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueTimerWidgetBase::OnUpdateQueueTimerState(EQueueTimerState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState");

	struct
	{
		EQueueTimerState               State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeSecs                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQueueTimerWidgetBase::OnUpdateQueueTime(float TimeSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime");

	struct
	{
		float                          TimeSecs;
	} params;

	params.TimeSecs = TimeSecs;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSQueueTimerWidgetBase::GetQueueTime_TotalSecs()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueTimerWidgetBase::GetQueueTime_PartSecs()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueTimerWidgetBase::GetQueueTime_PartMins()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQueueTimerWidgetBase::GetQueueTime_PartHours()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EQueueTimerState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EQueueTimerState UKSQueueTimerWidgetBase::GetCurrentTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState");

	struct
	{
		EQueueTimerState               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQuickPlay::UpdateQueuePermissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::UIX_AttemptJoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::UIX_AttemptCancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SortQueueSections
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TArray<struct FQueueSection>   QueueSections                  (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FQueueSection>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FQueueSection> UKSQuickPlay::SortQueueSections(TArray<struct FQueueSection> QueueSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SortQueueSections");

	struct
	{
		TArray<struct FQueueSection>   QueueSections;
		TArray<struct FQueueSection>   ReturnValue;
	} params;

	params.QueueSections = QueueSections;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSQuickPlay::SetupReadyForQueueing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.SetupBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSQuickPlay::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetupBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FClientQueueInfo        NewSelectedQueue               (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::SetDefaultSelectedQueue(struct FClientQueueInfo* NewSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue");

	struct
	{
		struct FClientQueueInfo        NewSelectedQueue;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewSelectedQueue != nullptr)
		*NewSelectedQueue = params.NewSelectedQueue;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::SetCurrentlySelectedQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              CurrentMatchStatus             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlay::ReceiveMatchStatusUpdate(EPUMG_MatchStatus CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate");

	struct
	{
		EPUMG_MatchStatus              CurrentMatchStatus;
	} params;

	params.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanQueue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlay::OnQueuePermissionChanged(bool CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged");

	struct
	{
		bool                           CanQueue;
	} params;

	params.CanQueue = CanQueue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanControl                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlay::OnControlQueuePermissionChanged(bool CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged");

	struct
	{
		bool                           CanControl;
	} params;

	params.CanControl = CanControl;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.IsValidQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::IsValidQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.IsValidQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMember                    (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlay::HandlePartyMemberDataUpdated(const struct FPUMG_PartyMemberData& PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMember;
	} params;

	params.PartyMember = PartyMember;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlay.GetQueueTypeFromName
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FName                   QueueType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EQueueType                     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EQueueType UKSQuickPlay::GetQueueTypeFromName(const struct FName& QueueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueTypeFromName");

	struct
	{
		struct FName                   QueueType;
		EQueueType                     ReturnValue;
	} params;

	params.QueueType = QueueType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueSections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ClientCachedQueueInfo          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FQueueSection>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FQueueSection> UKSQuickPlay::GetQueueSections(TArray<struct FClientQueueInfo> ClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueSections");

	struct
	{
		TArray<struct FClientQueueInfo> ClientCachedQueueInfo;
		TArray<struct FQueueSection>   ReturnValue;
	} params;

	params.ClientCachedQueueInfo = ClientCachedQueueInfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FClientQueueInfo> UKSQuickPlay::GetQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueues");

	struct
	{
		TArray<struct FClientQueueInfo> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueInfoById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FClientQueueInfo        QueueInfo                      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::GetQueueInfoById(int QueueId, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueInfoById");

	struct
	{
		int                            QueueId;
		struct FClientQueueInfo        QueueInfo;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (QueueInfo != nullptr)
		*QueueInfo = params.QueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSQueueDataFactory* UKSQuickPlay::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory");

	struct
	{
		class UKSQueueDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UPUMG_PartyDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PartyDataFactory* UKSQuickPlay::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory");

	struct
	{
		class UPUMG_PartyDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSQuickPlay::GetDefaultSelectedQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FClientQueueInfo        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FClientQueueInfo UKSQuickPlay::GetCurrentlySelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue");

	struct
	{
		struct FClientQueueInfo        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> NewClientCachedQueueInfo       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues");

	struct
	{
		TArray<struct FClientQueueInfo> NewClientCachedQueueInfo;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewClientCachedQueueInfo != nullptr)
		*NewClientCachedQueueInfo = params.NewClientCachedQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> CustomMatchQueueInfo           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlay::CheckForCustomQueues(TArray<struct FClientQueueInfo>* CustomMatchQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues");

	struct
	{
		TArray<struct FClientQueueInfo> CustomMatchQueueInfo;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CustomMatchQueueInfo != nullptr)
		*CustomMatchQueueInfo = params.CustomMatchQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.UpdateState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSQuickPlayWidget::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.UpdateState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsPending                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlayWidget::SetIsPendingQueueUpdate(bool IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate");

	struct
	{
		bool                           IsPending;
	} params;

	params.IsPending = IsPending;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EQuickPlayQueueState           QueueState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlayWidget::OnUpdateQuickPlayState(EQuickPlayQueueState QueueState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState");

	struct
	{
		EQuickPlayQueueState           QueueState;
	} params;

	params.QueueState = QueueState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanPlay                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlayWidget::OnUpdateQuickPlayCanPlay(bool CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay");

	struct
	{
		bool                           CanPlay;
	} params;

	params.CanPlay = CanPlay;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          TimeElapsed                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlayWidget::OnUpdateQueueTimeElapsed(float TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed");

	struct
	{
		float                          TimeElapsed;
	} params;

	params.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            TimeLeft                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSQuickPlayWidget::OnUpdatePenaltyTimeLeft(int TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft");

	struct
	{
		int                            TimeLeft;
	} params;

	params.TimeLeft = TimeLeft;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlayWidget::IsPendingQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EQuickPlayQueueState           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EQuickPlayQueueState UKSQuickPlayWidget::GetSelectedQueueState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState");

	struct
	{
		EQuickPlayQueueState           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   GameModeDisplayName            (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSQuickPlayWidget::GetGameModeDisplayName(struct FText* GameModeDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName");

	struct
	{
		struct FText                   GameModeDisplayName;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (GameModeDisplayName != nullptr)
		*GameModeDisplayName = params.GameModeDisplayName;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EQuickPlayQueueState           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EQuickPlayQueueState UKSQuickPlayWidget::GetCurrentQuickPlayState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState");

	struct
	{
		EQuickPlayQueueState           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            NewIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::UpdateLastSelectedIndex(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex");

	struct
	{
		int                            NewIndex;
	} params;

	params.NewIndex = NewIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            NewHoveredIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::UpdateLastHoveredIndex(int NewHoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex");

	struct
	{
		int                            NewHoveredIndex;
	} params;

	params.NewHoveredIndex = NewHoveredIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::TraceSelectionCursor(float Radius, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor");

	struct
	{
		float                          Radius;
		float                          Angle;
	} params;

	params.Radius = Radius;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSRadialSelectionWidgetBase::ShowSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ERadialWheelMode               NewRadialWheelMode             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::SetupForRadialWheelMode(ERadialWheelMode NewRadialWheelMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode");

	struct
	{
		ERadialWheelMode               NewRadialWheelMode;
	} params;

	params.NewRadialWheelMode = NewRadialWheelMode;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSRadialSelectionWidgetBase::RadialOptionUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::RadialOptionSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::RadialOptionHovered(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              CosmeticSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::OpenSpecifiedRadialMenu(EMercCosmeticSlot CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu");

	struct
	{
		EMercCosmeticSlot              CosmeticSlot;
	} params;

	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EMercCosmeticSlot              ButtonCosmeticSlot             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::OnRadialMenuUseLastSelection(EMercCosmeticSlot ButtonCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection");

	struct
	{
		EMercCosmeticSlot              ButtonCosmeticSlot;
	} params;

	params.ButtonCosmeticSlot = ButtonCosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              ButtonCosmeticSlot             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsContextualPingHold          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::OnRadialMenuReleased(EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased");

	struct
	{
		EMercCosmeticSlot              ButtonCosmeticSlot;
		bool                           bIsContextualPingHold;
	} params;

	params.ButtonCosmeticSlot = ButtonCosmeticSlot;
	params.bIsContextualPingHold = bIsContextualPingHold;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EMercCosmeticSlot              ButtonCosmeticSlot             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsContextualPingHold          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::OnRadialMenuPressed(EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed");

	struct
	{
		EMercCosmeticSlot              ButtonCosmeticSlot;
		bool                           bIsContextualPingHold;
	} params;

	params.ButtonCosmeticSlot = ButtonCosmeticSlot;
	params.bIsContextualPingHold = bIsContextualPingHold;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSRadialSelectionWidgetBase::OnRadialMenuForceClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSRadialSelectionWidgetBase::OnCycleMenusRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSRadialSelectionWidgetBase::OnCycleMenusLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCycledRight                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::OnCycledMenus(bool bCycledRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus");

	struct
	{
		bool                           bCycledRight;
	} params;

	params.bCycledRight = bCycledRight;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::IsSelectorVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::IsSelectorActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::IsCycleBetweenMenusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSRadialSelectionWidgetBase::InitializeTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSRadialSelectionWidgetBase::HideSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> NewInputState                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRadialSelectionWidgetBase::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> NewInputState;
	} params;

	params.NewInputState = NewInputState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSRadialSelectionWidgetBase::GetWheelSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::GetPingIconByType(EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType");

	struct
	{
		EPingType                      PingType;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::GetPingIconByMessage(EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            PingColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::GetPingColorByType(EPingType PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType");

	struct
	{
		EPingType                      PingType;
		struct FLinearColor            PingColor;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSRadialSelectionWidgetBase::GetOptionsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMercCosmeticSlot              CosmeticSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSRadialSelectionWidgetBase::GetLastSelectedIndexForCosmeticSlot(EMercCosmeticSlot CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CosmeticSlot;
		int                            ReturnValue;
	} params;

	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSRadialSelectionWidgetBase::GetLastHoveredIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMercCosmeticSlot              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetInitialRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu");

	struct
	{
		EMercCosmeticSlot              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMercCosmeticSlot              CosmeticSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FGameplayTag>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FGameplayTag> UKSRadialSelectionWidgetBase::GetGameplayTagsForCosmeticSlot(EMercCosmeticSlot CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CosmeticSlot;
		TArray<struct FGameplayTag>    ReturnValue;
	} params;

	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSRadialSelectionWidgetBase::GetDeadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bRightSide                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMercCosmeticSlot              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetContiguousCosmeticSlotMenu(bool bRightSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu");

	struct
	{
		bool                           bRightSide;
		EMercCosmeticSlot              ReturnValue;
	} params;

	params.bRightSide = bRightSide;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMercCosmeticSlot              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetActiveCosmeticSlotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu");

	struct
	{
		EMercCosmeticSlot              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingTypesRow ContextualPingTypesRow         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::FindRowByType(EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType");

	struct
	{
		EPingType                      PingType;
		struct FContextualPingTypesRow ContextualPingTypesRow;
		bool                           ReturnValue;
	} params;

	params.PingType = PingType;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_Const)
// Parameters:
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::FindRowByMessage(EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage");

	struct
	{
		EPingMessage                   PingMessage;
		struct FContextualPingMessagesRow ContextualPingMessagesRow;
		bool                           ReturnValue;
	} params;

	params.PingMessage = PingMessage;

	UObject::ProcessEvent(fn, &params);

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSRadialSelectionWidgetBase::DummyFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSRadialSelectionWidgetBase::ChangeToNewRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSRadialSelectionWidgetBase::ButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSRadialSelectionWidgetBase::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerController*     PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRadialSelectionWidgetBase::ActivateRadialMenuItem(int Index, class AKSPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem");

	struct
	{
		int                            Index;
		class AKSPlayerController*     PlayerController;
		bool                           ReturnValue;
	} params;

	params.Index = Index;
	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRankChangeWidget.FormatProgressionData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPlayerProgression      ProgressionData                (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FPlayerProgression      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FPlayerProgression UKSRankChangeWidget::FormatProgressionData(const struct FPlayerProgression& ProgressionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRankChangeWidget.FormatProgressionData");

	struct
	{
		struct FPlayerProgression      ProgressionData;
		struct FPlayerProgression      ReturnValue;
	} params;

	params.ProgressionData = ProgressionData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Code                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRedeemCodeScreenBase::RedeemCode(const struct FString& Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode");

	struct
	{
		struct FString                 Code;
	} params;

	params.Code = Code;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSRedeemCodeScreenBase::OnRedeemCodeSubmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   Error                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSRedeemCodeScreenBase::OnRedeemCodeResult(bool Success, const struct FText& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult");

	struct
	{
		bool                           Success;
		struct FText                   Error;
	} params;

	params.Success = Success;
	params.Error = Error;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSRedeemCodeScreenBase::IsPendingServerReply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OffsetFromCenterScreen         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSReticleWidgetBase::UpdateReticleOffset(float OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset");

	struct
	{
		float                          OffsetFromCenterScreen;
	} params;

	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// bool                           IconVisible                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Translation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               IconScale                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSReticleWidgetBase::UpdateBlockedShotIcon(bool IconVisible, const struct FVector2D& Translation, const struct FVector2D& IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon");

	struct
	{
		bool                           IconVisible;
		struct FVector2D               Translation;
		struct FVector2D               IconScale;
	} params;

	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSReticleWidgetBase::CalculateReticleOffset(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSReticleWidgetBase::CalculateBlockedShotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.UpdateFromRewardTier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FActivityTier           ActivityTier                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            ActivityCount                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackMeterSegmentBase::UpdateFromRewardTier(const struct FActivityTier& ActivityTier, int ActivityCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.UpdateFromRewardTier");

	struct
	{
		struct FActivityTier           ActivityTier;
		int                            ActivityCount;
	} params;

	params.ActivityTier = ActivityTier;
	params.ActivityCount = ActivityCount;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetStandardBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UKSRewardsTrackMeterSegmentBase::GetStandardBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetStandardBackgroundColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetPremiumBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UKSRewardsTrackMeterSegmentBase::GetPremiumBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetPremiumBackgroundColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassPremiumColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UKSRewardsTrackMeterSegmentBase::GetBattlePassPremiumColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassPremiumColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassFreeColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UKSRewardsTrackMeterSegmentBase::GetBattlePassFreeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.GetBattlePassFreeColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentProgress
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackMeterSegmentBase::ApplySegmentProgress(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentProgress");

	struct
	{
		float                          ProgressPercent;
	} params;

	params.ProgressPercent = ProgressPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentMeterColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            MeterColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackMeterSegmentBase::ApplySegmentMeterColor(const struct FLinearColor& MeterColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentMeterColor");

	struct
	{
		struct FLinearColor            MeterColor;
	} params;

	params.MeterColor = MeterColor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentLabel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   LabelText                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackMeterSegmentBase::ApplySegmentLabel(const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentLabel");

	struct
	{
		struct FText                   LabelText;
	} params;

	params.LabelText = LabelText;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BackgroundColor                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackMeterSegmentBase::ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackMeterSegmentBase.ApplySegmentBackgroundColor");

	struct
	{
		struct FLinearColor            BackgroundColor;
	} params;

	params.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackWidgetBase.UpdateMaxPageCount
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            RewardCount                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackWidgetBase::UpdateMaxPageCount(int RewardCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackWidgetBase.UpdateMaxPageCount");

	struct
	{
		int                            RewardCount;
	} params;

	params.RewardCount = RewardCount;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRewardsTrackWidgetBase.SetCurrentPageFromIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRewardsTrackWidgetBase::SetCurrentPageFromIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRewardsTrackWidgetBase.SetCurrentPageFromIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSRogueDetailsWidget.GetStoreItemForJob
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UKSRogueDetailsWidget::GetStoreItemForJob(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueDetailsWidget.GetStoreItemForJob");

	struct
	{
		class UKSJobItem*              JobItem;
		class UPUMG_StoreItem*         ReturnValue;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRogueDetailsWidget.GetItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSRogueDetailsWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueDetailsWidget.GetItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRogueMasteryWidget.GetSectionData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMasterySectionData> SectionData                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRogueMasteryWidget::GetSectionData(class UKSActivityInstance* ActivityInstance, TArray<struct FMasterySectionData>* SectionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueMasteryWidget.GetSectionData");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		TArray<struct FMasterySectionData> SectionData;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);

	if (SectionData != nullptr)
		*SectionData = params.SectionData;
}


// Function KillstreakUINew.KSRogueMasteryWidget.GetMasteryRewardsForTier
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FActivityTier           Tier                           (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TArray<struct FMasteryRewardData> Rewards                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSRogueMasteryWidget::GetMasteryRewardsForTier(const struct FActivityTier& Tier, TArray<struct FMasteryRewardData>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueMasteryWidget.GetMasteryRewardsForTier");

	struct
	{
		struct FActivityTier           Tier;
		TArray<struct FMasteryRewardData> Rewards;
	} params;

	params.Tier = Tier;

	UObject::ProcessEvent(fn, &params);

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function KillstreakUINew.KSScrollBox.GetViewFraction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSScrollBox::GetViewFraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSScrollBox.GetViewFraction");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsWidget*       SettingsWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsContainer::OnShowSettingsWidget(class UKSSettingsWidget* SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget");

	struct
	{
		class UKSSettingsWidget*       SettingsWidget;
	} params;

	params.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsWidget*       SettingsWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsContainer::OnHideSettingsWidget(class UKSSettingsWidget* SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget");

	struct
	{
		class UKSSettingsWidget*       SettingsWidget;
	} params;

	params.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsContainer::OnContainerConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsContainer::GetWidgetContainerTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerPreview
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsPreview*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsPreview* UKSSettingsContainer::GetWidgetContainerPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerPreview");

	struct
	{
		class UKSSettingsPreview*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsContainer::GetWidgetContainerDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSSettingsWidget*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSSettingsWidget*> UKSSettingsContainer::GetSettingsWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets");

	struct
	{
		TArray<class UKSSettingsWidget*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsWidget*       SettingsWidget                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsContainer::AddSettingsWidget(class UKSSettingsWidget* SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget");

	struct
	{
		class UKSSettingsWidget*       SettingsWidget;
	} params;

	params.SettingsWidget = SettingsWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsContainer.AddPreviewWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPreview*      PreviewWidget                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsContainer::AddPreviewWidget(class UKSSettingsPreview* PreviewWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.AddPreviewWidget");

	struct
	{
		class UKSSettingsPreview*      PreviewWidget;
	} params;

	params.PreviewWidget = PreviewWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsContainerConfigAsset::GetSettingName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingDescription
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsContainerConfigAsset::GetSettingDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainerConfigAsset.GetSettingDescription");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsSectionConfigAsset.GetHeading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsSectionConfigAsset::GetHeading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSectionConfigAsset.GetHeading");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsPageConfigAsset.GetPageName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsPageConfigAsset::GetPageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPageConfigAsset.GetPageName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.SetSelectedRegion
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            SiteId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::SetSelectedRegion(int SiteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SetSelectedRegion");

	struct
	{
		int                            SiteId;
		bool                           ReturnValue;
	} params;

	params.SiteId = SiteId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.SetCrosshairColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            CrosshairColorIndex            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::SetCrosshairColor(int CrosshairColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SetCrosshairColor");

	struct
	{
		int                            CrosshairColorIndex;
		bool                           ReturnValue;
	} params;

	params.CrosshairColorIndex = CrosshairColorIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.SetColorOptionValues
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSSettingsColorOptionsAsset* ColorOptionAsset               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::SetColorOptionValues(class UKSSettingsColorOptionsAsset* ColorOptionAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SetColorOptionValues");

	struct
	{
		class UKSSettingsColorOptionsAsset* ColorOptionAsset;
	} params;

	params.ColorOptionAsset = ColorOptionAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::SaveSettingAsInt(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::SaveSettingAsFloat(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::SaveSettingAsBool(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::SaveScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::SaveLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::SaveKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveCrosshairColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            CrosshairColorIndex            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::SaveCrosshairColor(int CrosshairColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveCrosshairColor");

	struct
	{
		int                            CrosshairColorIndex;
		bool                           ReturnValue;
	} params;

	params.CrosshairColorIndex = CrosshairColorIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::RevertScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::RevertPlayerPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::RevertLanguageToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsDataFactory::RevertKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::IsUserLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt_Legacy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OutInt                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::GetSettingAsInt_Legacy(const struct FString& Name, int* OutInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt_Legacy");

	struct
	{
		struct FString                 Name;
		int                            OutInt;
		bool                           ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (OutInt != nullptr)
		*OutInt = params.OutInt;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat_Legacy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutFloat                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::GetSettingAsFloat_Legacy(const struct FString& Name, float* OutFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat_Legacy");

	struct
	{
		struct FString                 Name;
		float                          OutFloat;
		bool                           ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (OutFloat != nullptr)
		*OutFloat = params.OutFloat;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool_Legacy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           OutBool                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsDataFactory::GetSettingAsBool_Legacy(const struct FString& Name, bool* OutBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool_Legacy");

	struct
	{
		struct FString                 Name;
		bool                           OutBool;
		bool                           ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (OutBool != nullptr)
		*OutBool = params.OutBool;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSelectedRegion
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsDataFactory::GetSelectedRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSelectedRegion");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FIntPoint               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FIntPoint UKSSettingsDataFactory::GetScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution");

	struct
	{
		struct FIntPoint               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSPlayerInput*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerInput* UKSSettingsDataFactory::GetKSPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput");

	struct
	{
		class UKSPlayerInput*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKSInputActionKey> OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetDefaultKSInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		TArray<struct FKSInputActionKey> OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetDefaultInputAxisKeys(const struct FName& Name, EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		float                          Scale;
		TArray<struct FKey>            OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetDefaultInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		TArray<struct FKey>            OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKSInputActionKey> OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetCustomKSInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKSInputActionKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		TArray<struct FKSInputActionKey> OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetCustomInputAxisKeys(const struct FName& Name, EKSInputType InputType, float Scale, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		float                          Scale;
		TArray<struct FKey>            OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EKSInputType                   InputType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::GetCustomInputActionKeys(const struct FName& Name, EKSInputType InputType, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys");

	struct
	{
		struct FName                   Name;
		EKSInputType                   InputType;
		TArray<struct FKey>            OutKeys;
	} params;

	params.Name = Name;
	params.InputType = InputType;

	UObject::ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UKSSettingsDataFactory::GetCurrentLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColorValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            CrosshairColorIndex            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FLinearColor UKSSettingsDataFactory::GetCrosshairColorValue(int CrosshairColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColorValue");

	struct
	{
		int                            CrosshairColorIndex;
		struct FLinearColor            ReturnValue;
	} params;

	params.CrosshairColorIndex = CrosshairColorIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsDataFactory::GetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColor");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FString> UKSSettingsDataFactory::GetAvailableLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages");

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks_Legacy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSettingDelegateStruct  SettingDelegateStruct          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::BindSettingCallbacks_Legacy(const struct FString& Name, const struct FSettingDelegateStruct& SettingDelegateStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks_Legacy");

	struct
	{
		struct FString                 Name;
		struct FSettingDelegateStruct  SettingDelegateStruct;
	} params;

	params.Name = Name;
	params.SettingDelegateStruct = SettingDelegateStruct;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::ApplySettingAsInt(const struct FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt");

	struct
	{
		struct FString                 Name;
		int                            Value;
	} params;

	params.Name = Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::ApplySettingAsFloat(const struct FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat");

	struct
	{
		struct FString                 Name;
		float                          Value;
	} params;

	params.Name = Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::ApplySettingAsBool(const struct FString& Name, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool");

	struct
	{
		struct FString                 Name;
		bool                           Value;
	} params;

	params.Name = Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FIntPoint               ScreenResolution               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::ApplyScreenResolution(const struct FIntPoint& ScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution");

	struct
	{
		struct FIntPoint               ScreenResolution;
	} params;

	params.ScreenResolution = ScreenResolution;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 LanguageCulture                (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::ApplyLanguage(const struct FString& LanguageCulture)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage");

	struct
	{
		struct FString                 LanguageCulture;
	} params;

	params.LanguageCulture = LanguageCulture;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsDataFactory.AddColorOptionValues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FLinearColor            ColorValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsDataFactory::AddColorOptionValues(const struct FLinearColor& ColorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.AddColorOptionValues");

	struct
	{
		struct FLinearColor            ColorValue;
	} params;

	params.ColorValue = ColorValue;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsGroup.OnShowContainer
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsGroup::OnShowContainer(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnShowContainer");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsGroup.OnHideContainer
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsGroup::OnHideContainer(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnHideContainer");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsGroup::OnGroupConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSSettingsContainer*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSSettingsContainer*> UKSSettingsGroup::GetSettingsContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers");

	struct
	{
		TArray<class UKSSettingsContainer*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsGroup::AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsGroup::AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FText>           NewOptions                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::UpdateTextOptions(TArray<struct FText> NewOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions");

	struct
	{
		TArray<struct FText>           NewOptions;
	} params;

	params.NewOptions = NewOptions;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetPreviewValueInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueInt");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetPreviewValueFloat(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueFloat");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetPreviewValueBool(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueBool");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKSKeyBind              InKeyBind                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetDesiredValueKeyBind(const struct FKSKeyBind& InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind");

	struct
	{
		struct FKSKeyBind              InKeyBind;
		bool                           ReturnValue;
	} params;

	params.InKeyBind = InKeyBind;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetDesiredValueInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetDesiredValueFloat(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SetDesiredValueBool(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FKSKeyBind              InKeyBind                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SaveKeyBindValue(const struct FKSKeyBind& InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue");

	struct
	{
		struct FKSKeyBind              InKeyBind;
		bool                           ReturnValue;
	} params;

	params.InKeyBind = InKeyBind;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SaveIntValue(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SaveFloatValue(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::SaveBoolValue(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.Save
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsInfoBase::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Save");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ValueToRound                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::RoundToNearestValueFloat(float ValueToRound)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat");

	struct
	{
		float                          ValueToRound;
		float                          ReturnValue;
	} params;

	params.ValueToRound = ValueToRound;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSSettingsInfoBase::RevertSettingToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.Revert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsInfoBase::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Revert");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.ResetPreview
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsInfoBase::ResetPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ResetPreview");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FKSKeyBind              SavedKeyBind                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueKeyBindSaved(const struct FKSKeyBind& SavedKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved");

	struct
	{
		struct FKSKeyBind              SavedKeyBind;
	} params;

	params.SavedKeyBind = SavedKeyBind;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FKSKeyBind              AppliedKeyBind                 (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueKeyBindApplied(const struct FKSKeyBind& AppliedKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied");

	struct
	{
		struct FKSKeyBind              AppliedKeyBind;
	} params;

	params.AppliedKeyBind = AppliedKeyBind;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            SavedInt                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueIntSaved(int SavedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved");

	struct
	{
		int                            SavedInt;
	} params;

	params.SavedInt = SavedInt;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            AppliedInt                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueIntApplied(int AppliedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied");

	struct
	{
		int                            AppliedInt;
	} params;

	params.AppliedInt = AppliedInt;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          SavedFloat                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueFloatSaved(float SavedFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved");

	struct
	{
		float                          SavedFloat;
	} params;

	params.SavedFloat = SavedFloat;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// float                          AppliedFloat                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueFloatApplied(float AppliedFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied");

	struct
	{
		float                          AppliedFloat;
	} params;

	params.AppliedFloat = AppliedFloat;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           SavedBool                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueBoolSaved(bool SavedBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved");

	struct
	{
		bool                           SavedBool;
	} params;

	params.SavedBool = SavedBool;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           AppliedBool                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfoBase::OnValueBoolApplied(bool AppliedBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied");

	struct
	{
		bool                           AppliedBool;
	} params;

	params.AppliedBool = AppliedBool;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FKSKeyBind              InKey                          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::IsValidValueKeyBind(const struct FKSKeyBind& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind");

	struct
	{
		struct FKSKeyBind              InKey;
		bool                           ReturnValue;
	} params;

	params.InKey = InKey;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::IsValidValueInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::IsValidValueFloat(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::IsValidValueBool(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsDirty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::IsDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsDirty");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.InitializeValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsInfoBase::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.InitializeValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKSKeyBind              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FKSKeyBind UKSSettingsInfoBase::GetValueKeyBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind");

	struct
	{
		struct FKSKeyBind              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsInfoBase::GetValueInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueInt");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetValueFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::GetValueBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueBool");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FText>           ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FText> UKSSettingsInfoBase::GetTextOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions");

	struct
	{
		TArray<struct FText>           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetTextOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSettingsInfoBase::GetTextOption(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetTextOption");

	struct
	{
		int                            Index;
		struct FText                   ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetStep
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetStep");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetSettingType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EKSSettingType                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EKSSettingType UKSSettingsInfoBase::GetSettingType()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetSettingType");

	struct
	{
		EKSSettingType                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetRoundToNearest()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetRound
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::GetRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetRound");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsInfoBase::GetPreviewValueInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueInt");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetPreviewValueFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueFloat");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::GetPreviewValueBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueBool");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsInfoBase::GetNumTextOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetMin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetMin");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetMax
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetMax");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSHUDCommon*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSHUDCommon* UKSSettingsInfoBase::GetKSHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD");

	struct
	{
		class AKSHUDCommon*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::GetIsPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKSKeyBind              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FKSKeyBind UKSSettingsInfoBase::GetDirtyValueKeyBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind");

	struct
	{
		struct FKSKeyBind              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsInfoBase::GetDirtyValueInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::GetDirtyValueFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::GetDirtyValueBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FKSKeyBind              InKey                          (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// struct FKSKeyBind              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FKSKeyBind UKSSettingsInfoBase::FixupInvalidKeyBind(const struct FKSKeyBind& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind");

	struct
	{
		struct FKSKeyBind              InKey;
		struct FKSKeyBind              ReturnValue;
	} params;

	params.InKey = InKey;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSSettingsInfoBase::FixupInvalidInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt");

	struct
	{
		int                            inInt;
		int                            ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UKSSettingsInfoBase::FixupInvalidFloat(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat");

	struct
	{
		float                          InFloat;
		float                          ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::FixupInvalidBool(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.CanRevert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::CanRevert()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.CanRevert");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewIntValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyPreviewIntValue(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewIntValue");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewFloatValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyPreviewFloatValue(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewFloatValue");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewBoolValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyPreviewBoolValue(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewBoolValue");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyPreview
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsInfoBase::ApplyPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyPreview");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FKSKeyBind              InKeyBind                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyKeyBindValue(const struct FKSKeyBind& InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue");

	struct
	{
		struct FKSKeyBind              InKeyBind;
		bool                           ReturnValue;
	} params;

	params.InKeyBind = InKeyBind;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            inInt                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyIntValue(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          InFloat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyFloatValue(float InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue");

	struct
	{
		float                          InFloat;
		bool                           ReturnValue;
	} params;

	params.InFloat = InFloat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsInfoBase::ApplyBoolValue(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue");

	struct
	{
		bool                           InBool;
		bool                           ReturnValue;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.Apply
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsInfoBase::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Apply");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSSettingsInfo_Binding::OnSettingsReceivedFromPlayerAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfo_Binding::OnKeyBindingsSaved(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved");

	struct
	{
		struct FName                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfo_Binding::OnKeyBindingsApplied(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied");

	struct
	{
		struct FName                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_Brightness::OnSettingSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingSaved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_Brightness::OnSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Brightness.OnSettingApplied");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Brightness.GetKSSettingsDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsDataFactory* UKSSettingsInfo_Brightness::GetKSSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Brightness.GetKSSettingsDataFactory");

	struct
	{
		class UKSSettingsDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_ConsolePerformanceMode::OnSettingSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingSaved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_ConsolePerformanceMode::OnSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.OnSettingApplied");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.GetKSSettingsDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsDataFactory* UKSSettingsInfo_ConsolePerformanceMode::GetKSSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode.GetKSSettingsDataFactory");

	struct
	{
		class UKSSettingsDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfo_CrosshairColor.OnCrosshairColorSaved
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// int                            SavedIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfo_CrosshairColor::OnCrosshairColorSaved(int SavedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_CrosshairColor.OnCrosshairColorSaved");

	struct
	{
		int                            SavedIndex;
	} params;

	params.SavedIndex = SavedIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_Generic::OnSettingSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsInfo_Generic::OnSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsDataFactory* UKSSettingsInfo_Generic::GetKSSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory");

	struct
	{
		class UKSSettingsDataFactory*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSSettingsInfo_Region::OnPreferredSiteUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// struct FIntPoint               SavedScreenResolution          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfo_Resolution::OnScreenResolutionSaved(const struct FIntPoint& SavedScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved");

	struct
	{
		struct FIntPoint               SavedScreenResolution;
	} params;

	params.SavedScreenResolution = SavedScreenResolution;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// struct FIntPoint               AppliedScreenResolution        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsInfo_Resolution::OnScreenResolutionApplied(const struct FIntPoint& AppliedScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied");

	struct
	{
		struct FIntPoint               AppliedScreenResolution;
	} params;

	params.AppliedScreenResolution = AppliedScreenResolution;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.RebuildNavigation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSSettingsMenu::RebuildNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.RebuildNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnShowPage
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsMenu::OnShowPage(class UKSSettingsPage* SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnShowPage");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnSaveSettings
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSSettingsMenu::OnSaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnSaveSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnRevertSettings
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSSettingsMenu::OnRevertSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnRevertSettings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsMenu::OnMenuConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnHidePage
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsMenu::OnHidePage(class UKSSettingsPage* SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnHidePage");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.OnConfirmExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldSaveSettings             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsMenu::OnConfirmExit(bool ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnConfirmExit");

	struct
	{
		bool                           ShouldSaveSettings;
	} params;

	params.ShouldSaveSettings = ShouldSaveSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.GetSettingsPages
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSSettingsPage*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSSettingsPage*> UKSSettingsMenu::GetSettingsPages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.GetSettingsPages");

	struct
	{
		TArray<class UKSSettingsPage*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSettingsMenu::CheckSavePendingChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsPage*         SettingsPage                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsMenu::AddSettingsPageWidget(class UKSSettingsPage* SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget");

	struct
	{
		class UKSSettingsPage*         SettingsPage;
	} params;

	params.SettingsPage = SettingsPage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPage.OnShowSection
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsSection*      SettingsSection                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsPage::OnShowSection(class UKSSettingsSection* SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnShowSection");

	struct
	{
		class UKSSettingsSection*      SettingsSection;
	} params;

	params.SettingsSection = SettingsSection;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPage.OnPageConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsPage::OnPageConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnPageConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPage.OnHideSection
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsSection*      SettingsSection                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsPage::OnHideSection(class UKSSettingsSection* SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnHideSection");

	struct
	{
		class UKSSettingsSection*      SettingsSection;
	} params;

	params.SettingsSection = SettingsSection;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPage.GetSettingsSections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSSettingsSection*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSSettingsSection*> UKSSettingsPage::GetSettingsSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.GetSettingsSections");

	struct
	{
		TArray<class UKSSettingsSection*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsPage.GetScrollBox
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UScrollBox*              ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UScrollBox* UKSSettingsPage::GetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.GetScrollBox");

	struct
	{
		class UScrollBox*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsSection*      SettingsSection                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsPage::AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget");

	struct
	{
		class UKSSettingsSection*      SettingsSection;
	} params;

	params.SettingsSection = SettingsSection;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPreview.HandleOnValueChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           ChangedExternally              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsPreview::HandleOnValueChanged(bool ChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPreview.HandleOnValueChanged");

	struct
	{
		bool                           ChangedExternally;
	} params;

	params.ChangedExternally = ChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsPreview.HandleOnPreviewValueChanged
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSSettingsPreview::HandleOnPreviewValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPreview.HandleOnPreviewValueChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsSection.OnShowGroup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        SettingsGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsSection::OnShowGroup(class UKSSettingsGroup* SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnShowGroup");

	struct
	{
		class UKSSettingsGroup*        SettingsGroup;
	} params;

	params.SettingsGroup = SettingsGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsSection::OnSectionConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsSection.OnHideGroup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        SettingsGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsSection::OnHideGroup(class UKSSettingsGroup* SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnHideGroup");

	struct
	{
		class UKSSettingsGroup*        SettingsGroup;
	} params;

	params.SettingsGroup = SettingsGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsSection.GetSettingsGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSSettingsGroup*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSSettingsGroup*> UKSSettingsSection::GetSettingsGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.GetSettingsGroups");

	struct
	{
		TArray<class UKSSettingsGroup*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        SettingsGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsSection::AddSettingsGroupWidget(class UKSSettingsGroup* SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget");

	struct
	{
		class UKSSettingsGroup*        SettingsGroup;
	} params;

	params.SettingsGroup = SettingsGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.SaveSetting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsWidget::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.SaveSetting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.RevertSetting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsWidget::RevertSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.RevertSetting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsWidget::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsWidget::OnWidgetContainerTitleSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerPreviewSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsWidget::OnWidgetContainerPreviewSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerPreviewSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsWidget::OnWidgetContainerDescriptionSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSettingsWidget::OnWidgetConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bChangedExternally             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsWidget::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged");

	struct
	{
		bool                           bChangedExternally;
	} params;

	params.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.OnInputAttached
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bGamepadAttached               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bMouseAttached                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSettingsWidget::OnInputAttached(bool bGamepadAttached, bool bMouseAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnInputAttached");

	struct
	{
		bool                           bGamepadAttached;
		bool                           bMouseAttached;
	} params;

	params.bGamepadAttached = bGamepadAttached;
	params.bMouseAttached = bMouseAttached;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSettingsWidget.IsSaved
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsWidget::IsSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.IsSaved");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.IsApplied
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsWidget::IsApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.IsApplied");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.HasPreview
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsWidget::HasPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.HasPreview");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSettingsWidget::CanGamepadNavigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.ApplySetting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSettingsWidget::ApplySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.ApplySetting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UButton*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UButton* UKSShopItemButtonBase::GetHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget");

	struct
	{
		class UButton*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// bool                           IsAffordable                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsToggleSlot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSShopItemButtonBase::DisplayShopItem(const struct FShopItem& ShopItem, bool IsAffordable, bool IsToggleSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem");

	struct
	{
		struct FShopItem               ShopItem;
		bool                           IsAffordable;
		bool                           IsToggleSlot;
	} params;

	params.ShopItem = ShopItem;
	params.IsAffordable = IsAffordable;
	params.IsToggleSlot = IsToggleSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSShopItemButtonBase::ButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSShopItemButtonBase::ButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSShopItemButtonBase::ButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSShopItemButtonBase::ButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSShopItemButtonBase::ButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialPanelBase.UpdateListData
// (FUNC_Native, FUNC_Protected)

void UKSSocialPanelBase::UpdateListData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.UpdateListData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialPanelBase.SetupTreeView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTreeView*               List                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialPanelBase::SetupTreeView(class UTreeView* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.SetupTreeView");

	struct
	{
		class UTreeView*               List;
	} params;

	params.List = List;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialPanelBase.SetDataSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSSocialOverlay*        Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialPanelBase::SetDataSource(class UKSSocialOverlay* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.SetDataSource");

	struct
	{
		class UKSSocialOverlay*        Source;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialPanelBase.OnDataChange
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TArray<EKSSocialOverlaySection> Sections                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialPanelBase::OnDataChange(TArray<EKSSocialOverlaySection> Sections)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.OnDataChange");

	struct
	{
		TArray<EKSSocialOverlaySection> Sections;
	} params;

	params.Sections = Sections;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialPanelBase.GetTreeView
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTreeView*               ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTreeView* UKSSocialPanelBase::GetTreeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetTreeView");

	struct
	{
		class UTreeView*               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UObject*                 Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UObject*>         Out_List                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialPanelBase::GetSubListFromData(class UObject* Source, TArray<class UObject*>* Out_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData");

	struct
	{
		class UObject*                 Source;
		TArray<class UObject*>         Out_List;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);

	if (Out_List != nullptr)
		*Out_List = params.Out_List;
}


// Function KillstreakUINew.KSSocialPanelBase.GetDataSource
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSSocialOverlay*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSocialOverlay* UKSSocialPanelBase::GetDataSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetDataSource");

	struct
	{
		class UKSSocialOverlay*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.RepopulateAll
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable)

void UKSSocialOverlay::RepopulateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.RepopulateAll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialOverlay.PlayTransition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           TransitionOut                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialOverlay::PlayTransition(class UWidgetAnimation* Animation, bool TransitionOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.PlayTransition");

	struct
	{
		class UWidgetAnimation*        Animation;
		bool                           TransitionOut;
	} params;

	params.Animation = Animation;
	params.TransitionOut = TransitionOut;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSFriendDataFactory*    Source                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialOverlay::OnRecentlyPlayedChange(class UKSFriendDataFactory* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange");

	struct
	{
		class UKSFriendDataFactory*    Source;
	} params;

	params.Source = Source;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UKSSocialOverlay::HandleUpdatePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialOverlay.GetData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UKSDataSocialCategory*> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSDataSocialCategory*> UKSSocialOverlay::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetData");

	struct
	{
		TArray<class UKSDataSocialCategory*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.GetCategory
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EKSSocialOverlaySection        Category                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSDataSocialCategory*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSDataSocialCategory* UKSSocialOverlay::GetCategory(EKSSocialOverlaySection Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetCategory");

	struct
	{
		EKSSocialOverlaySection        Category;
		class UKSDataSocialCategory*   ReturnValue;
	} params;

	params.Category = Category;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.GetCategories
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<EKSSocialOverlaySection> Categories                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UKSDataSocialCategory*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSDataSocialCategory*> UKSSocialOverlay::GetCategories(TArray<EKSSocialOverlaySection> Categories)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetCategories");

	struct
	{
		TArray<EKSSocialOverlaySection> Categories;
		TArray<class UKSDataSocialCategory*> ReturnValue;
	} params;

	params.Categories = Categories;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UKSSocialSearchPanel::OnSearchTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SearchTerm                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSSocialSearchPanel::OnSearchStart(const struct FText& SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart");

	struct
	{
		struct FText                   SearchTerm;
	} params;

	params.SearchTerm = SearchTerm;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SearchTerm                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   Error                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TArray<class UKSDataSocialPlayer*> Results                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialSearchPanel::OnSearchComplete(const struct FText& SearchTerm, const struct FText& Error, TArray<class UKSDataSocialPlayer*> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete");

	struct
	{
		struct FText                   SearchTerm;
		struct FText                   Error;
		TArray<class UKSDataSocialPlayer*> Results;
	} params;

	params.SearchTerm = SearchTerm;
	params.Error = Error;
	params.Results = Results;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialSearchPanel.OnOverlayClosed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSocialSearchPanel::OnOverlayClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnOverlayClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialSearchPanel.IsSearching
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSocialSearchPanel::IsSearching()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.IsSearching");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSSocialSearchPanel::GetActiveSearchTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.DoSearch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   SearchTerm                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSSocialSearchPanel::DoSearch(const struct FText& SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.DoSearch");

	struct
	{
		struct FText                   SearchTerm;
	} params;

	params.SearchTerm = SearchTerm;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.SortFriendData
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> Friends                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialWidgetBase::SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.SortFriendData");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> Friends;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Friends != nullptr)
		*Friends = params.Friends;
}


// Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSSocialWidgetBase::SearchPlayerName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName");

	struct
	{
		struct FString                 PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSocialWidgetBase::OnFriendRequestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSocialWidgetBase::HandleSearchByNameResultsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSSocialWidgetBase::HandlePartyDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_FriendData        PlayerData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSSocialWidgetBase::HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived");

	struct
	{
		struct FPUMG_FriendData        PlayerData;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSSocialWidgetBase::HandleFriendDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSSocialWidgetBase::GetSortedFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UKSSocialWidgetBase::GetSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSPlayerWhoDataFactory* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerWhoDataFactory* UKSSocialWidgetBase::GetPlayerWhoDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory");

	struct
	{
		class UKSPlayerWhoDataFactory* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPartyDataFactory* UKSSocialWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory");

	struct
	{
		class UKSPartyDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSFriendDataFactory* UKSSocialWidgetBase::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory");

	struct
	{
		class UKSFriendDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSSocialWidgetBase::ClearSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSortableGridPanel::SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature");

	struct
	{
		class UWidget*                 LHS;
		class UWidget*                 RHS;
		bool                           ReturnValue;
	} params;

	params.LHS = LHS;
	params.RHS = RHS;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSortableGridPanel.SortChildren
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSortableGridPanel::SortChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableGridPanel.SortChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGridSlot*               ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGridSlot* UKSSortableGridPanel::AddChildAutoLayout(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout");

	struct
	{
		class UWidget*                 Content;
		class UGridSlot*               ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSSortableVerticalBox::SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature");

	struct
	{
		class UWidget*                 LHS;
		class UWidget*                 RHS;
		bool                           ReturnValue;
	} params;

	params.LHS = LHS;
	params.RHS = RHS;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSortableVerticalBox.SortChildren
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSSortableVerticalBox::SortChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableVerticalBox.SortChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSStorePanelItem.IsOnSale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSStorePanelItem::IsOnSale()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStorePanelItem.IsOnSale");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSectionItem.HasUnseenItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSStoreSectionItem::HasUnseenItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSectionItem.HasUnseenItems");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSection.HasUnseenItems
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSStoreSection::HasUnseenItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSection.HasUnseenItems");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSection.GetSectionHeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSStoreSection::GetSectionHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSection.GetSectionHeader");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSection.GetSecondsRemaining
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSStoreSection::GetSecondsRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSection.GetSecondsRemaining");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.OnVendorsReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            GroupId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    VendorIds                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSStoreWidget::OnVendorsReceived(int GroupId, TArray<int> VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.OnVendorsReceived");

	struct
	{
		int                            GroupId;
		TArray<int>                    VendorIds;
	} params;

	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSStoreWidget.OnPricePointsReveived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSStoreWidget::OnPricePointsReveived()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.OnPricePointsReveived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSStoreWidget.OnPortalOffersReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKSStoreWidget::OnPortalOffersReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.OnPortalOffersReceived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSStoreWidget.HasAllRequiredStoreInformation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSStoreWidget::HasAllRequiredStoreInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.HasAllRequiredStoreInformation");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.GetStoreRotationSecondsRemaining
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSStoreWidget::GetStoreRotationSecondsRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.GetStoreRotationSecondsRemaining");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.GetStoreLayout
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSStoreSection*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSStoreSection*> UKSStoreWidget::GetStoreLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.GetStoreLayout");

	struct
	{
		TArray<class UKSStoreSection*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.GetStoreItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSStoreWidget::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.GetStoreItemHelper");

	struct
	{
		class UKSStoreItemHelper*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UKSModInst_Activated*    ModInst                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTargetMarkerWidget::UpdateCharge(class UKSModInst_Activated* ModInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge");

	struct
	{
		class UKSModInst_Activated*    ModInst;
	} params;

	params.ModInst = ModInst;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// ETargetMarkerViewState         ViewState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bForce                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTargetMarkerWidget::TryApplyViewState(ETargetMarkerViewState ViewState, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState");

	struct
	{
		ETargetMarkerViewState         ViewState;
		bool                           bForce;
	} params;

	params.ViewState = ViewState;
	params.bForce = bForce;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TScriptInterface<class UKSTargeter> InTargeter                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// class AActor*                  NewTarget                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTargetMarkerWidget::ReceiveNewTarget(const TScriptInterface<class UKSTargeter>& InTargeter, class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget");

	struct
	{
		TScriptInterface<class UKSTargeter> InTargeter;
		class AActor*                  NewTarget;
	} params;

	params.InTargeter = InTargeter;
	params.NewTarget = NewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            NewSelectionIndex              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTargetMarkerWidget::OnGamepadSelectedChanged(int NewSelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged");

	struct
	{
		int                            NewSelectionIndex;
	} params;

	params.NewSelectionIndex = NewSelectionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ETargetMarkerViewState         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ETargetMarkerViewState UKSTargetMarkerWidget::GetCurrentViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState");

	struct
	{
		ETargetMarkerViewState         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSTargetMarkerWidget::BindTargetModInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETargetMarkerViewState         ViewState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTargetMarkerWidget::ApplyViewState(ETargetMarkerViewState ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState");

	struct
	{
		ETargetMarkerViewState         ViewState;
	} params;

	params.ViewState = ViewState;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.Whisper
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::Whisper(const struct FString& PlayerName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Whisper");

	struct
	{
		struct FString                 PlayerName;
		struct FString                 Message;
	} params;

	params.PlayerName = PlayerName;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.Unblock
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::Unblock(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Unblock");

	struct
	{
		struct FString                 PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::UIX_SubmitTextInput(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput");

	struct
	{
		struct FString                 Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        PlayerId                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::UIX_SendMessageToPlayer(const struct FString& Message, int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer");

	struct
	{
		struct FString                 Message;
		int64_t                        PlayerId;
	} params;

	params.Message = Message;
	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::UIX_SendMessageToChannel(const struct FString& Message, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel");

	struct
	{
		struct FString                 Message;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Message = Message;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            MessageIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::UIX_MarkMessageAsRead(int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead");

	struct
	{
		int                            MessageIndex;
	} params;

	params.MessageIndex = MessageIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CommandLine                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::UIX_ExecuteChatCommandLine(const struct FString& CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine");

	struct
	{
		struct FString                 CommandLine;
	} params;

	params.CommandLine = CommandLine;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.ToggleDND
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSTextChatWidget::ToggleDND()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.ToggleDND");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.ShowTextChat
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSTextChatWidget::ShowTextChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.ShowTextChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTextChatWidget::SetChatChannelToPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.SetChatChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        PersonalChannelPlayerId        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTextChatWidget::SetChatChannel(EPUMG_ChatChannel Channel, int64_t PersonalChannelPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.SetChatChannel");

	struct
	{
		EPUMG_ChatChannel              Channel;
		int64_t                        PersonalChannelPlayerId;
		bool                           ReturnValue;
	} params;

	params.Channel = Channel;
	params.PersonalChannelPlayerId = PersonalChannelPlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.Reply
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::Reply(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Reply");

	struct
	{
		struct FString                 Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.ProcessMessageOnClient
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::ProcessMessageOnClient(const struct FText& Message, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.ProcessMessageOnClient");

	struct
	{
		struct FText                   Message;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Message = Message;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSTextChatWidget::PreviousChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.OpenTextChat
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::OpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.OpenTextChat");

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.NextChatChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSTextChatWidget::NextChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.NextChatChannel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTextChatWidget::IsActiveChatChannel(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel");

	struct
	{
		EPUMG_ChatChannel              Channel;
		bool                           ReturnValue;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          ReceivedMessage                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived");

	struct
	{
		struct FPUMG_ChatData          ReceivedMessage;
	} params;

	params.ReceivedMessage = ReceivedMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          ReadMessage                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::HandleChatMessageRead(const struct FPUMG_ChatData& ReadMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead");

	struct
	{
		struct FPUMG_ChatData          ReadMessage;
	} params;

	params.ReadMessage = ReadMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::HandleChatChannelLeft(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft");

	struct
	{
		EPUMG_ChatChannel              Channel;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::HandleChatChannelJoined(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined");

	struct
	{
		EPUMG_ChatChannel              Channel;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FPUMG_ActiveChatChannelData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FPUMG_ActiveChatChannelData UKSTextChatWidget::GetCurrentChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel");

	struct
	{
		struct FPUMG_ActiveChatChannelData ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSChatDataFactory*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSChatDataFactory* UKSTextChatWidget::GetChatDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory");

	struct
	{
		class UKSChatDataFactory*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_ActiveChatChannelData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_ActiveChatChannelData> UKSTextChatWidget::GetActiveChatChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels");

	struct
	{
		TArray<struct FPUMG_ActiveChatChannelData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.CanChatInChannel
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTextChatWidget::CanChatInChannel(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.CanChatInChannel");

	struct
	{
		EPUMG_ChatChannel              Channel;
		bool                           ReturnValue;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.Block
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTextChatWidget::Block(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Block");

	struct
	{
		struct FString                 PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSToastNotificationWidgetBase::TestDisplayChallengeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FToastData              ToastNotification              (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::StoreToastQueue(const struct FToastData& ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue");

	struct
	{
		struct FToastData              ToastNotification;
	} params;

	params.ToastNotification = ToastNotification;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSToastNotificationWidgetBase::ShowToastNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FToastData              ToastData                      (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::OnToastNotificationReceived(const struct FToastData& ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived");

	struct
	{
		struct FToastData              ToastData;
	} params;

	params.ToastData = ToastData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     Activity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::OnChallengeCompleted(class UKSActivityInstance* Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted");

	struct
	{
		class UKSActivityInstance*     Activity;
	} params;

	params.Activity = Activity;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.OnAwardsCompleted
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UKSActivityInstance*     Activity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::OnAwardsCompleted(class UKSActivityInstance* Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.OnAwardsCompleted");

	struct
	{
		class UKSActivityInstance*     Activity;
	} params;

	params.Activity = Activity;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSToastNotificationWidgetBase::NotifyToastShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSToastNotificationWidgetBase::NotifyToastHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyMemberPromoted(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSToastNotificationWidgetBase::HandlePartyMemberLeftGeneric()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyMemberKick(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_PartyMemberData   PartyMemberData                (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyMemberAdded(const struct FPUMG_PartyMemberData& PartyMemberData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded");

	struct
	{
		struct FPUMG_PartyMemberData   PartyMemberData;
	} params;

	params.PartyMemberData = PartyMemberData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSToastNotificationWidgetBase::HandlePartyLocalPlayerLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyInviteSent(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent");

	struct
	{
		struct FText                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSToastNotificationWidgetBase::HandlePartyInviteRejected()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_PlayerInfo*        PartyInviter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyInviteReceived(class UPUMG_PlayerInfo* PartyInviter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived");

	struct
	{
		class UPUMG_PlayerInfo*        PartyInviter;
	} params;

	params.PartyInviter = PartyInviter;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandlePartyInviteError(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError");

	struct
	{
		struct FText                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSToastNotificationWidgetBase::HandlePartyInviteAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandleFriendRejected(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected");

	struct
	{
		struct FText                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FPUMG_FriendData        PlayerData                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandleFriendInviteReceived(const struct FPUMG_FriendData& PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived");

	struct
	{
		struct FPUMG_FriendData        PlayerData;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandleFriendAddSuccess(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess");

	struct
	{
		struct FString                 PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FText                   PlayerName                     (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::HandleFriendAdded(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded");

	struct
	{
		struct FText                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPostMatchToasts
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FToastData>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FToastData> UKSToastNotificationWidgetBase::GetPostMatchToasts()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPostMatchToasts");

	struct
	{
		TArray<struct FToastData>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSPlayerChallengesManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPlayerChallengesManager* UKSToastNotificationWidgetBase::GetPlayerChallengesManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager");

	struct
	{
		class UKSPlayerChallengesManager* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerAwardsManager
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSAwardsManager*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSAwardsManager* UKSToastNotificationWidgetBase::GetPlayerAwardsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerAwardsManager");

	struct
	{
		class UKSAwardsManager*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSPartyDataFactory* UKSToastNotificationWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory");

	struct
	{
		class UKSPartyDataFactory*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FToastData              NextToastNotification          (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSToastNotificationWidgetBase::GetNext(struct FToastData* NextToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext");

	struct
	{
		struct FToastData              NextToastNotification;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NextToastNotification != nullptr)
		*NextToastNotification = params.NextToastNotification;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSFriendDataFactory* UKSToastNotificationWidgetBase::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory");

	struct
	{
		class UKSFriendDataFactory*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetEventChallengesManager
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSEventChallengesManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSEventChallengesManager* UKSToastNotificationWidgetBase::GetEventChallengesManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetEventChallengesManager");

	struct
	{
		class UKSEventChallengesManager* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetBattlePassProgressionManager
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSBattlePassProgressionManager* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSBattlePassProgressionManager* UKSToastNotificationWidgetBase::GetBattlePassProgressionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetBattlePassProgressionManager");

	struct
	{
		class UKSBattlePassProgressionManager* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreatePlayerLevelUpToasts
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     PlayerLevelActivityInstance    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActivityTier           TierObtained                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreatePlayerLevelUpToasts(class UKSActivityInstance* PlayerLevelActivityInstance, const struct FActivityTier& TierObtained)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreatePlayerLevelUpToasts");

	struct
	{
		class UKSActivityInstance*     PlayerLevelActivityInstance;
		struct FActivityTier           TierObtained;
	} params;

	params.PlayerLevelActivityInstance = PlayerLevelActivityInstance;
	params.TierObtained = TierObtained;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMiniBattlePassTierUnlockToasts
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     MiniBattlePassActivityInstance (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActivityTier           TierObtained                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreateMiniBattlePassTierUnlockToasts(class UKSActivityInstance* MiniBattlePassActivityInstance, const struct FActivityTier& TierObtained)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMiniBattlePassTierUnlockToasts");

	struct
	{
		class UKSActivityInstance*     MiniBattlePassActivityInstance;
		struct FActivityTier           TierObtained;
	} params;

	params.MiniBattlePassActivityInstance = MiniBattlePassActivityInstance;
	params.TierObtained = TierObtained;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     MercMasteryActivityInstance    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FActivityTier           TierObtained                   (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreateMercMasteryLevelUpToasts(class UKSActivityInstance* MercMasteryActivityInstance, const struct FActivityTier& TierObtained)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts");

	struct
	{
		class UKSActivityInstance*     MercMasteryActivityInstance;
		struct FActivityTier           TierObtained;
	} params;

	params.MercMasteryActivityInstance = MercMasteryActivityInstance;
	params.TierObtained = TierObtained;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateEventChallengeCompleteToasts
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UKSActivityInstance*     EventChallengeActivityInstance (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreateEventChallengeCompleteToasts(class UKSActivityInstance* EventChallengeActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateEventChallengeCompleteToasts");

	struct
	{
		class UKSActivityInstance*     EventChallengeActivityInstance;
	} params;

	params.EventChallengeActivityInstance = EventChallengeActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastBySpentItem
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UPlatformInventoryItem*  SpentItem                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreateBoostActivationToastBySpentItem(class UPlatformInventoryItem* SpentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastBySpentItem");

	struct
	{
		class UPlatformInventoryItem*  SpentItem;
	} params;

	params.SpentItem = SpentItem;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastByAcquisition
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_StoreItem*         AcquisitionItem                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSToastNotificationWidgetBase::CreateBoostActivationToastByAcquisition(class UPUMG_StoreItem* AcquisitionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateBoostActivationToastByAcquisition");

	struct
	{
		class UPUMG_StoreItem*         AcquisitionItem;
	} params;

	params.AcquisitionItem = AcquisitionItem;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearPostMatchQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSToastNotificationWidgetBase::ClearPostMatchQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.ClearPostMatchQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSToastNotificationWidgetBase::ClearNotificationQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.UnbindEventFromTopBarStatusIconShowingChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSTopBarStatusIconInterface::UnbindEventFromTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.UnbindEventFromTopBarStatusIconShowingChanged");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;

	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.IsInTopBarStatusIconShowingState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTopBarStatusIconInterface::IsInTopBarStatusIconShowingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.IsInTopBarStatusIconShowingState");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.GetTopBarStatusIconTexture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTexture2D* UKSTopBarStatusIconInterface::GetTopBarStatusIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.GetTopBarStatusIconTexture");

	struct
	{
		class UTexture2D*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.BindEventToTopBarStatusIconShowingChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSTopBarStatusIconInterface::BindEventToTopBarStatusIconShowingChanged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.BindEventToTopBarStatusIconShowingChanged");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;

	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTouchHudWidget.UpdateQuickMeleeRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSTouchHudWidget::UpdateQuickMeleeRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTouchHudWidget.UpdateQuickMeleeRadius");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTouchHudWidget.UpdateMeleeOrFireButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSTouchHudWidget::UpdateMeleeOrFireButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTouchHudWidget.UpdateMeleeOrFireButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTreeView.UninitializeWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSTreeView::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTreeView.NavigateSelectItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSTreeView::NavigateSelectItem(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.NavigateSelectItem");

	struct
	{
		class UObject*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTreeView.IsItemExpanded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 Item                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTreeView::IsItemExpanded(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.IsItemExpanded");

	struct
	{
		class UObject*                 Item;
		bool                           ReturnValue;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTreeView.InitializeWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSTreeView::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.InitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSTreeView.GetNumItemsInLayout
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSTreeView::GetNumItemsInLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.GetNumItemsInLayout");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 Item                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUserWidget*             OutWidget                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSTreeView::BP_GetEntryWidgetFromItem(class UObject* Item, class UUserWidget** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem");

	struct
	{
		class UObject*                 Item;
		class UUserWidget*             OutWidget;
		bool                           ReturnValue;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.UIX_ReportPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FReportPlayerParams     Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::UIX_ReportPlayer(class UObject* WorldContextObject, const struct FReportPlayerParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.UIX_ReportPlayer");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FReportPlayerParams     Params;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromScoreboardStats
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScoreboardStats        State                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FReportPlayerParams     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FReportPlayerParams UKSUIBlueprintFunctionLibrary::SetupReportPlayerFromScoreboardStats(int64_t PlayerId, const struct FScoreboardStats& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromScoreboardStats");

	struct
	{
		int64_t                        PlayerId;
		struct FScoreboardStats        State;
		struct FReportPlayerParams     ReturnValue;
	} params;

	params.PlayerId = PlayerId;
	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSGameState*            State                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FReportPlayerParams     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FReportPlayerParams UKSUIBlueprintFunctionLibrary::SetupReportPlayerFromGameState(int64_t PlayerId, class AKSGameState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState");

	struct
	{
		int64_t                        PlayerId;
		class AKSGameState*            State;
		struct FReportPlayerParams     ReturnValue;
	} params;

	params.PlayerId = PlayerId;
	params.State = State;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ShouldHide                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSUIBlueprintFunctionLibrary::SetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController, bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		bool                           ShouldHide;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.ShouldHide = ShouldHide;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSUIBlueprintFunctionLibrary::ResetHiddenCursorMode(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_Widget*            ParentWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UWidget*>         NavWidgets                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            GridWidth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           NavToLastElementOnDown         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSUIBlueprintFunctionLibrary::RegisterGridNavigation(class UPUMG_Widget* ParentWidget, int FocusGroup, TArray<class UWidget*> NavWidgets, int GridWidth, bool NavToLastElementOnDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation");

	struct
	{
		class UPUMG_Widget*            ParentWidget;
		int                            FocusGroup;
		TArray<class UWidget*>         NavWidgets;
		int                            GridWidth;
		bool                           NavToLastElementOnDown;
	} params;

	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.NavWidgets = NavWidgets;
	params.GridWidth = GridWidth;
	params.NavToLastElementOnDown = NavToLastElementOnDown;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSUIBlueprintFunctionLibrary::Key_GetShortDisplayName(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName");

	struct
	{
		struct FKey                    Key;
		struct FText                   ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsPlayerRelevant
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          InPlayerState                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bLockedInOnly                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::IsPlayerRelevant(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, bool bLockedInOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsPlayerRelevant");

	struct
	{
		struct FJobSelectionEntry      Entry;
		class AKSPlayerState*          InPlayerState;
		bool                           bLockedInOnly;
		bool                           ReturnValue;
	} params;

	params.Entry = Entry;
	params.InPlayerState = InPlayerState;
	params.bLockedInOnly = bLockedInOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsNewJob
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            RogueID                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::IsNewJob(int RogueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsNewJob");

	struct
	{
		int                            RogueID;
		bool                           ReturnValue;
	} params;

	params.RogueID = RogueID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Translation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Margins                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::IsInsideMargins(class UObject* WorldContextObject, const struct FVector2D& Translation, const struct FVector2D& Margins)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               Translation;
		struct FVector2D               Margins;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Translation = Translation;
	params.Margins = Margins;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          PositionX                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          PositionY                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MarginX                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          MarginY                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::IsInCenteredScreenRect(float PositionX, float PositionY, float MarginX, float MarginY)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect");

	struct
	{
		float                          PositionX;
		float                          PositionY;
		float                          MarginX;
		float                          MarginY;
		bool                           ReturnValue;
	} params;

	params.PositionX = PositionX;
	params.PositionY = PositionY;
	params.MarginX = MarginX;
	params.MarginY = MarginY;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsExperimentActive
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EExperimentalFeatureName       Feature                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::IsExperimentActive(EExperimentalFeatureName Feature)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsExperimentActive");

	struct
	{
		EExperimentalFeatureName       Feature;
		bool                           ReturnValue;
	} params;

	params.Feature = Feature;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetTextByPlatform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FText                   DefaultText                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// TMap<struct FString, struct FText> PlatformTexts                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

struct FText UKSUIBlueprintFunctionLibrary::GetTextByPlatform(const struct FText& DefaultText, TMap<struct FString, struct FText> PlatformTexts)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetTextByPlatform");

	struct
	{
		struct FText                   DefaultText;
		TMap<struct FString, struct FText> PlatformTexts;
		struct FText                   ReturnValue;
	} params;

	params.DefaultText = DefaultText;
	params.PlatformTexts = PlatformTexts;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSStoreItemHelper*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSStoreItemHelper* UKSUIBlueprintFunctionLibrary::GetStoreItemHelper(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper");

	struct
	{
		class UObject*                 WorldContextObject;
		class UKSStoreItemHelper*      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetSelectionStateForPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          InPlayerState                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EJobSelectionState             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EJobSelectionState UKSUIBlueprintFunctionLibrary::GetSelectionStateForPlayer(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetSelectionStateForPlayer");

	struct
	{
		struct FJobSelectionEntry      Entry;
		class AKSPlayerState*          InPlayerState;
		EJobSelectionState             ReturnValue;
	} params;

	params.Entry = Entry;
	params.InPlayerState = InPlayerState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   DisplayNameText                (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetQueueName(struct FText* DisplayNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueName");

	struct
	{
		struct FText                   DisplayNameText;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DisplayNameText != nullptr)
		*DisplayNameText = params.DisplayNameText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   DisplayNameText                (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetQueueDisplayName(class UObject* WorldContextObject, struct FText* DisplayNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName");

	struct
	{
		struct FText                   DisplayNameText;
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DisplayNameText != nullptr)
		*DisplayNameText = params.DisplayNameText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerSelectInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          InPlayerState                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPlayerJobSelectInfo    PlayerSelectInfo               (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetPlayerSelectInfo(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState, struct FPlayerJobSelectInfo* PlayerSelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerSelectInfo");

	struct
	{
		struct FJobSelectionEntry      Entry;
		class AKSPlayerState*          InPlayerState;
		struct FPlayerJobSelectInfo    PlayerSelectInfo;
		bool                           ReturnValue;
	} params;

	params.Entry = Entry;
	params.InPlayerState = InPlayerState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerSelectInfo != nullptr)
		*PlayerSelectInfo = params.PlayerSelectInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerInfoById
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* UKSUIBlueprintFunctionLibrary::GetPlayerInfoById(class APUMG_HUD* HUD, int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPlayerInfoById");

	struct
	{
		class APUMG_HUD*               HUD;
		int64_t                        PlayerId;
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;

	params.HUD = HUD;
	params.PlayerId = PlayerId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              ContextualPingTypesDT          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetPingIconByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByType");

	struct
	{
		class UDataTable*              ContextualPingTypesDT;
		EPingType                      PingType;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.ContextualPingTypesDT = ContextualPingTypesDT;
	params.PingType = PingType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              ContextualPingMessagesDT       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> PingIcon                       (CPF_Parm, CPF_OutParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetPingIconByMessage(class UDataTable* ContextualPingMessagesDT, EPingMessage PingMessage, TSoftObjectPtr<class UTexture2D>* PingIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingIconByMessage");

	struct
	{
		class UDataTable*              ContextualPingMessagesDT;
		EPingMessage                   PingMessage;
		TSoftObjectPtr<class UTexture2D> PingIcon;
		bool                           ReturnValue;
	} params;

	params.ContextualPingMessagesDT = ContextualPingMessagesDT;
	params.PingMessage = PingMessage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PingIcon != nullptr)
		*PingIcon = params.PingIcon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingColorByType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDataTable*              ContextualPingTypesDT          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            PingColor                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::GetPingColorByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetPingColorByType");

	struct
	{
		class UDataTable*              ContextualPingTypesDT;
		EPingType                      PingType;
		struct FLinearColor            PingColor;
		bool                           ReturnValue;
	} params;

	params.ContextualPingTypesDT = ContextualPingTypesDT;
	params.PingType = PingType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetNewJobId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSUIBlueprintFunctionLibrary::GetNewJobId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetNewJobId");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* UKSUIBlueprintFunctionLibrary::GetLocalPlayerInfo(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo");

	struct
	{
		class APUMG_HUD*               HUD;
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;

	params.HUD = HUD;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKeyForBinding
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Binding                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           SecondaryKey                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           FallbackToDefault              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsGamepadDoubleTap             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FKey UKSUIBlueprintFunctionLibrary::GetKeyForBinding(class APlayerController* PlayerController, const struct FName& Binding, bool SecondaryKey, bool FallbackToDefault, bool IsGamepadDoubleTap)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKeyForBinding");

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   Binding;
		bool                           SecondaryKey;
		bool                           FallbackToDefault;
		bool                           IsGamepadDoubleTap;
		struct FKey                    ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.Binding = Binding;
	params.SecondaryKey = SecondaryKey;
	params.FallbackToDefault = FallbackToDefault;
	params.IsGamepadDoubleTap = IsGamepadDoubleTap;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<int> UKSUIBlueprintFunctionLibrary::GetDigitsFromInt(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt");

	struct
	{
		int                            Value;
		TArray<int>                    ReturnValue;
	} params;

	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetCurrentRogueMasteryLevel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            MasteryLevel                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            CurrentXPProgress              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            XPRequiredForLevel             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSUIBlueprintFunctionLibrary::GetCurrentRogueMasteryLevel(class UKSActivityInstance* ActivityInstance, int* MasteryLevel, int* CurrentXPProgress, int* XPRequiredForLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetCurrentRogueMasteryLevel");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		int                            MasteryLevel;
		int                            CurrentXPProgress;
		int                            XPRequiredForLevel;
	} params;

	params.ActivityInstance = ActivityInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MasteryLevel != nullptr)
		*MasteryLevel = params.MasteryLevel;
	if (CurrentXPProgress != nullptr)
		*CurrentXPProgress = params.CurrentXPProgress;
	if (XPRequiredForLevel != nullptr)
		*XPRequiredForLevel = params.XPRequiredForLevel;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingTypesRowByType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              ContextualPingTypesDT          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingType                      PingType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingTypesRow ContextualPingTypesRow         (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::FindContextualPingTypesRowByType(class UDataTable* ContextualPingTypesDT, EPingType PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingTypesRowByType");

	struct
	{
		class UDataTable*              ContextualPingTypesDT;
		EPingType                      PingType;
		struct FContextualPingTypesRow ContextualPingTypesRow;
		bool                           ReturnValue;
	} params;

	params.ContextualPingTypesDT = ContextualPingTypesDT;
	params.PingType = PingType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingMessagesRowByMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              ContextualPingMessagesDT       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingMessage                   PingMessage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::FindContextualPingMessagesRowByMessage(class UDataTable* ContextualPingMessagesDT, EPingMessage PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.FindContextualPingMessagesRowByMessage");

	struct
	{
		class UDataTable*              ContextualPingMessagesDT;
		EPingMessage                   PingMessage;
		struct FContextualPingMessagesRow ContextualPingMessagesRow;
		bool                           ReturnValue;
	} params;

	params.ContextualPingMessagesDT = ContextualPingMessagesDT;
	params.PingMessage = PingMessage;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DistanceToClosestScreenEdge
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutDistX                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OutDistY                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::DistanceToClosestScreenEdge(class UObject* WorldContextObject, const struct FVector2D& Location, float* OutDistX, float* OutDistY)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DistanceToClosestScreenEdge");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               Location;
		float                          OutDistX;
		float                          OutDistY;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDistX != nullptr)
		*OutDistX = params.OutDistX;
	if (OutDistY != nullptr)
		*OutDistY = params.OutDistY;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DetermineEntryLocalSelectionState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EJobSelectionState             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EJobSelectionState UKSUIBlueprintFunctionLibrary::DetermineEntryLocalSelectionState(const struct FJobSelectionEntry& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DetermineEntryLocalSelectionState");

	struct
	{
		struct FJobSelectionEntry      Entry;
		EJobSelectionState             ReturnValue;
	} params;

	params.Entry = Entry;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidgetWithConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKSSettingsWidgetConfig SettingsWidgetConfig           (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UKSSettingsWidget*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsWidget* UKSUIBlueprintFunctionLibrary::CreateSettingsWidgetWithConfig(class APUMG_HUD* HUD, const struct FKSSettingsWidgetConfig& SettingsWidgetConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidgetWithConfig");

	struct
	{
		class APUMG_HUD*               HUD;
		struct FKSSettingsWidgetConfig SettingsWidgetConfig;
		class UKSSettingsWidget*       ReturnValue;
	} params;

	params.HUD = HUD;
	params.SettingsWidgetConfig = SettingsWidgetConfig;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  SettingsWidgetClass            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSSettingsWidget*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsWidget* UKSUIBlueprintFunctionLibrary::CreateSettingsWidget(class APUMG_HUD* HUD, class UClass* SettingsWidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidget");

	struct
	{
		class APUMG_HUD*               HUD;
		class UClass*                  SettingsWidgetClass;
		class UKSSettingsWidget*       ReturnValue;
	} params;

	params.HUD = HUD;
	params.SettingsWidgetClass = SettingsWidgetClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsPreview
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UClass*                  SettingsPreviewClass           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSSettingsPreview*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSSettingsPreview* UKSUIBlueprintFunctionLibrary::CreateSettingsPreview(class APUMG_HUD* HUD, class UClass* SettingsPreviewClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsPreview");

	struct
	{
		class APUMG_HUD*               HUD;
		class UClass*                  SettingsPreviewClass;
		class UKSSettingsPreview*      ReturnValue;
	} params;

	params.HUD = HUD;
	params.SettingsPreviewClass = SettingsPreviewClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FString                 LeftString                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 RightString                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSUIBlueprintFunctionLibrary::CompareStrings(const struct FString& LeftString, const struct FString& RightString)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings");

	struct
	{
		struct FString                 LeftString;
		struct FString                 RightString;
		int                            ReturnValue;
	} params;

	params.LeftString = LeftString;
	params.RightString = RightString;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UKSUIBlueprintFunctionLibrary::ClearKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanReportServer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::CanReportServer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanReportServer");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanPlayerSelectEntry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FJobSelectionEntry      Entry                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          InPlayerState                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSUIBlueprintFunctionLibrary::CanPlayerSelectEntry(const struct FJobSelectionEntry& Entry, class AKSPlayerState* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CanPlayerSelectEntry");

	struct
	{
		struct FJobSelectionEntry      Entry;
		class AKSPlayerState*          InPlayerState;
		bool                           ReturnValue;
	} params;

	params.Entry = Entry;
	params.InPlayerState = InPlayerState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EKSVendorTypes                 VendorType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UCommonVendorHelper::GetVendorIDFromEnum(EKSVendorTypes VendorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum");

	struct
	{
		EKSVendorTypes                 VendorType;
		int                            ReturnValue;
	} params;

	params.VendorType = VendorType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSViewedItemLabel::UpdateLabelPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSViewedItemLabel::UnbindToViewportResizeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSViewedItemLabel::TriggerLabelPositionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedItemLabel.OnLabelShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSViewedItemLabel::OnLabelShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.OnLabelShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedItemLabel.OnLabelHide
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKSViewedItemLabel::OnLabelHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.OnLabelHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UImage*                  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UImage* UKSViewedItemLabel::GetViewLimitImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage");

	struct
	{
		class UImage*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AActor* UKSViewedItemLabel::GetTrackedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor");

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCanvasPanel* UKSViewedItemLabel::GetOutermostCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel");

	struct
	{
		class UCanvasPanel*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FBox2D                  OutBounds                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSViewedItemLabel::GetOnScreenPositionForLabel(class APlayerController* Player, class AActor* InActor, struct FBox2D* OutBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel");

	struct
	{
		class APlayerController*       Player;
		class AActor*                  InActor;
		struct FBox2D                  OutBounds;
		bool                           ReturnValue;
	} params;

	params.Player = Player;
	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UCanvasPanel* UKSViewedItemLabel::GetLabelCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel");

	struct
	{
		class UCanvasPanel*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSViewedItemLabel::BindToViewportResizeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UKSViewedPawnDamageDisplay::PrimeDamageNumbersWidgetPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   PreviousPhaseName              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnDamageDisplay::HandlePhaseChange(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FCombatEventInfo        DamageInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnDamageDisplay::HandleInstigateDamageNotify(const struct FCombatEventInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify");

	struct
	{
		struct FCombatEventInfo        DamageInfo;
	} params;

	params.DamageInfo = DamageInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleAnimationCompleted
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UDamageNumberDisplayWidget* DamageNumberWidget             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnDamageDisplay::HandleAnimationCompleted(class UDamageNumberDisplayWidget* DamageNumberWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleAnimationCompleted");

	struct
	{
		class UDamageNumberDisplayWidget* DamageNumberWidget;
	} params;

	params.DamageNumberWidget = DamageNumberWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UDamageNumberDisplayWidget* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UDamageNumberDisplayWidget* UKSViewedPawnDamageDisplay::GetDamageNumberWidgetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance");

	struct
	{
		class UDamageNumberDisplayWidget* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSViewedPawnDamageDisplay::ClearDamageNumbersOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  InTargetActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InTetherToEventLocation        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDamageAmount                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InIsSpecialDamage              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSpecialDamageColors    InDamageColors                 (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           InIsLethal                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InIsHeadshot                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDelayWindow                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InStackWait                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InArmorHit                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InDamageReduced                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InDamageResisted               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InDamageShielded               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDamageNumberDisplayWidget::SetDisplayInformation(class AActor* InTargetActor, bool InTetherToEventLocation, float InDamageAmount, bool InIsSpecialDamage, const struct FSpecialDamageColors& InDamageColors, bool InIsLethal, bool InIsHeadshot, float InDelayWindow, float InStackWait, bool InArmorHit, bool InDamageReduced, bool InDamageResisted, bool InDamageShielded)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation");

	struct
	{
		class AActor*                  InTargetActor;
		bool                           InTetherToEventLocation;
		float                          InDamageAmount;
		bool                           InIsSpecialDamage;
		struct FSpecialDamageColors    InDamageColors;
		bool                           InIsLethal;
		bool                           InIsHeadshot;
		float                          InDelayWindow;
		float                          InStackWait;
		bool                           InArmorHit;
		bool                           InDamageReduced;
		bool                           InDamageResisted;
		bool                           InDamageShielded;
	} params;

	params.InTargetActor = InTargetActor;
	params.InTetherToEventLocation = InTetherToEventLocation;
	params.InDamageAmount = InDamageAmount;
	params.InIsSpecialDamage = InIsSpecialDamage;
	params.InDamageColors = InDamageColors;
	params.InIsLethal = InIsLethal;
	params.InIsHeadshot = InIsHeadshot;
	params.InDelayWindow = InDelayWindow;
	params.InStackWait = InStackWait;
	params.InArmorHit = InArmorHit;
	params.InDamageReduced = InDamageReduced;
	params.InDamageResisted = InDamageResisted;
	params.InDamageShielded = InDamageShielded;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.SetContentVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDamageNumberDisplayWidget::SetContentVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.SetContentVisibility");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.PlayNumberAnimation
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDamageNumberDisplayWidget::PlayNumberAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.PlayNumberAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.PlayerIsBlinded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDamageNumberDisplayWidget::PlayerIsBlinded()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.PlayerIsBlinded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentDamageAmount            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FSpecialDamageColors    DamageColors                   (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bChangePosition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UDamageNumberDisplayWidget::OnDisplaySpecialDamageInfo(float CurrentDamageAmount, const struct FSpecialDamageColors& DamageColors, bool bChangePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo");

	struct
	{
		float                          CurrentDamageAmount;
		struct FSpecialDamageColors    DamageColors;
		bool                           bChangePosition;
	} params;

	params.CurrentDamageAmount = CurrentDamageAmount;
	params.DamageColors = DamageColors;
	params.bChangePosition = bChangePosition;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDamageNumberDisplayWidget::OnDisplayInformationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UDamageNumberDisplayWidget::IsDisplayStacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnInventoryWidget::OnUpdatedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnInventoryWidget::OnRemovedPawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot    InventorySlot                  (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnInventoryWidget::OnActivePawnInventorySlot(const struct FPlayerInventorySlot& InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot");

	struct
	{
		struct FPlayerInventorySlot    InventorySlot;
	} params;

	params.InventorySlot = InventorySlot;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            EquipPoint                     (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSViewedPawnInventoryWidget::GetSlotIndex(const struct FGameplayTag& EquipPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex");

	struct
	{
		struct FGameplayTag            EquipPoint;
		int                            ReturnValue;
	} params;

	params.EquipPoint = EquipPoint;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// class UKSPlayerMod*            Mod                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    ModInstance                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSViewedPawnModsWidget::OnViewedPawnModAdded(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded");

	struct
	{
		class UKSPlayerMod*            Mod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.Mod = Mod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UOverlay*                ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UOverlay* UKSViewedPawnModsWidget::GetOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay");

	struct
	{
		class UOverlay*                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSViewRedirector_LocalSetting::DoesLocalSettingApply(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply");

	struct
	{
		class APUMG_HUD*               HUD;
		bool                           ReturnValue;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsTalking                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIsMuted                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSVoiceActivityWidget::OnVoiceParticipantUpdated(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated");

	struct
	{
		struct FString                 AccountId;
		bool                           bIsTalking;
		bool                           bIsMuted;
	} params;

	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSVoiceActivityWidget::OnVoiceParticipantRemoved(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved");

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSVoiceActivityWidget::OnVoiceParticipantAdded(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded");

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UKSVoiceActivityWidget::GetVoiceIdByPlayerId(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId");

	struct
	{
		int64_t                        PlayerId;
		struct FString                 ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 VoiceId                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class AKSPlayerState* UKSVoiceActivityWidget::GetPlayerStateByVoiceId(const struct FString& VoiceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId");

	struct
	{
		struct FString                 VoiceId;
		class AKSPlayerState*          ReturnValue;
	} params;

	params.VoiceId = VoiceId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 VoiceId                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UKSVoiceActivityWidget::GetPlayerIdByVoiceId(const struct FString& VoiceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId");

	struct
	{
		struct FString                 VoiceId;
		int64_t                        ReturnValue;
	} params;

	params.VoiceId = VoiceId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoucherAcquisition.RedeemVouchers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_StoreItem*> VoucherItems                   (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSVoucherAcquisition::RedeemVouchers(TArray<class UPUMG_StoreItem*> VoucherItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoucherAcquisition.RedeemVouchers");

	struct
	{
		TArray<class UPUMG_StoreItem*> VoucherItems;
		bool                           ReturnValue;
	} params;

	params.VoucherItems = VoucherItems;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoucherAcquisition.GetVoucherAcquisitions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UPUMG_StoreItem*> VoucherItems                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> PurchaseItems                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSVoucherAcquisition::GetVoucherAcquisitions(TArray<class UPUMG_StoreItem*>* VoucherItems, TArray<class UPUMG_StoreItem*>* PurchaseItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoucherAcquisition.GetVoucherAcquisitions");

	struct
	{
		TArray<class UPUMG_StoreItem*> VoucherItems;
		TArray<class UPUMG_StoreItem*> PurchaseItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (VoucherItems != nullptr)
		*VoucherItems = params.VoucherItems;
	if (PurchaseItems != nullptr)
		*PurchaseItems = params.PurchaseItems;
}


// Function KillstreakUINew.KSVoucherAcquisition.DisplayVoucherRedemptionFailed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UKSVoucherAcquisition::DisplayVoucherRedemptionFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoucherAcquisition.DisplayVoucherRedemptionFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponComponent*      InWeaponComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWeaponComponentWidget::SetOwningWeaponComponent(class UKSWeaponComponent* InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      InWeaponComponent;
	} params;

	params.InWeaponComponent = InWeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentWidget::PreClearWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentWidget::PostSetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentWidget::OnEndActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentWidget::OnBecomeActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSWeaponComponentWidget::IsWeaponComponentActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSWeaponComponent*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSWeaponComponent* UKSWeaponComponentWidget::GetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentAmmoWidget::StopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWeaponComponentAmmoWidget::StartReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            OldInClip                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldClipSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldReserve                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewInClip                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewClipSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewReserve                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UKSWeaponComponentAmmoWidget::OnAmmoChanged(int OldInClip, int OldClipSize, int OldReserve, int NewInClip, int NewClipSize, int NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged");

	struct
	{
		int                            OldInClip;
		int                            OldClipSize;
		int                            OldReserve;
		int                            NewInClip;
		int                            NewClipSize;
		int                            NewReserve;
	} params;

	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UKSWeaponComponentAmmoWidget::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSWeaponComponentAmmoWidget::GetClipSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSWeaponComponentAmmoWidget::GetAmmoInReserve()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSWeaponComponentAmmoWidget::GetAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWhatsNewModal.UpdateWhatsNewPanels
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UKSWhatsNewModal::UpdateWhatsNewPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.UpdateWhatsNewPanels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKSWhatsNewModal::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.KSWhatsNewModal.GetPanelData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSWhatsNewPanel*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UKSWhatsNewPanel*> UKSWhatsNewModal::GetPanelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.GetPanelData");

	struct
	{
		TArray<class UKSWhatsNewPanel*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWhatsNewModal.GetMaxPanelCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UKSWhatsNewModal::GetMaxPanelCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.GetMaxPanelCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSJsonDataFactory* UKSWhatsNewModal::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory");

	struct
	{
		class UKSJsonDataFactory*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function KillstreakUINew.TickAnimationManager.StopAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::StopAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.StopAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::SkipToEndAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.ResumeAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::ResumeAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.ResumeAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.RemoveAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::RemoveAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.RemoveAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.PlayAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::PlayAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.PlayAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.PauseAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::PauseAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.PauseAnimation");

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.GetAnimationInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTickAnimationParams    OutAnimParams                  (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UTickAnimationManager::GetAnimationInfo(const struct FName& AnimName, struct FTickAnimationParams* OutAnimParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.GetAnimationInfo");

	struct
	{
		struct FName                   AnimName;
		struct FTickAnimationParams    OutAnimParams;
		bool                           ReturnValue;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);

	if (OutAnimParams != nullptr)
		*OutAnimParams = params.OutAnimParams;

	return params.ReturnValue;
}


// Function KillstreakUINew.TickAnimationManager.ApplyTick
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::ApplyTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.ApplyTick");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function KillstreakUINew.TickAnimationManager.AddAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   AnimName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         UpdateEvent                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         FinishedEvent                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UTickAnimationManager::AddAnimation(const struct FName& AnimName, float Duration, const struct FScriptDelegate& UpdateEvent, const struct FScriptDelegate& FinishedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.AddAnimation");

	struct
	{
		struct FName                   AnimName;
		float                          Duration;
		struct FScriptDelegate         UpdateEvent;
		struct FScriptDelegate         FinishedEvent;
	} params;

	params.AnimName = AnimName;
	params.Duration = Duration;
	params.UpdateEvent = UpdateEvent;
	params.FinishedEvent = FinishedEvent;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
