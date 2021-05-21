// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassLevelTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Has Premium Battle Pass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BattlePassLevelTracker_C::Get_Has_Premium_Battle_Pass(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Has Premium Battle Pass");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Reward Item At Tier
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            TierIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            RewardIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTierRewardItemData     RewardStoreItemData            (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UWBP_BattlePassLevelTracker_C::Get_Reward_Item_At_Tier(int TierIndex, int RewardIndex, struct FTierRewardItemData* RewardStoreItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Reward Item At Tier");

	struct
	{
		int                            TierIndex;
		int                            RewardIndex;
		struct FTierRewardItemData     RewardStoreItemData;
	} params;

	params.TierIndex = TierIndex;
	params.RewardIndex = RewardIndex;

	UObject::ProcessEvent(fn, &params);

	if (RewardStoreItemData != nullptr)
		*RewardStoreItemData = params.RewardStoreItemData;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayFinishedState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::DisplayFinishedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayFinishedState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetConstantTextElements
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::SetConstantTextElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetConstantTextElements");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.TriggerLevelUpEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::TriggerLevelUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.TriggerLevelUpEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXpProgressPercentageInLevel
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          PercentProgress                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            XpNumber                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLevelTracker_C::GetXpProgressPercentageInLevel(float* PercentProgress, int* XpNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXpProgressPercentageInLevel");

	struct
	{
		float                          PercentProgress;
		int                            XpNumber;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PercentProgress != nullptr)
		*PercentProgress = params.PercentProgress;
	if (XpNumber != nullptr)
		*XpNumber = params.XpNumber;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetNewLerpTimeframe
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::SetNewLerpTimeframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetNewLerpTimeframe");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.UpdateLevelDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::UpdateLevelDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.UpdateLevelDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXPRequiredForLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_BattlePassLevelTracker_C::GetXPRequiredForLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXPRequiredForLevel");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetNextLevel
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_BattlePassLevelTracker_C::GetNextLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetNextLevel");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetCurrentLevel
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_BattlePassLevelTracker_C::GetCurrentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetCurrentLevel");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayXPAnimationState
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::DisplayXPAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayXPAnimationState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnLevelUpAnimCompleted
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::OnLevelUpAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnLevelUpAnimCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetPalette
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::SetPalette()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetPalette");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ProcessPlayerProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_BattlePassLevelTracker_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ProcessPlayerProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLevelTracker_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLevelTracker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PlayProgressionAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLevelTracker_C::PlayProgressionAnim(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PlayProgressionAnim");

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BattlePassLevelTracker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_BattlePassLevelTracker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ExecuteUbergraph_WBP_BattlePassLevelTracker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassLevelTracker_C::ExecuteUbergraph_WBP_BattlePassLevelTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ExecuteUbergraph_WBP_BattlePassLevelTracker");

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
