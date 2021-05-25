// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueItemDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueItemDisplay_C::SetItem(class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem");

	struct
	{
		class UKSItem*                 KSItem;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueItemDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueItemDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueItemDisplay_C::ExecuteUbergraph_WBP_RogueItemDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay");

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
