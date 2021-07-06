// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressEarnedBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetProgressionFinalTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Final_Tier_Index               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::GetProgressionFinalTier(int* Final_Tier_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetProgressionFinalTier");

	struct
	{
		int                            Final_Tier_Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Final_Tier_Index != nullptr)
		*Final_Tier_Index = params.Final_Tier_Index;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsProgressionIncreasing
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::IsProgressionIncreasing(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsProgressionIncreasing");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFirstTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           FinalTier                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::IsOnFirstTier(bool* FinalTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFirstTier");

	struct
	{
		bool                           FinalTier;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FinalTier != nullptr)
		*FinalTier = params.FinalTier;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownAnimCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::OnLevelDownAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownAnimCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFinalTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           FinalTier                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::IsOnFinalTier(bool* FinalTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFinalTier");

	struct
	{
		bool                           FinalTier;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FinalTier != nullptr)
		*FinalTier = params.FinalTier;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::Set_Fill_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::OnLevelUpAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.InitializeAnimForTier
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tier_Index                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::InitializeAnimForTier(int Tier_Index, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.InitializeAnimForTier");

	struct
	{
		int                            Tier_Index;
		bool                           IsValid;
	} params;

	params.Tier_Index = Tier_Index;

	UObject::ProcessEvent(fn, &params);

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      Progression                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ProgressEarnedBar_C::SetProgressionData(const struct FPlayerProgression& Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData");

	struct
	{
		struct FPlayerProgression      Progression;
	} params;

	params.Progression = Progression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ApplyMeterPercentages
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          BasePercent                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaPercent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::ApplyMeterPercentages(float BasePercent, float DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ApplyMeterPercentages");

	struct
	{
		float                          BasePercent;
		float                          DeltaPercent;
	} params;

	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::OnDeltaAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationTicked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::OnDeltaAnimationTicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationTicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLevelChange                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::OnDeltaAnimationFinished(bool bLevelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationFinished");

	struct
	{
		bool                           bLevelChange;
	} params;

	params.bLevelChange = bLevelChange;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressEarnedBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressEarnedBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::ExecuteUbergraph_WBP_ProgressEarnedBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLerpUpdate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentLerpPercantage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLerpUpdate__DelegateSignature");

	struct
	{
		float                          CurrentLerpPercantage;
	} params;

	params.CurrentLerpPercantage = CurrentLerpPercantage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownEvent__DelegateSignature");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressEarnedBar_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
