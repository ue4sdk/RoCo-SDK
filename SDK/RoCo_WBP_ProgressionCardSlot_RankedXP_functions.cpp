// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionCardSlot_RankedXP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.SetPromotionColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RankedLevel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_RankedXP_C::SetPromotionColor(int RankedLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.SetPromotionColor");

	struct
	{
		int                            RankedLevel;
	} params;

	params.RankedLevel = RankedLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelDown
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_RankedXP_C::OnLevelDown(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelDown");

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Completed_Level                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_RankedXP_C::OnLevelUp(int Completed_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelUp");

	struct
	{
		int                            Completed_Level;
	} params;

	params.Completed_Level = Completed_Level;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ProcessPlayerProgression
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerProgression      PlayerProgress                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ProgressionCardSlot_RankedXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ProcessPlayerProgression");

	struct
	{
		struct FPlayerProgression      PlayerProgress;
	} params;

	params.PlayerProgress = PlayerProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressionCardSlot_RankedXP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressionCardSlot_RankedXP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressionCardSlot_RankedXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP");

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
