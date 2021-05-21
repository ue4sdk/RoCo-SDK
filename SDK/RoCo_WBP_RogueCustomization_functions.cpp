// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueCustomization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCustomization_C::SetMeleeCustomizeNav(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::RegisterGamepadNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueCustomization_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::BindSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::SetSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::InitializeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::UpdateEquippedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::SetActiveJob(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCosmeticSlotDetails    CosmeticSlotDetail             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWBP_KSCosmeticItemDisplay_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::OnCosmeticHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetail, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered");

	struct
	{
		struct FCosmeticSlotDetails    CosmeticSlotDetail;
		bool                           IsGamepad;
		class UWBP_KSCosmeticItemDisplay_C* Widget;
	} params;

	params.CosmeticSlotDetail = CosmeticSlotDetail;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::OnCosmeticUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    CosmeticSlotDetails            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::OnCosmeticSelected(class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot;
		struct FCosmeticSlotDetails    CosmeticSlotDetails;
	} params;

	params.CosmeticSlot = CosmeticSlot;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::ExternalOnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueCustomization_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueCustomization_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::ExecuteUbergraph_WBP_RogueCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueCustomization_C::GotoCustomizationScreen__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature");

	struct
	{
		class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot;
	} params;

	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
