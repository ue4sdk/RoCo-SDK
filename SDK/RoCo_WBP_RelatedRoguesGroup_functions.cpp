// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RelatedRoguesGroup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.CreateAndAddEntry
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSRelatedRogueEntry*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSRelatedRogueEntry* UWBP_RelatedRoguesGroup_C::CreateAndAddEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.CreateAndAddEntry");

	struct
	{
		class UKSRelatedRogueEntry*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.GetEntries
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSRelatedRogueEntry*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UKSRelatedRogueEntry*> UWBP_RelatedRoguesGroup_C::GetEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.GetEntries");

	struct
	{
		TArray<class UKSRelatedRogueEntry*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RelatedRoguesGroup_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ClearEntries
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RelatedRoguesGroup_C::ClearEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ClearEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayIndividualWeaponLabel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RelatedRoguesGroup_C::DisplayIndividualWeaponLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayIndividualWeaponLabel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayWeaponCategoryLabel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RelatedRoguesGroup_C::DisplayWeaponCategoryLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayWeaponCategoryLabel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayNone
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RelatedRoguesGroup_C::DisplayNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayNone");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ExecuteUbergraph_WBP_RelatedRoguesGroup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RelatedRoguesGroup_C::ExecuteUbergraph_WBP_RelatedRoguesGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ExecuteUbergraph_WBP_RelatedRoguesGroup");

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
