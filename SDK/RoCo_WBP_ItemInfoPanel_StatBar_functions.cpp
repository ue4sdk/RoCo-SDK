// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ItemInfoPanel_StatBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Get Stat Value Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Stat_Value                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Value_Text                     (CPF_Parm, CPF_OutParm)

void UWBP_ItemInfoPanel_StatBar_C::Get_Stat_Value_Text(float Stat_Value, struct FText* Value_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Get Stat Value Text");

	struct
	{
		float                          Stat_Value;
		struct FText                   Value_Text;
	} params;

	params.Stat_Value = Stat_Value;

	UObject::ProcessEvent(fn, &params);

	if (Value_Text != nullptr)
		*Value_Text = params.Value_Text;
}


// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Update Stat Values
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FItemDisplayStat        Current_Stat                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FItemDisplayStat        Upgrade_Stat                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ItemInfoPanel_StatBar_C::Update_Stat_Values(const struct FItemDisplayStat& Current_Stat, const struct FItemDisplayStat& Upgrade_Stat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Update Stat Values");

	struct
	{
		struct FItemDisplayStat        Current_Stat;
		struct FItemDisplayStat        Upgrade_Stat;
	} params;

	params.Current_Stat = Current_Stat;
	params.Upgrade_Stat = Upgrade_Stat;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Refresh From Display Parameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ItemInfoPanel_StatBar_C::Refresh_From_Display_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel_StatBar.WBP_ItemInfoPanel_StatBar_C.Refresh From Display Parameters");

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
// (FUNC_Final)
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
