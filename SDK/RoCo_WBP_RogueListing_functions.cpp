// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueListing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueListing.WBP_RogueListing_C.OnGotoOffer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::OnGotoOffer(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnGotoOffer"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.SetDLCDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowDLC                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueListing_C::SetDLCDisplay(bool ShowDLC)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.SetDLCDisplay"));

	struct
	{
		bool                           ShowDLC;
	} params;

	params.ShowDLC = ShowDLC;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.IsJobOwned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           owned                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueListing_C::IsJobOwned(class UKSJobItem* JobItem, bool* owned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.IsJobOwned"));

	struct
	{
		class UKSJobItem*              JobItem;
		bool                           owned;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);

	if (owned != nullptr)
		*owned = params.owned;
}


// Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::SetRogueOwned(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::ResetFavoriteIcons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::OnJobHovered(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RogueListing_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueListing_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::PopulateRoleFilters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_JobGeneralButton_C*> JobButtons                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::GetJobButtons(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons"));

	struct
	{
		TArray<class UWBP_JobGeneralButton_C*> JobButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;
}


// Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGridSlot*               GridSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MaxRowCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::SetRowAndColumn(class UGridSlot* GridSlot, int Index, int MaxRowCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn"));

	struct
	{
		class UGridSlot*               GridSlot;
		int                            Index;
		int                            MaxRowCount;
	} params;

	params.GridSlot = GridSlot;
	params.Index = Index;
	params.MaxRowCount = MaxRowCount;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::ResetButtonState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::ResetJobList()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UKSJobItem>> LoadoutOptions                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::PopulateJobList(TArray<TSoftObjectPtr<class UKSJobItem>>* LoadoutOptions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList"));

	struct
	{
		TArray<TSoftObjectPtr<class UKSJobItem>> LoadoutOptions;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LoadoutOptions != nullptr)
		*LoadoutOptions = params.LoadoutOptions;
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::OnShowScreenAnimUpdate(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::OnShowScreenAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::StartShowScreenAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              SelectedJob                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::HandleOnJobSelected(class UKSJobItem* SelectedJob)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected"));

	struct
	{
		class UKSJobItem*              SelectedJob;
	} params;

	params.SelectedJob = SelectedJob;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::ExternalOnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItemPrice*    Price                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::HandleOnPurchasedItem(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem"));

	struct
	{
		class UPUMG_StoreItem*         Item;
		class UPUMG_StoreItemPrice*    Price;
	} params;

	params.Item = Item;
	params.Price = Price;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnItemGamepadHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueListing_C::OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnItemGamepadHovered"));

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueListing_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateRightFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateLeftFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::ExecuteUbergraph_WBP_RogueListing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_JobGeneralButton_C*> JobButtons                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::OnJobListReady__DelegateSignature(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature"));

	struct
	{
		TArray<class UWBP_JobGeneralButton_C*> JobButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;
}


// Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueListing_C::OnJobSelected__DelegateSignature(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
