// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PointObjectiveFullMapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UPointObjectiveFullMapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.DoCaptureAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointObjectiveFullMapIcon_C::DoCaptureAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.DoCaptureAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveFullMapIcon_C::SetProgressValue(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressValue");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressColors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            OffColor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            OnColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveFullMapIcon_C::SetProgressColors(const struct FLinearColor& OffColor, const struct FLinearColor& OnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.SetProgressColors");

	struct
	{
		struct FLinearColor            OffColor;
		struct FLinearColor            OnColor;
	} params;

	params.OffColor = OffColor;
	params.OnColor = OnColor;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveFullMapIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Objective State Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveFullMapIcon_C::Objective_State_Change(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Objective State Change");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPointObjectiveFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.OnCaptureAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPointObjectiveFullMapIcon_C::OnCaptureAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.OnCaptureAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ExecuteUbergraph_PointObjectiveFullMapIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPointObjectiveFullMapIcon_C::ExecuteUbergraph_PointObjectiveFullMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C.ExecuteUbergraph_PointObjectiveFullMapIcon");

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
