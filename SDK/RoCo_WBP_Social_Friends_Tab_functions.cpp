// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Social_Friends_Tab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::FocusFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSSocialOverlaySection        Category                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPlayerInfo*           Output                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::TryGetFirstItemForCategory(EKSSocialOverlaySection Category, class UKSPlayerInfo** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory");

	struct
	{
		EKSSocialOverlaySection        Category;
		class UKSPlayerInfo*           Output;
	} params;

	params.Category = Category;

	UObject::ProcessEvent(fn, &params);

	if (Output != nullptr)
		*Output = params.Output;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::FindFirstOnlinePlayerOrDefault(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault");

	struct
	{
		class UObject*                 Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::FocusFirstOnlinePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Social_Friends_Tab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::HandleItemClicked(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked");

	struct
	{
		class UObject*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Social_Friends_Tab_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Target                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::GetFocusTarget(class UWidget** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget");

	struct
	{
		class UWidget*                 Target;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Target != nullptr)
		*Target = params.Target;
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsHovered                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Social_Friends_Tab_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		bool                           bIsHovered;
	} params;

	params.Item = Item;
	params.bIsHovered = bIsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	struct
	{
		class UObject*                 Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnListScrolled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ItemOffset                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DistanceRemaining              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::OnListScrolled(float ItemOffset, float DistanceRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnListScrolled");

	struct
	{
		float                          ItemOffset;
		float                          DistanceRemaining;
	} params;

	params.ItemOffset = ItemOffset;
	params.DistanceRemaining = DistanceRemaining;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Social_Friends_Tab_C::ExecuteUbergraph_WBP_Social_Friends_Tab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnPlayerListScrolled__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Social_Friends_Tab_C::OnPlayerListScrolled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnPlayerListScrolled__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
