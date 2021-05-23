// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TrendedKick_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTrendedKick_C::GetMaximumHorizontalKick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTrendedKick_C::GetMaximumVerticalKick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ShotIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FKickTrendProfile       TrendProfile                   (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTrendedKick_C::GetCurrentTrendProfile(int ShotIndex, struct FKickTrendProfile* TrendProfile)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile"));

	struct
	{
		int                            ShotIndex;
		struct FKickTrendProfile       TrendProfile;
	} params;

	params.ShotIndex = ShotIndex;

	UObject::ProcessEvent(fn, &params);

	if (TrendProfile != nullptr)
		*TrendProfile = params.TrendProfile;
}


// Function TrendedKick.TrendedKick_C.MakeKickbackInstance
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            ShotIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          AbsoluteMaxDuration            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FInterpCurveVector2D    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash)

struct FInterpCurveVector2D UTrendedKick_C::MakeKickbackInstance(int ShotIndex, float AbsoluteMaxDuration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TrendedKick.TrendedKick_C.MakeKickbackInstance"));

	struct
	{
		int                            ShotIndex;
		float                          AbsoluteMaxDuration;
		struct FInterpCurveVector2D    ReturnValue;
	} params;

	params.ShotIndex = ShotIndex;
	params.AbsoluteMaxDuration = AbsoluteMaxDuration;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
