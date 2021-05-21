// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Acquisition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAcquisitionItemData*    Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Acquisition_C::OnGamepadItemHover(class UAcquisitionItemData* Item, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover");

	struct
	{
		class UAcquisitionItemData*    Item;
		class UKSWidget*               Widget;
	} params;

	params.Item = Item;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAcquisitionItemData*    AcqusitionItem                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Acquisition_C::DisplayStoreItem(class UAcquisitionItemData* AcqusitionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem");

	struct
	{
		class UAcquisitionItemData*    AcqusitionItem;
	} params;

	params.AcqusitionItem = AcqusitionItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquistion                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Acquisition_C::SetAcquisitionDisplay(class UKSAcquisition* Acquistion)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay");

	struct
	{
		class UKSAcquisition*          Acquistion;
	} params;

	params.Acquistion = Acquistion;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Acquisition_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Acquisition_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Acquisition_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Acquisition_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Acquisition_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Acquisition_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Acquisition_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Acquisition_C::ExecuteUbergraph_WBP_Acquisition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition");

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
