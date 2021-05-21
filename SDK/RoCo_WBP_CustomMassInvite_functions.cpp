// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomMassInvite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSTreeView*             TreeView                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::FocusFirstPlayer(class UKSTreeView* TreeView)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer");

	struct
	{
		class UKSTreeView*             TreeView;
	} params;

	params.TreeView = TreeView;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSTreeView*             OwningList                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::List_HandleItemClicked(class UObject* Item, class UKSTreeView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked");

	struct
	{
		class UObject*                 Item;
		class UKSTreeView*             OwningList;
	} params;

	params.Item = Item;
	params.OwningList = OwningList;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::List_HandleItemInitialized(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized");

	struct
	{
		class UObject*                 Item;
		class UUserWidget*             Widget;
	} params;

	params.Item = Item;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::List_HandleListItemHover(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover");

	struct
	{
		class UObject*                 Item;
		bool                           bIsSelected;
	} params;

	params.Item = Item;
	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowLoading                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UWidgetAnimation*        Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::ShowLoadAnimImpl(bool ShowLoading, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl");

	struct
	{
		bool                           ShowLoading;
		class UWidgetAnimation*        Animation;
	} params;

	params.ShowLoading = ShowLoading;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowLoading                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::ShowSearchListLoading(bool ShowLoading)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading");

	struct
	{
		bool                           ShowLoading;
	} params;

	params.ShowLoading = ShowLoading;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSPlayerQueryError            Error                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UKSPlayerInfo*>   Matches                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::HandleReceiveSearchPlayers(EKSPlayerQueryError Error, TArray<class UKSPlayerInfo*> Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers");

	struct
	{
		EKSPlayerQueryError            Error;
		TArray<class UKSPlayerInfo*>   Matches;
	} params;

	params.Error = Error;
	params.Matches = Matches;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSPlayerQueryDataFactory* DataFactory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::GetQueryDataFactory(class UKSPlayerQueryDataFactory** DataFactory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory");

	struct
	{
		class UKSPlayerQueryDataFactory* DataFactory;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::SetTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomMassInvite_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp");

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


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::ShowAutoListLoading(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomMassInvite_C::OnBlockerClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<class UObject*>         Children                       (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::List_OnGetItemChildren(class UObject* Item, TArray<class UObject*>* Children)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren");

	struct
	{
		class UObject*                 Item;
		TArray<class UObject*>         Children;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (Children != nullptr)
		*Children = params.Children;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomMassInvite_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSPlayerInfo*>   Players                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::OnReceivePlayers(TArray<class UKSPlayerInfo*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers");

	struct
	{
		TArray<class UKSPlayerInfo*>   Players;
	} params;

	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		class UUserWidget*             Widget;
	} params;

	params.Item = Item;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsHovered                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		bool                           bIsHovered;
	} params;

	params.Item = Item;
	params.bIsHovered = bIsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		bool                           bIsSelected;
	} params;

	params.Item = Item;
	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingAnimationEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   SearchTerm                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_CustomMassInvite_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature(const struct FText& SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature");

	struct
	{
		struct FText                   SearchTerm;
	} params;

	params.SearchTerm = SearchTerm;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingSearchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInvite_C::OnLoadingSearchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		class UUserWidget*             Widget;
	} params;

	params.Item = Item;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		bool                           bIsSelected;
	} params;

	params.Item = Item;
	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsHovered                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInvite_C::BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		bool                           bIsHovered;
	} params;

	params.Item = Item;
	params.bIsHovered = bIsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         SelectedNavTab                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature(class UKSNavTabWidget* SelectedNavTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_4_OnNavTabSelected__DelegateSignature");

	struct
	{
		class UKSNavTabWidget*         SelectedNavTab;
	} params;

	params.SelectedNavTab = SelectedNavTab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UKSNavTabWidget*         SelectedNavTab                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature(class UKSNavTabWidget* SelectedNavTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_15_OnNavTabSelected__DelegateSignature");

	struct
	{
		class UKSNavTabWidget*         SelectedNavTab;
	} params;

	params.SelectedNavTab = SelectedNavTab;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::ExecuteUbergraph_WBP_CustomMassInvite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInvite_C::OnSelect__DelegateSignature(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
