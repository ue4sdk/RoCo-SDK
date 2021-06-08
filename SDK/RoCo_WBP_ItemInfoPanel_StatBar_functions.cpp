// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemInfoPanel_StatBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.SetDisplayPreference
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemInfoPanel_StatBar_C::SetDisplayPreference()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.SetDisplayPreference");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ItemInfoPanel_StatBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ItemInfoPanel_StatBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.ExecuteUbergraph_WBP_ItemInfoPanel_StatBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ItemInfoPanel_StatBar_C::ExecuteUbergraph_WBP_ItemInfoPanel_StatBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.ExecuteUbergraph_WBP_ItemInfoPanel_StatBar");

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
