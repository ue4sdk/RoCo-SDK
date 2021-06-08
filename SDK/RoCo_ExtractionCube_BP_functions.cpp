// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExtractionCube_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExtractionCube_BP.ExtractionCube_BP_C.ResetVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ResetVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ResetVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.OnObjectiveStateChangedEvent
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::OnObjectiveStateChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.OnObjectiveStateChangedEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.GetLocalTeamType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EExtractionTeamType            TeamType                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::GetLocalTeamType(EExtractionTeamType* TeamType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.GetLocalTeamType");

	struct
	{
		EExtractionTeamType            TeamType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TeamType != nullptr)
		*TeamType = params.TeamType;
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_1__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Timeline_1__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Play
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Audio_Capture_Point_Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Success_Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Audio_Capture_Point_Success_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Success_Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Dehack_Stop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Audio_Capture_Point_Dehack_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Audio_Capture_Point_Dehack_Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveStopAllSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveStopAllSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveStopAllSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveIdleSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveIdleSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveIdleSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmingStartSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveArmingStartSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmingStartSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmingCanceledSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveArmingCanceledSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmingCanceledSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveArmedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveArmedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmingStartSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveDisarmingStartSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmingStartSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmedCanceledSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveDisarmedCanceledSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmedCanceledSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveDisarmedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveDisarmedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveExplosionSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ObjectiveExplosionSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ObjectiveExplosionSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.SFXResetDoOnce
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::SFXResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.SFXResetDoOnce");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.HackedPhaseTimerTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewTruncatedSeconds            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::HackedPhaseTimerTick(float NewTruncatedSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.HackedPhaseTimerTick");

	struct
	{
		float                          NewTruncatedSeconds;
	} params;

	params.NewTruncatedSeconds = NewTruncatedSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.SFXResetPhaseTimerTickDoOnce
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::SFXResetPhaseTimerTickDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.SFXResetPhaseTimerTickDoOnce");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.HandleNewState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::HandleNewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.HandleNewState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeLiquidMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ChangeLiquidMaterial(class UMaterialInterface* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeLiquidMaterial");

	struct
	{
		class UMaterialInterface*      NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Active
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Visual_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Active");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Hacking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Visual_Hacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Hacking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Idle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Visual_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Visual_Idle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.LocalHoverStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsHovered                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AExtractionCube_BP_C::LocalHoverStateChanged(bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.LocalHoverStateChanged");

	struct
	{
		bool                           bIsHovered;
	} params;

	params.bIsHovered = bIsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.OnViewTargetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OldViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  NewViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::OnViewTargetChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.OnViewTargetChanged");

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


// Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.EnableHackVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::EnableHackVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.EnableHackVFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.DisableHackVFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::DisableHackVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.DisableHackVFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.UpdateColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::UpdateColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.UpdateColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.Explode VFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::Explode_VFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.Explode VFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ResetColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AExtractionCube_BP_C::ResetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ResetColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeScreenMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ChangeScreenMaterial(class UMaterialInterface* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeScreenMaterial");

	struct
	{
		class UMaterialInterface*      NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeCubeMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ChangeCubeMaterial(class UMaterialInterface* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ChangeCubeMaterial");

	struct
	{
		class UMaterialInterface*      NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function ExtractionCube_BP.ExtractionCube_BP_C.ExecuteUbergraph_ExtractionCube_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AExtractionCube_BP_C::ExecuteUbergraph_ExtractionCube_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtractionCube_BP.ExtractionCube_BP_C.ExecuteUbergraph_ExtractionCube_BP");

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
