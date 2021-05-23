// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionCardSlot_MercMasteryXP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::SetColor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.SetColor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgress                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression"));

	struct
	{
		struct FPlayerProgression      PlayerProgress;
	} params;

	params.PlayerProgress = PlayerProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Event On Level Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::Event_On_Level_Up(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Event On Level Up"));

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FActivityTier           NewTier                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::OnMercLevelUp__DelegateSignature(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature"));

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
		struct FActivityTier           NewTier;
	} params;

	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
