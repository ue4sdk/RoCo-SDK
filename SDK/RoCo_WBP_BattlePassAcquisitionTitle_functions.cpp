// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassAcquisitionTitle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.SetPremiumUpsellState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PremiumItems                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionTitle_C::SetPremiumUpsellState(int PremiumItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.SetPremiumUpsellState");

	struct
	{
		int                            PremiumItems;
	} params;

	params.PremiumItems = PremiumItems;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWithAcquisition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionTitle_C::InitializeWithAcquisition(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWithAcquisition");

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionTitle_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.ExecuteUbergraph_WBP_BattlePassAcquisitionTitle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassAcquisitionTitle_C::ExecuteUbergraph_WBP_BattlePassAcquisitionTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BattlePassAcquisitionTitle.WBP_BattlePassAcquisitionTitle_C.ExecuteUbergraph_WBP_BattlePassAcquisitionTitle");

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
