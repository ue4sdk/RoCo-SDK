// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StackedStatBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FItemDisplayStat        CurrentStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FItemDisplayStat        ProjectedStat                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StackedStatBar_C::SetStatCurrentToNext(const struct FItemDisplayStat& CurrentStat, const struct FItemDisplayStat& ProjectedStat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext"));

	struct
	{
		struct FItemDisplayStat        CurrentStat;
		struct FItemDisplayStat        ProjectedStat;
	} params;

	params.CurrentStat = CurrentStat;
	params.ProjectedStat = ProjectedStat;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FItemDisplayStat        Stat                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_StackedStatBar_C::SetStatCurrent(const struct FItemDisplayStat& Stat)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent"));

	struct
	{
		struct FItemDisplayStat        Stat;
	} params;

	params.Stat = Stat;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StackedStatBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StackedStatBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StackedStatBar_C::ExecuteUbergraph_WBP_StackedStatBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar"));

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
