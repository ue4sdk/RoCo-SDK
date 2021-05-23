// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Accordian_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory*   Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Social_Accordian_Header_C::OnHeaderUpdated(class UKSDataSocialCategory* Category, const struct FText& Header)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated"));

	struct
	{
		class UKSDataSocialCategory*   Category;
		struct FText                   Header;
	} params;

	params.Category = Category;
	params.Header = Header;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory*   Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UKSDataSocialPlayer*> Players                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnPlayersUpdated(class UKSDataSocialCategory* Category, TArray<class UKSDataSocialPlayer*> Players)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated"));

	struct
	{
		class UKSDataSocialCategory*   Category;
		TArray<class UKSDataSocialPlayer*> Players;
	} params;

	params.Category = Category;
	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSDataSocialCategory*   Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Processing                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_Social_Accordian_Header_C::UpdateMessage(class UKSDataSocialCategory* Category, bool Processing, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage"));

	struct
	{
		class UKSDataSocialCategory*   Category;
		bool                           Processing;
		struct FText                   Message;
	} params;

	params.Category = Category;
	params.Processing = Processing;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Expanded                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Accordian_Header_C::GetIsExpanded(bool* Expanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded"));

	struct
	{
		bool                           Expanded;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Expanded != nullptr)
		*Expanded = params.Expanded;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSDataSocialCategory*   NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::GetData(class UKSDataSocialCategory** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData"));

	struct
	{
		class UKSDataSocialCategory*   NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Expanded                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Accordian_Header_C::SetExpanded(bool Expanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded"));

	struct
	{
		bool                           Expanded;
	} params;

	params.Expanded = Expanded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSHUDCommon*            HUD                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::GetOuterHud(class AKSHUDCommon** HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud"));

	struct
	{
		class AKSHUDCommon*            HUD;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HUD != nullptr)
		*HUD = params.HUD;
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::SetListItemObject(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject"));

	struct
	{
		class UObject*                 Object;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::HandleClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet"));

	struct
	{
		class UObject*                 ListItemObject;
	} params;

	params.ListItemObject = ListItemObject;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Accordian_Header_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged"));

	struct
	{
		bool                           bIsExpanded;
	} params;

	params.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Accordian_Header_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged"));

	struct
	{
		bool                           bIsSelected;
	} params;

	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::UnbindCategoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::BindCategoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Accordian_Header_C::ForceUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::ExecuteUbergraph_WBP_Social_Accordian_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Accordian_Header_C::OnClicked__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature"));

	struct
	{
		class UUserWidget*             Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
