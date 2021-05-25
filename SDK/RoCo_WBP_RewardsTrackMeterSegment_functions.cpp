// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RewardsTrackMeterSegment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetStandardBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetStandardBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetStandardBackgroundColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetPremiumBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetPremiumBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetPremiumBackgroundColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassPremiumColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetBattlePassPremiumColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassPremiumColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassFreeColor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetBattlePassFreeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassFreeColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplyMeterPercentages
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          BasePercent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaPercent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeterSegment_C::ApplyMeterPercentages(float BasePercent, float DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplyMeterPercentages");

	struct
	{
		float                          BasePercent;
		float                          DeltaPercent;
	} params;

	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentBackgroundColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            BackgroundColor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeterSegment_C::ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentBackgroundColor");

	struct
	{
		struct FLinearColor            BackgroundColor;
	} params;

	params.BackgroundColor = BackgroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentLabel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   LabelText                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_RewardsTrackMeterSegment_C::ApplySegmentLabel(const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentLabel");

	struct
	{
		struct FText                   LabelText;
	} params;

	params.LabelText = LabelText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentMeterColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            MeterColor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeterSegment_C::ApplySegmentMeterColor(const struct FLinearColor& MeterColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentMeterColor");

	struct
	{
		struct FLinearColor            MeterColor;
	} params;

	params.MeterColor = MeterColor;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ExecuteUbergraph_WBP_RewardsTrackMeterSegment
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrackMeterSegment_C::ExecuteUbergraph_WBP_RewardsTrackMeterSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ExecuteUbergraph_WBP_RewardsTrackMeterSegment");

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
