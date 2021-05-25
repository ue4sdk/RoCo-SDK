// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Zipline_Pulley_Unhide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Zipline_Pulley_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Zipline Pulley Hide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__bHeadshot__pf             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::WasLastHitHeadshot(bool* bpp__bHeadshot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.WasLastHitHeadshot");

	struct
	{
		bool                           bpp__bHeadshot__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__bHeadshot__pf != nullptr)
		*bpp__bHeadshot__pf = params.bpp__bHeadshot__pf;
}


// Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  bpp__DamageType__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRelatedToThisType__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::VerifyLastHitDamageType(class UClass* bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType");

	struct
	{
		class UClass*                  bpp__DamageType__pf;
		bool                           bpp__IsRelatedToThisType__pf;
	} params;

	params.bpp__DamageType__pf = bpp__DamageType__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__IsRelatedToThisType__pf != nullptr)
		*bpp__IsRelatedToThisType__pf = params.bpp__IsRelatedToThisType__pf;
}


// Function MainCharacter.MainCharacter_C.VerifyLastHitBone
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   bpp__ParentBoneName__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__IsRelatedToThisBone__pf   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::VerifyLastHitBone(const struct FName& bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.VerifyLastHitBone");

	struct
	{
		struct FName                   bpp__ParentBoneName__pf;
		bool                           bpp__IsRelatedToThisBone__pf;
	} params;

	params.bpp__ParentBoneName__pf = bpp__ParentBoneName__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__IsRelatedToThisBone__pf != nullptr)
		*bpp__IsRelatedToThisBone__pf = params.bpp__IsRelatedToThisBone__pf;
}


