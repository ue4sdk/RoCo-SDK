// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsPreview_Reticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.GetPreviewValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPreview_Reticle_C::GetPreviewValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.GetPreviewValue");

	struct
	{
		int                            Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsPreview_Reticle_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.ExecuteUbergraph_WBP_SettingsPreview_Reticle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsPreview_Reticle_C::ExecuteUbergraph_WBP_SettingsPreview_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.ExecuteUbergraph_WBP_SettingsPreview_Reticle");

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
