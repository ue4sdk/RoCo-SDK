// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsCarousel_Light_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Light Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Light_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Light Up");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Dim Light
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Dim_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Dim Light");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Toggle Lit Up
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Toggle_Lit_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Toggle Lit Up");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsCarousel_Light_Indicator_C::ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator");

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