// Function MainCharacter.MainCharacter_C.UserConstructionScript
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Update Flash Bang PP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Update_Flash_Bang_PP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Update Flash Bang PP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Update Action Camera
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__CameraxRotation__pfT      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__UsesxRotation__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__CameraxOffset__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Update_Action_Camera(const struct FVector& bpp__CameraxRotation__pfT, bool bpp__UsesxRotation__pfT, const struct FVector& bpp__CameraxOffset__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Update Action Camera");

	struct
	{
		struct FVector                 bpp__CameraxRotation__pfT;
		bool                           bpp__UsesxRotation__pfT;
		struct FVector                 bpp__CameraxOffset__pfT;
	} params;

	params.bpp__CameraxRotation__pfT = bpp__CameraxRotation__pfT;
	params.bpp__UsesxRotation__pfT = bpp__UsesxRotation__pfT;
	params.bpp__CameraxOffset__pfT = bpp__CameraxOffset__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsGrounded__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::UpdateRagdollOnGround(bool bpp__IsGrounded__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround");

	struct
	{
		bool                           bpp__IsGrounded__pf;
	} params;

	params.bpp__IsGrounded__pf = bpp__IsGrounded__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UpdateRagdollMeshLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdateRagdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::UpdateRagdoll(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateRagdoll");

	struct
	{
		float                          bpp__DeltaSeconds__pf;
	} params;

	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdatePlayerState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            bpp__Player__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::UpdatePlayerState(class APlayerState* bpp__Player__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdatePlayerState");

	struct
	{
		class APlayerState*            bpp__Player__pf;
	} params;

	params.bpp__Player__pf = bpp__Player__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdateHealthPP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UpdateHealthPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateHealthPP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UpdateDebugHealthVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UnhideZiplinePulley
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UnhideZiplinePulley()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UnhideZiplinePulley");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.UnhideUplineDevice
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::UnhideUplineDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.UnhideUplineDevice");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable)

void AMainCharacter_C::TurnOffCapsulePhysics_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::TurnOffCapsulePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Transition To Main Camera
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Transition_To_Main_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Transition To Main Camera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Transition To ADS Camera
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Transition_To_ADS_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Transition To ADS Camera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SwitchToSnapshotPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.StopReviveSFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::StopReviveSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StopReviveSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.StopLowHealthSFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::StopLowHealthSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StopLowHealthSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Start_Viewed_Down_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Start Viewed Down Hit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::StartImmunity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::StartImmunity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.StartHacking
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::StartHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.StartHacking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::SprintFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::SprintFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ShowDebugLocation
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__bVisible__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ShowDebugLocation(bool bpp__bVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ShowDebugLocation");

	struct
	{
		bool                           bpp__bVisible__pf;
	} params;

	params.bpp__bVisible__pf = bpp__bVisible__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__bShouldRagdoll__pf        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll");

	struct
	{
		bool                           bpp__bShouldRagdoll__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__bShouldRagdoll__pf != nullptr)
		*bpp__bShouldRagdoll__pf = params.bpp__bShouldRagdoll__pf;
}


// Function MainCharacter.MainCharacter_C.SFXStateChangeReset
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXStateChangeReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXStateChangeReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXStateChangeMax
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXStateChangeMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXStateChangeMax");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXStateChangeHalf
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXStateChangeHalf()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXStateChangeHalf");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXRingHalfSTOP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXRingHalfSTOP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXRingHalfSTOP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXRingHalfPlay
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXRingHalfPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXRingHalfPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXRingFullSTOP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXRingFullSTOP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXRingFullSTOP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SFXRingFullPlay
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::SFXRingFullPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SFXRingFullPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Set up ADS Blur Dynamic Material
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Set_up_ADS_Blur_Dynamic_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Set up ADS Blur Dynamic Material");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Set_Health_SFX_RTPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Set Health SFX RTPC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Setup_Debug_Info_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Setup Debug Info Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__Health__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::SetPostProcessHealthValue(float bpp__Health__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue");

	struct
	{
		float                          bpp__Health__pf;
	} params;

	params.bpp__Health__pf = bpp__Health__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__HitxTarget__pfT           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__RTPCxActor__pfT           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::SetHitTargetArmorLevelRTPC(class AActor* bpp__HitxTarget__pfT, class AActor* bpp__RTPCxActor__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC");

	struct
	{
		class AActor*                  bpp__HitxTarget__pfT;
		class AActor*                  bpp__RTPCxActor__pfT;
	} params;

	params.bpp__HitxTarget__pfT = bpp__HitxTarget__pfT;
	params.bpp__RTPCxActor__pfT = bpp__RTPCxActor__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.RestoreNormalCamera
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::RestoreNormalCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.RestoreNormalCamera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::ReevaluateDebugWidgetAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ReceiveTick
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReceiveTick");

	struct
	{
		float                          bpp__DeltaSeconds__pf;
	} params;

	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageEffect           bpp__Effect__pf                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Play_Viewed_Sonar_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit");

	struct
	{
		struct FDamageEffect           bpp__Effect__pf;
	} params;

	params.bpp__Effect__pf = bpp__Effect__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageEffect           bpp__Effect__pf                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Play_Viewed_EMP_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit");

	struct
	{
		struct FDamageEffect           bpp__Effect__pf;
	} params;

	params.bpp__Effect__pf = bpp__Effect__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageEffect           bpp__Effect__pf                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Play_Viewed_Blood_Hit(const struct FDamageEffect& bpp__Effect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit");

	struct
	{
		struct FDamageEffect           bpp__Effect__pf;
	} params;

	params.bpp__Effect__pf = bpp__Effect__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Target_Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Target_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Instigator_Front()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Play_Martial_Artist_Instigator_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayReviveSFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::PlayReviveSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayReviveSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayPickupFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  bpp__ItemActor__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayPickupFX(class AActor* bpp__ItemActor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayPickupFX");

	struct
	{
		class AActor*                  bpp__ItemActor__pf;
	} params;

	params.bpp__ItemActor__pf = bpp__ItemActor__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayHitMarkerSFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        bpp__CombatEventInfo__pf       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayHitMarkerSFX(const struct FCombatEventInfo& bpp__CombatEventInfo__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitMarkerSFX");

	struct
	{
		struct FCombatEventInfo        bpp__CombatEventInfo__pf;
	} params;

	params.bpp__CombatEventInfo__pf = bpp__CombatEventInfo__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageEffect           bpp__Effect__pf__const         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayHitFromRadialDamage(const struct FDamageEffect& bpp__Effect__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage");

	struct
	{
		struct FDamageEffect           bpp__Effect__pf__const;
	} params;

	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FDamageEffect           bpp__Effect__pf__const         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayHitFromPointDamage(const struct FDamageEffect& bpp__Effect__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage");

	struct
	{
		struct FDamageEffect           bpp__Effect__pf__const;
	} params;

	params.bpp__Effect__pf__const = bpp__Effect__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayHitBySFX
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FDamageEffect           bpp__DamageEffect__pf          (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayHitBySFX(const struct FDamageEffect& bpp__DamageEffect__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayHitBySFX");

	struct
	{
		struct FDamageEffect           bpp__DamageEffect__pf;
	} params;

	params.bpp__DamageEffect__pf = bpp__DamageEffect__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayerRevived
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__Revivee__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerRevived(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerRevived");

	struct
	{
		class AKSPlayerState*          bpp__Revivee__pf;
		class AKSPlayerState*          bpp__Reviver__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayerDown
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        bpp__EventInfo__pf             (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerDown(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerDown");

	struct
	{
		struct FCombatEventInfo        bpp__EventInfo__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayerDeath
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FCombatEventInfo        bpp__EventInfo__pf             (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerDeath(const struct FCombatEventInfo& bpp__EventInfo__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayerDeath");

	struct
	{
		struct FCombatEventInfo        bpp__EventInfo__pf;
	} params;

	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayDownPPOnce
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::PlayDownPPOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayDownPPOnce");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   bpp__SequenceName__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayActionCameraSequence(const struct FName& bpp__SequenceName__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.PlayActionCameraSequence");

	struct
	{
		struct FName                   bpp__SequenceName__pf;
	} params;

	params.bpp__SequenceName__pf = bpp__SequenceName__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsZiplining__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnZiplineChangeForFov(bool bpp__IsZiplining__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov");

	struct
	{
		bool                           bpp__IsZiplining__pf;
	} params;

	params.bpp__IsZiplining__pf = bpp__IsZiplining__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::On_Shoulder_Swap_Changed_Event(class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.On Anim Initialized
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::On_Anim_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.On Anim Initialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnUnhovered
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__ExtraTime__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnUnhovered(float bpp__ExtraTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnUnhovered");

	struct
	{
		float                          bpp__ExtraTime__pf;
	} params;

	params.bpp__ExtraTime__pf = bpp__ExtraTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnStartSkydive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnStartSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnStartSkydive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsSprinting__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnSprintChangedCallback(bool bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnSprintChangedCallback");

	struct
	{
		bool                           bpp__IsSprinting__pf;
	} params;

	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnReviveStart
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AKSCharacter*            bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__ReviveTime__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Remote__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnReviveStart(class AKSCharacter* bpp__Reviver__pf, float bpp__ReviveTime__pf, bool bpp__Remote__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveStart");

	struct
	{
		class AKSCharacter*            bpp__Reviver__pf;
		float                          bpp__ReviveTime__pf;
		bool                           bpp__Remote__pf;
	} params;

	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ReviveTime__pf = bpp__ReviveTime__pf;
	params.bpp__Remote__pf = bpp__Remote__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnReviveInterrupt
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AKSCharacter*            bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnReviveInterrupt(class AKSCharacter* bpp__Reviver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveInterrupt");

	struct
	{
		class AKSCharacter*            bpp__Reviver__pf;
	} params;

	params.bpp__Reviver__pf = bpp__Reviver__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnReviveComplete
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AKSCharacter*            bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnReviveComplete(class AKSCharacter* bpp__Reviver__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnReviveComplete");

	struct
	{
		class AKSCharacter*            bpp__Reviver__pf;
	} params;

	params.bpp__Reviver__pf = bpp__Reviver__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsPowerSliding__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnPowerSlideChangedCallback(bool bpp__IsPowerSliding__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback");

	struct
	{
		bool                           bpp__IsPowerSliding__pf;
	} params;

	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnLanded
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FHitResult              bpp__Hit__pf__const            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnLanded(const struct FHitResult& bpp__Hit__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnLanded");

	struct
	{
		struct FHitResult              bpp__Hit__pf__const;
	} params;

	params.bpp__Hit__pf__const = bpp__Hit__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnItemPickedUp_Event_1
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSItemDrop*             bpp__ItemDrop__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSItem*                 bpp__Item__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnItemPickedUp_Event_1(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnItemPickedUp_Event_1");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
		class AKSItemDrop*             bpp__ItemDrop__pf;
		class UKSItem*                 bpp__Item__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__ItemDrop__pf = bpp__ItemDrop__pf;
	params.bpp__Item__pf = bpp__Item__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnImmuneStart
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnImmuneStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnImmuneStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnImmuneEnd
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnImmuneEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnImmuneEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnHovered
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnHealthChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf__const      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnHealthChanged(class AKSCharacterBase* bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnHealthChanged");

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf__const;
	} params;

	params.bpp__Character__pf__const = bpp__Character__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnGenderChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnGenderChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnGenderChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnGadgetSwapped
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnGadgetSwapped()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnGadgetSwapped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnFlashEffectStarted
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnFlashEffectStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnFlashEffectStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnFlashEffectEnded
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnFlashEffectEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnFlashEffectEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnFlashBangHit
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EFlashBangIntensity            bpp__Intensity__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnFlashBangHit(EFlashBangIntensity bpp__Intensity__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnFlashBangHit");

	struct
	{
		EFlashBangIntensity            bpp__Intensity__pf;
	} params;

	params.bpp__Intensity__pf = bpp__Intensity__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnFieldOfViewModChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnEndZiplineRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnEndSkydive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnEndSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndSkydive");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnEndPowerSlide
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EKSPowerSlideEndReason         bpp__EndReason__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnEndPowerSlide(EKSPowerSlideEndReason bpp__EndReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndPowerSlide");

	struct
	{
		EKSPowerSlideEndReason         bpp__EndReason__pf;
	} params;

	params.bpp__EndReason__pf = bpp__EndReason__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnEndOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnEndOutOfBounds");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsDodgeRolling__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnDodgeRollChangedEvent(bool bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent");

	struct
	{
		bool                           bpp__IsDodgeRolling__pf;
	} params;

	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnBeginZiplineRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnBeginPowerSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginPowerSlide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnBeginOutOfBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnArmorInteractStart
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__InteractTime__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnArmorInteractStart(float bpp__InteractTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnArmorInteractStart");

	struct
	{
		float                          bpp__InteractTime__pf;
	} params;

	params.bpp__InteractTime__pf = bpp__InteractTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnArmorInteractInterrupt
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnArmorInteractInterrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnArmorInteractInterrupt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnArmorInteractComplete
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::OnArmorInteractComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnArmorInteractComplete");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.OnADSBlurSettingChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::OnADSBlurSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.OnADSBlurSettingChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::NoseDiveFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::NoseDiveFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bEnterNoseDive__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__AnimLength__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::NoseDiveCameraTransition(bool bpp__bEnterNoseDive__pf, float bpp__AnimLength__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition");

	struct
	{
		bool                           bpp__bEnterNoseDive__pf;
		float                          bpp__AnimLength__pf;
	} params;

	params.bpp__bEnterNoseDive__pf = bpp__bEnterNoseDive__pf;
	params.bpp__AnimLength__pf = bpp__AnimLength__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Target_Front__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Target_Front__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Target_Back__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Target_Back__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Instigator_Front__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Instigator_Front__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Instigator_Back__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Martial_Artist_Instigator_Back__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.LandingRollEvent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsDodgeRolling__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::LandingRollEvent(bool bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.LandingRollEvent");

	struct
	{
		bool                           bpp__IsDodgeRolling__pf;
	} params;

	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 bpp__InBoomPosition__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__OutBoomPosition__pf       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::KeepActionCameraAboveWater(const struct FVector& bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater");

	struct
	{
		struct FVector                 bpp__InBoomPosition__pf;
		struct FVector                 bpp__OutBoomPosition__pf;
	} params;

	params.bpp__InBoomPosition__pf = bpp__InBoomPosition__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__OutBoomPosition__pf != nullptr)
		*bpp__OutBoomPosition__pf = params.bpp__OutBoomPosition__pf;
}


// Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<EMovementMode>     bpp__PrevMovementMode__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EMovementMode>     bpp__NewMovementMode__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  bpp__PrevCustomMode__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  bpp__NewCustomMode__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> bpp__PrevMovementMode__pf, TEnumAsByte<EMovementMode> bpp__NewMovementMode__pf, unsigned char bpp__PrevCustomMode__pf, unsigned char bpp__NewCustomMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged");

	struct
	{
		TEnumAsByte<EMovementMode>     bpp__PrevMovementMode__pf;
		TEnumAsByte<EMovementMode>     bpp__NewMovementMode__pf;
		unsigned char                  bpp__PrevCustomMode__pf;
		unsigned char                  bpp__NewCustomMode__pf;
	} params;

	params.bpp__PrevMovementMode__pf = bpp__PrevMovementMode__pf;
	params.bpp__NewMovementMode__pf = bpp__NewMovementMode__pf;
	params.bpp__PrevCustomMode__pf = bpp__PrevCustomMode__pf;
	params.bpp__NewCustomMode__pf = bpp__NewCustomMode__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class APlayerController*       bpp__PC__pf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::K2_OnEndViewTarget(class APlayerController* bpp__PC__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget");

	struct
	{
		class APlayerController*       bpp__PC__pf;
	} params;

	params.bpp__PC__pf = bpp__PC__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class APlayerController*       bpp__PC__pf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::K2_OnBecomeViewTarget(class APlayerController* bpp__PC__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget");

	struct
	{
		class APlayerController*       bpp__PC__pf;
	} params;

	params.bpp__PC__pf = bpp__PC__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          bpp__AxisValue__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float bpp__AxisValue__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1");

	struct
	{
		float                          bpp__AxisValue__pf;
	} params;

	params.bpp__AxisValue__pf = bpp__AxisValue__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          bpp__AxisValue__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2(float bpp__AxisValue__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2");

	struct
	{
		float                          bpp__AxisValue__pf;
	} params;

	params.bpp__AxisValue__pf = bpp__AxisValue__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FKey                    bpp__Key__pf                   (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& bpp__Key__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1");

	struct
	{
		struct FKey                    bpp__Key__pf;
	} params;

	params.bpp__Key__pf = bpp__Key__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.InitializeHealthPP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::InitializeHealthPP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.InitializeHealthPP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.HideZiplinePulley
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::HideZiplinePulley()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HideZiplinePulley");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.HideUplineDevice
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::HideUplineDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HideUplineDevice");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.HealthRegenerationStopped
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__bFullyHealed__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::HealthRegenerationStopped(bool bpp__bFullyHealed__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HealthRegenerationStopped");

	struct
	{
		bool                           bpp__bFullyHealed__pf;
	} params;

	params.bpp__bFullyHealed__pf = bpp__bFullyHealed__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.HealthRegenerationStarted
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::HealthRegenerationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.HealthRegenerationStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Handle_Downed_Ragdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   bpp__Tag__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UCameraComponent*        bpp__CameraxComponent__pfT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Get_ADS_Camera_By_Tag(const struct FName& bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag");

	struct
	{
		struct FName                   bpp__Tag__pf;
		class UCameraComponent*        bpp__CameraxComponent__pfT;
	} params;

	params.bpp__Tag__pf = bpp__Tag__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;
}


// Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UCameraComponent*        bpp__CameraxComponent__pfT     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component");

	struct
	{
		class UCameraComponent*        bpp__CameraxComponent__pfT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__CameraxComponent__pfT != nullptr)
		*bpp__CameraxComponent__pfT = params.bpp__CameraxComponent__pfT;
}


// Function MainCharacter.MainCharacter_C.GetTargetFov
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__TargetFov__pf             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetTargetFov(float* bpp__TargetFov__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetTargetFov");

	struct
	{
		float                          bpp__TargetFov__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__TargetFov__pf != nullptr)
		*bpp__TargetFov__pf = params.bpp__TargetFov__pf;
}


// Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  bpp__HitxTarget__pfT           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ArmorxLevel__pfT          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetTargetArmorLevel(class AActor* bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetTargetArmorLevel");

	struct
	{
		class AActor*                  bpp__HitxTarget__pfT;
		int                            bpp__ArmorxLevel__pfT;
	} params;

	params.bpp__HitxTarget__pfT = bpp__HitxTarget__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ArmorxLevel__pfT != nullptr)
		*bpp__ArmorxLevel__pfT = params.bpp__ArmorxLevel__pfT;
}


// Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__IsUp__pf                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetRagdollFacingDirection(bool* bpp__IsUp__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection");

	struct
	{
		bool                           bpp__IsUp__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__IsUp__pf != nullptr)
		*bpp__IsUp__pf = params.bpp__IsUp__pf;
}


// Function MainCharacter.MainCharacter_C.GetLastHitDistance
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__OutDistance__pf           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetLastHitDistance(float* bpp__OutDistance__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetLastHitDistance");

	struct
	{
		float                          bpp__OutDistance__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__OutDistance__pf != nullptr)
		*bpp__OutDistance__pf = params.bpp__OutDistance__pf;
}


// Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAnimMontage*            bpp__OutAnimMontage__pf        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage");

	struct
	{
		class UAnimMontage*            bpp__OutAnimMontage__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__OutAnimMontage__pf != nullptr)
		*bpp__OutAnimMontage__pf = params.bpp__OutAnimMontage__pf;
}


// Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UAnimSequence*           bpp__OutAnimSequence__pf       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation");

	struct
	{
		class UAnimSequence*           bpp__OutAnimSequence__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__OutAnimSequence__pf != nullptr)
		*bpp__OutAnimSequence__pf = params.bpp__OutAnimSequence__pf;
}


// Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::FreeFall_Camera_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.FreeFall Camera Burst");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Finish Action Camera Update
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Finish_Action_Camera_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Finish Action Camera Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.FinishHacking
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::FinishHacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.FinishHacking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_NetMulticast, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::ExitDownedRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExitDownedRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_8
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_8(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_8");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_66
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_66(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_66");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_60
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_60(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_60");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_43
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_43(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_43");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_42
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_42(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_42");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_15
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_15(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_15");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_136
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_136(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_136");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_135
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ExecuteUbergraph_MainCharacter_135(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_135");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__Enabled__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::EventSetupCamerasForSpectator(bool bpp__Enabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator");

	struct
	{
		bool                           bpp__Enabled__pf;
	} params;

	params.bpp__Enabled__pf = bpp__Enabled__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::EnterFreeFallFOVTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::EnterFreeFallFOVTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::EnterDownedRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EnterDownedRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.End Down PP
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::End_Down_PP()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.End Down PP");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::EndImmunity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::EndImmunity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DoSetOnFire
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::DoSetOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoSetOnFire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DoExtinguishFire
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::DoExtinguishFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoExtinguishFire");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::DoBindZiplineEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindZiplineEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DoBindSprintEvents
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::DoBindSprintEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindSprintEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::DoBindDodgeRollEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__HitDirection__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EHitEnum                       bpp__SideHit__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                bpp__ActorRotation__pf         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::DetermineKnockbackFacing(const struct FVector& bpp__HitDirection__pf, EHitEnum bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing");

	struct
	{
		struct FVector                 bpp__HitDirection__pf;
		EHitEnum                       bpp__SideHit__pf;
		struct FRotator                bpp__ActorRotation__pf;
	} params;

	params.bpp__HitDirection__pf = bpp__HitDirection__pf;
	params.bpp__SideHit__pf = bpp__SideHit__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ActorRotation__pf != nullptr)
		*bpp__ActorRotation__pf = params.bpp__ActorRotation__pf;
}


// Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::DetachSkydiveParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DetachSkydiveParticle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 bpp__BreakingLocation__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__BreakingDirection__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__BreakingNormal__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::DestructibleSpeedGateOverlappedEvent(const struct FVector& bpp__BreakingLocation__pf, const struct FVector& bpp__BreakingDirection__pf, const struct FVector& bpp__BreakingNormal__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent");

	struct
	{
		struct FVector                 bpp__BreakingLocation__pf;
		struct FVector                 bpp__BreakingDirection__pf;
		struct FVector                 bpp__BreakingNormal__pf;
	} params;

	params.bpp__BreakingLocation__pf = bpp__BreakingLocation__pf;
	params.bpp__BreakingDirection__pf = bpp__BreakingDirection__pf;
	params.bpp__BreakingNormal__pf = bpp__BreakingNormal__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.DeathStateChange
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::DeathStateChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.DeathStateChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Check Low Health
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Check_Low_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Check Low Health");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::CheckFlashBangOnViewTargetChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Camera_Boom_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::Camera_Boom_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::CameraDodgeRoll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
// (FUNC_Native, FUNC_Public)

void AMainCharacter_C::CameraDodgeRoll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
// (FUNC_Net, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_BlueprintCallable)

void AMainCharacter_C::CacheRagdollPelvisLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::BlueprintOnStopSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
// (FUNC_Native, FUNC_Event, FUNC_Public)

void AMainCharacter_C::BlueprintOnStartSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AMainCharacter_C::BlueprintHandleDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BlueprintHandleDeath");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MainCharacter.MainCharacter_C.BindADSBlurSetting
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::BindADSBlurSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.BindADSBlurSetting");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.Audio_Init
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AMainCharacter_C::Audio_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.Audio_Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__UpdateTargetRotation__pf  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__AffectCapsule__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::ApplyLastHitImpulse(bool bpp__UpdateTargetRotation__pf, bool bpp__AffectCapsule__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse");

	struct
	{
		bool                           bpp__UpdateTargetRotation__pf;
		bool                           bpp__AffectCapsule__pf;
	} params;

	params.bpp__UpdateTargetRotation__pf = bpp__UpdateTargetRotation__pf;
	params.bpp__AffectCapsule__pf = bpp__AffectCapsule__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__Revivee__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          bpp__Reviver__pf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerReviveDelegate__DelegateSignature(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature");

	struct
	{
		class AKSPlayerState*          bpp__Revivee__pf;
		class AKSPlayerState*          bpp__Reviver__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__Revivee__pf = bpp__Revivee__pf;
	params.bpp__Reviver__pf = bpp__Reviver__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FCombatEventInfo        bpp__EventInfo__pf             (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// int                            bpp__ExpBonus__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerDownInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature");

	struct
	{
		struct FCombatEventInfo        bpp__EventInfo__pf;
		int                            bpp__ExpBonus__pf;
	} params;

	params.bpp__EventInfo__pf = bpp__EventInfo__pf;
	params.bpp__ExpBonus__pf = bpp__ExpBonus__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FCombatEventInfo        bpp__EventInfo__pf             (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::PlayerDeathInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature");

	struct
	{
		struct FCombatEventInfo        bpp__EventInfo__pf;
	} params;

	params.bpp__EventInfo__pf = bpp__EventInfo__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__IsSprinting__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnSprintChanged__DelegateSignature(bool bpp__IsSprinting__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature");

	struct
	{
		bool                           bpp__IsSprinting__pf;
	} params;

	params.bpp__IsSprinting__pf = bpp__IsSprinting__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnShoulderSwapChanged__DelegateSignature(class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__IsPowerSliding__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnPowerSlideChanged__DelegateSignature(bool bpp__IsPowerSliding__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature");

	struct
	{
		bool                           bpp__IsPowerSliding__pf;
	} params;

	params.bpp__IsPowerSliding__pf = bpp__IsPowerSliding__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class APlayerState*            bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnPlayerStateChanged__DelegateSignature(class APlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature");

	struct
	{
		class APlayerState*            bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnItemPickedUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSItemDrop*             bpp__ItemDrop__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSItem*                 bpp__Item__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnItemPickedUp__DelegateSignature(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnItemPickedUp__DelegateSignature");

	struct
	{
		class AKSCharacter*            bpp__Character__pf;
		class AKSItemDrop*             bpp__ItemDrop__pf;
		class UKSItem*                 bpp__Item__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;
	params.bpp__ItemDrop__pf = bpp__ItemDrop__pf;
	params.bpp__Item__pf = bpp__Item__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature");

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void AMainCharacter_C::OnGoDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void AMainCharacter_C::OnEndZipline__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__IsDodgeRolling__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AMainCharacter_C::OnDodgeRollChanged__DelegateSignature(bool bpp__IsDodgeRolling__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature");

	struct
	{
		bool                           bpp__IsDodgeRolling__pf;
	} params;

	params.bpp__IsDodgeRolling__pf = bpp__IsDodgeRolling__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnDeathStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void AMainCharacter_C::OnDeathStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnDeathStateChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void AMainCharacter_C::OnBeginZipline__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction MainCharacter.MainCharacter_C.OnAnimInitialized__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void AMainCharacter_C::OnAnimInitialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MainCharacter.MainCharacter_C.OnAnimInitialized__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
