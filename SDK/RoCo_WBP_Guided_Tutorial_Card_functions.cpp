// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Guided_Tutorial_Card_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGuidedCalloutCardData  CardData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Guided_Tutorial_Card_C::SetCardData(const struct FGuidedCalloutCardData& CardData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData");

	struct
	{
		struct FGuidedCalloutCardData  CardData;
	} params;

	params.CardData = CardData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Guided_Tutorial_Card_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Guided_Tutorial_Card_C::ExecuteUbergraph_WBP_Guided_Tutorial_Card(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card");

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
