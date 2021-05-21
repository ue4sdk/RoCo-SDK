// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SectionListingBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ActiveIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::SetActiveButton(int ActiveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton");

	struct
	{
		int                            ActiveIndex;
	} params;

	params.ActiveIndex = ActiveIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::OnSectionButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSStoreSection*> Sections                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::SetSections(TArray<class UKSStoreSection*>* Sections)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections");

	struct
	{
		TArray<class UKSStoreSection*> Sections;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Sections != nullptr)
		*Sections = params.Sections;
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::ExecuteUbergraph_WBP_SectionListingBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SectionListingBar_C::OnSectionSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
