// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ranked_level_tracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetProgressColorByTier
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RankedTiers>     RankedTier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::SetProgressColorByTier(TEnumAsByte<E_RankedTiers> RankedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetProgressColorByTier");

	struct
	{
		TEnumAsByte<E_RankedTiers>     RankedTier;
	} params;

	params.RankedTier = RankedTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetCurrentLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tier                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::SetCurrentLevel(int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetCurrentLevel");

	struct
	{
		int                            Tier;
	} params;

	params.Tier = Tier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLerpUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentLerpPercantage          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::OnLerpUpdate(float CurrentLerpPercantage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLerpUpdate");

	struct
	{
		float                          CurrentLerpPercantage;
	} params;

	params.CurrentLerpPercantage = CurrentLerpPercantage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::OnLevelDown(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDown");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::OnLevelUp(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUp");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.UpdateLevelDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ranked_level_tracker_C::UpdateLevelDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.UpdateLevelDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetXPRequiredForLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_ranked_level_tracker_C::GetXPRequiredForLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetXPRequiredForLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetNextLevel
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_ranked_level_tracker_C::GetNextLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetNextLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetCurrentLevel
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_ranked_level_tracker_C::GetCurrentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetCurrentLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ProcessPlayerProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ranked_level_tracker_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ProcessPlayerProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ranked_level_tracker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ranked_level_tracker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ExecuteUbergraph_WBP_ranked_level_tracker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::ExecuteUbergraph_WBP_ranked_level_tracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ExecuteUbergraph_WBP_ranked_level_tracker");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDownEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDownEvent__DelegateSignature");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUpEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ranked_level_tracker_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUpEvent__DelegateSignature");

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
