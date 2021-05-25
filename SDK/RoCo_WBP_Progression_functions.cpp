// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Progression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Progression.WBP_Progression_C.OnPlayerLevelUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           NewTier                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Progression_C::OnPlayerLevelUp(const struct FActivityTier& NewTier, class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.OnPlayerLevelUp");

	struct
	{
		struct FActivityTier           NewTier;
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.NewTier = NewTier;
	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleBattlePassActivitiesReady
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Progression_C::HandleBattlePassActivitiesReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleBattlePassActivitiesReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleEventChallengeProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandleEventChallengeProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleEventChallengeProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleBattlePassXpProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      Progression                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandleBattlePassXpProgression(const struct FPlayerProgression& Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleBattlePassXpProgression");

	struct
	{
		struct FPlayerProgression      Progression;
	} params;

	params.Progression = Progression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleProgressionData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProgression> PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Progression_C::HandleProgressionData(TArray<struct FPlayerProgression>* PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleProgressionData");

	struct
	{
		TArray<struct FPlayerProgression> PlayerProgression;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerProgression != nullptr)
		*PlayerProgression = params.PlayerProgression;
}


// Function WBP_Progression.WBP_Progression_C.HandleMiniBattlePassProgressionRecieved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandleMiniBattlePassProgressionRecieved(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleMiniBattlePassProgressionRecieved");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FActivityTier           NewTier                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::OnMercLevelUp(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.OnMercLevelUp");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		struct FActivityTier           NewTier;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.ResetVisualState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Progression_C::ResetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.ResetVisualState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandleRogueMasteryProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgression              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandleReputationProgression(const struct FPlayerProgression& PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleReputationProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgression;
	} params;

	params.PlayerProgression = PlayerProgression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.HandlePlayerXpProgression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      Progression                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Progression_C::HandlePlayerXpProgression(const struct FPlayerProgression& Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandlePlayerXpProgression");

	struct
	{
		struct FPlayerProgression      Progression;
	} params;

	params.Progression = Progression;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Progression_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.StartAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Progression_C::StartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.StartAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Progression_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Progression_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.IncrementDelay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Progression_C::IncrementDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.IncrementDelay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Progression_C::ExecuteUbergraph_WBP_Progression(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression");

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
