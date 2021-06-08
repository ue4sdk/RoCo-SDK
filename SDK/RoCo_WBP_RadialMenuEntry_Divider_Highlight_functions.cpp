// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialMenuEntry_Divider_Highlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.SetDisabledAppearance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDisabled                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialMenuEntry_Divider_Highlight_C::SetDisabledAppearance(bool IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.SetDisabledAppearance");

	struct
	{
		bool                           IsDisabled;
	} params;

	params.IsDisabled = IsDisabled;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RadialMenuEntry_Divider_Highlight_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialMenuEntry_Divider_Highlight_C::ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C.ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight");

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
