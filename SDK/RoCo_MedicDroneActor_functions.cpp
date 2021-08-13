// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MedicDroneActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MedicDroneActor.MedicDroneActor_C.ShouldDisablePingOutline
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneActor_C::ShouldDisablePingOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ShouldDisablePingOutline");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedicDroneActor.MedicDroneActor_C.ShouldDisablePingTargeting
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneActor_C::ShouldDisablePingTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ShouldDisablePingTargeting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedicDroneActor.MedicDroneActor_C.ShouldNotAffectTargetingReticle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneActor_C::ShouldNotAffectTargetingReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ShouldNotAffectTargetingReticle");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedicDroneActor.MedicDroneActor_C.ShouldSetFriendlyOutlineOnRegister
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool AMedicDroneActor_C::ShouldSetFriendlyOutlineOnRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ShouldSetFriendlyOutlineOnRegister");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MedicDroneActor.MedicDroneActor_C.ShootDart
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::ShootDart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ShootDart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.Play Drone Scan Sound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::Play_Drone_Scan_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.Play Drone Scan Sound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.PlayDroneReviveCompleteSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::PlayDroneReviveCompleteSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.PlayDroneReviveCompleteSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.StopDroneSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::StopDroneSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.StopDroneSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMedicDroneActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMedicDroneActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.EventStartReviveEffects
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMedicDroneActor_C::EventStartReviveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.EventStartReviveEffects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.EventEndReviveEffects
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMedicDroneActor_C::EventEndReviveEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.EventEndReviveEffects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.SetOutlineVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseOutline                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMedicDroneActor_C::SetOutlineVisibility(bool UseOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.SetOutlineVisibility");

	struct
	{
		bool                           UseOutline;
	} params;

	params.UseOutline = UseOutline;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.SetFriendlyOutlineVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseOutline                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AMedicDroneActor_C::SetFriendlyOutlineVisibility(bool UseOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.SetFriendlyOutlineVisibility");

	struct
	{
		bool                           UseOutline;
	} params;

	params.UseOutline = UseOutline;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.UpdateHighlight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::UpdateHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.UpdateHighlight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.SetOutlineColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKSOutlineParameters    OutlineParams                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// int                            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMedicDroneActor_C::SetOutlineColor(bool Enabled, const struct FKSOutlineParameters& OutlineParams, int Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.SetOutlineColor");

	struct
	{
		bool                           Enabled;
		struct FKSOutlineParameters    OutlineParams;
		int                            Color;
	} params;

	params.Enabled = Enabled;
	params.OutlineParams = OutlineParams;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AMedicDroneActor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.RegisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMedicDroneActor_C::RegisterDeployable()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.RegisterDeployable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.UnregisterDeployable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMedicDroneActor_C::UnregisterDeployable(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.UnregisterDeployable");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.OnMissionBegin
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMedicDroneActor_C::OnMissionBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.OnMissionBegin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.EventOngoingReviveEffectsStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMedicDroneActor_C::EventOngoingReviveEffectsStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.EventOngoingReviveEffectsStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MedicDroneActor.MedicDroneActor_C.ExecuteUbergraph_MedicDroneActor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMedicDroneActor_C::ExecuteUbergraph_MedicDroneActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MedicDroneActor.MedicDroneActor_C.ExecuteUbergraph_MedicDroneActor");

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
