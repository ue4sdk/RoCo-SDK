// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionCardSlot_PlayerXP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ShowXPBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowXPBar                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionCardSlot_PlayerXP_C::ShowXPBar(bool ShowXPBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ShowXPBar");

	struct
	{
		bool                           ShowXPBar;
	} params;

	params.ShowXPBar = ShowXPBar;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgress                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ProgressionCardSlot_PlayerXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgress;
	} params;

	params.PlayerProgress = PlayerProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionCardSlot_PlayerXP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_PlayerXP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Event On Level Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_PlayerXP_C::Event_On_Level_Up(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Event On Level Up");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_PlayerXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.OnPlayerLevelUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FActivityTier           NewTier                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_PlayerXP_C::OnPlayerLevelUp__DelegateSignature(const struct FActivityTier& NewTier, class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.OnPlayerLevelUp__DelegateSignature");

	struct
	{
		struct FActivityTier           NewTier;
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.NewTier = NewTier;
	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
