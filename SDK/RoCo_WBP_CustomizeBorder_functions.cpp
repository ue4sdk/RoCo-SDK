// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomizeBorder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnSortRarityDescNameAsc
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeBorder_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnSortRarityDescNameAsc"));

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


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomizeBorder_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnKeyDown"));

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


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeBorder_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.AddEmptySlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::AddEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.AddEmptySlots"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetActiveStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CosmeticItem_Border_C* ActiveWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeBorder_C::SetActiveStates(class UWBP_CosmeticItem_Border_C* ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetActiveStates"));

	struct
	{
		class UWBP_CosmeticItem_Border_C* ActiveWidget;
	} params;

	params.ActiveWidget = ActiveWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.RegisterNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::RegisterNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.RegisterNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.IsBorderItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeBorder_C::IsBorderItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.IsBorderItemEquipped"));

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


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ResetBorderSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::ResetBorderSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ResetBorderSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetContextBar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetBorderSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::SetBorderSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetBorderSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeBorder_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeBorder_C::OnBorderHover(class UPlatformInventoryItem* PlatformItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderHover"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
	} params;

	params.PlatformItem = PlatformItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeBorder_C::OnBorderUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeBorder_C::OnBorderSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderSelected"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UWidget*                 Widget;
	} params;

	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderGamepadHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeBorder_C::OnBorderGamepadHover(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderGamepadHover"));

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ExecuteUbergraph_WBP_CustomizeBorder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeBorder_C::ExecuteUbergraph_WBP_CustomizeBorder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ExecuteUbergraph_WBP_CustomizeBorder"));

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
