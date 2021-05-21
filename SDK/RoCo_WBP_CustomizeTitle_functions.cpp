// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomizeTitle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnSortRarityDescTextAsc
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeTitle_C::OnSortRarityDescTextAsc(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnSortRarityDescTextAsc");

	struct
	{
		class UWidget*                 LHS;
		class UWidget*                 RHS;
		bool                           ReturnValue;
	} params;

	params.LHS = LHS;
	params.RHS = RHS;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.AddEmptySlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::AddEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.AddEmptySlots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomizeTitle_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnKeyDown");

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


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetActiveStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CosmeticItem_Title_C* ActiveWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeTitle_C::SetActiveStates(class UWBP_CosmeticItem_Title_C* ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetActiveStates");

	struct
	{
		class UWBP_CosmeticItem_Title_C* ActiveWidget;
	} params;

	params.ActiveWidget = ActiveWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.RegisterNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::RegisterNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.RegisterNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.IsTitleItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeTitle_C::IsTitleItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.IsTitleItemEquipped");

	struct
	{
		class UKSItem*                 KSItem;
		bool                           IsEquipped;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ResetTitleSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::ResetTitleSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ResetTitleSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetContextBar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeTitle_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetTitleSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::SetTitleSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetTitleSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeTitle_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeTitle_C::OnTitleHover(class UPlatformInventoryItem* PlatformItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleHover");

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
	} params;

	params.PlatformItem = PlatformItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeTitle_C::OnTitleUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeTitle_C::OnTitleSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleSelected");

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UWidget*                 Widget;
	} params;

	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleGamepadHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Hovered                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeTitle_C::OnTitleGamepadHover(class UPUMG_Widget* Widget, bool Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleGamepadHover");

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           Hovered;
	} params;

	params.Widget = Widget;
	params.Hovered = Hovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ExecuteUbergraph_WBP_CustomizeTitle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeTitle_C::ExecuteUbergraph_WBP_CustomizeTitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ExecuteUbergraph_WBP_CustomizeTitle");

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
