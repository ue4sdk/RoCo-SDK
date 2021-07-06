// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PointObjectiveMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointObjectiveMarker.PointObjectiveMarker_C.IsKOTHGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsKOTHGameState                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointObjectiveMarker_C::IsKOTHGameState(bool* IsKOTHGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.IsKOTHGameState");

	struct
	{
		bool                           IsKOTHGameState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsKOTHGameState != nullptr)
		*IsKOTHGameState = params.IsKOTHGameState;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.PlayerIsBlinded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsBlinded                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointObjectiveMarker_C::PlayerIsBlinded(bool* IsBlinded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.PlayerIsBlinded");

	struct
	{
		bool                           IsBlinded;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsBlinded != nullptr)
		*IsBlinded = params.IsBlinded;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointScoreProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::UpdateControlPointScoreProgress(class AKSControlPoint* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointScoreProgress");

	struct
	{
		class AKSControlPoint*         Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointCaptureProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::UpdateControlPointCaptureProgress(class AKSControlPoint* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointCaptureProgress");

	struct
	{
		class AKSControlPoint*         Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::UpdateControlPointState(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateControlPointState");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetContestedColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPointObjectiveMarkerTeamState ObjectiveState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            ContestedColor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::SetContestedColor(EPointObjectiveMarkerTeamState ObjectiveState, struct FLinearColor* ContestedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetContestedColor");

	struct
	{
		EPointObjectiveMarkerTeamState ObjectiveState;
		struct FLinearColor            ContestedColor;
	} params;

	params.ObjectiveState = ObjectiveState;

	UObject::ProcessEvent(fn, &params);

	if (ContestedColor != nullptr)
		*ContestedColor = params.ContestedColor;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.GetOwningTeamColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            OwningTeamColor                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            OpposingTeamColor              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::GetOwningTeamColor(class AKSObjectiveBase* Objective, struct FLinearColor* OwningTeamColor, struct FLinearColor* OpposingTeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.GetOwningTeamColor");

	struct
	{
		class AKSObjectiveBase*        Objective;
		struct FLinearColor            OwningTeamColor;
		struct FLinearColor            OpposingTeamColor;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);

	if (OwningTeamColor != nullptr)
		*OwningTeamColor = params.OwningTeamColor;
	if (OpposingTeamColor != nullptr)
		*OpposingTeamColor = params.OpposingTeamColor;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Update
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UPointObjectiveMarker_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Update");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Get Neutral Color
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Opacity                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::Get_Neutral_Color(float Opacity, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Get Neutral Color");

	struct
	{
		float                          Opacity;
		struct FLinearColor            Return_Value;
	} params;

	params.Opacity = Opacity;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewSetCaptureProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressPercent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::ViewSetCaptureProgress(float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewSetCaptureProgress");

	struct
	{
		float                          ProgressPercent;
	} params;

	params.ProgressPercent = ProgressPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetScreenRegion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion        ScreenRegion                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::SetScreenRegion(EIconMarkerScreenRegion ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetScreenRegion");

	struct
	{
		EIconMarkerScreenRegion        ScreenRegion;
	} params;

	params.ScreenRegion = ScreenRegion;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetArrowAngle
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::SetArrowAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetArrowAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerValue
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          TimerSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::ViewApplyTimerValue(float TimerSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerValue");

	struct
	{
		float                          TimerSeconds;
	} params;

	params.TimerSeconds = TimerSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateMetersAway
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Meters                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::UpdateMetersAway(int Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateMetersAway");

	struct
	{
		int                            Meters;
	} params;

	params.Meters = Meters;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPointObjectiveMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateOpacityWhenAiming
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointObjectiveMarker_C::UpdateOpacityWhenAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateOpacityWhenAiming");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.OnControlTeamScoreUpdated_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointObjectiveMarker_C::OnControlTeamScoreUpdated_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.OnControlTeamScoreUpdated_2");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateTimerView
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointObjectiveMarker_C::UpdateTimerView()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.UpdateTimerView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerPrioritiesChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPointObjectiveMarker_C::ViewApplyTimerPrioritiesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyTimerPrioritiesChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.SetView
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FKSPointObjectiveMarkerViewState ViewState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPointObjectiveMarker_C::SetView(const struct FKSPointObjectiveMarkerViewState& ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.SetView");

	struct
	{
		struct FKSPointObjectiveMarkerViewState ViewState;
	} params;

	params.ViewState = ViewState;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.OnCapturingTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::OnCapturingTeamChanged(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.OnCapturingTeamChanged");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.OnOwningTeamChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSControlPoint*         ControlPoint                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::OnOwningTeamChanged(class AKSControlPoint* ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.OnOwningTeamChanged");

	struct
	{
		class AKSControlPoint*         ControlPoint;
	} params;

	params.ControlPoint = ControlPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyObjectiveProgress
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          TimerSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalTimerSeconds              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::ViewApplyObjectiveProgress(float TimerSeconds, float TotalTimerSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ViewApplyObjectiveProgress");

	struct
	{
		float                          TimerSeconds;
		float                          TotalTimerSeconds;
	} params;

	params.TimerSeconds = TimerSeconds;
	params.TotalTimerSeconds = TotalTimerSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveMarker.PointObjectiveMarker_C.ExecuteUbergraph_PointObjectiveMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveMarker_C::ExecuteUbergraph_PointObjectiveMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveMarker.PointObjectiveMarker_C.ExecuteUbergraph_PointObjectiveMarker");

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
