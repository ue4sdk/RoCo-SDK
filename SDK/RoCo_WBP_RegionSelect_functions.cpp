// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RegionSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_RegionSelect_Entry_C*> RegionSelectEntries            (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_RegionSelect_C::GetRegionSelectEntries(TArray<class UWBP_RegionSelect_Entry_C*>* RegionSelectEntries)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries"));

	struct
	{
		TArray<class UWBP_RegionSelect_Entry_C*> RegionSelectEntries;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RegionSelectEntries != nullptr)
		*RegionSelectEntries = params.RegionSelectEntries;
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RegionSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RegionSelect_C::LoginState(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState"));

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::Populate_Regions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::OnChildButtonSelectedRegion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RegionSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RegionSelect_C::ExecuteUbergraph_WBP_RegionSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::OnRegionSelectEntriesCreated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelect_C::OnRegionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
