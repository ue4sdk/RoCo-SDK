// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialMenuHighlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetDisabledAppearance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuHighlight_C::SetDisabledAppearance(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetDisabledAppearance");

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWBP_RadialMenuHighlight_C::GetHighlightMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuHighlight_C::SetPosition(float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition");

	struct
	{
		float                          Position;
	} params;

	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuHighlight_C::SetWidth(float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth");

	struct
	{
		float                          Width;
	} params;

	params.Width = Width;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
