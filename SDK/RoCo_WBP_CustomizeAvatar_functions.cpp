// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomizeAvatar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnSortRarityDescNameAsc
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 LHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 RHS                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeAvatar_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnSortRarityDescNameAsc"));

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


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomizeAvatar_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomizeAvatar_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnKeyDown"));

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


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.AddEmptySlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::AddEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.AddEmptySlots"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetActiveStates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CosmeticItem_Avatar_C* ActiveWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeAvatar_C::SetActiveStates(class UWBP_CosmeticItem_Avatar_C* ActiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetActiveStates"));

	struct
	{
		class UWBP_CosmeticItem_Avatar_C* ActiveWidget;
	} params;

	params.ActiveWidget = ActiveWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.RegisterNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::RegisterNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.RegisterNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.IsAvatarItemEquipped
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsEquipped                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeAvatar_C::IsAvatarItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.IsAvatarItemEquipped"));

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


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ResetAvatarSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::ResetAvatarSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ResetAvatarSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetContextBar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetAvatarSelection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::SetAvatarSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetAvatarSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeAvatar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeAvatar_C::OnAvatarHover(class UPlatformInventoryItem* PlatformItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarHover"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
	} params;

	params.PlatformItem = PlatformItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::OnAvatarUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeAvatar_C::OnAvatarSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarSelected"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UWidget*                 Widget;
	} params;

	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarGamepadHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bHovered                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomizeAvatar_C::OnAvatarGamepadHover(class UPUMG_Widget* Widget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarGamepadHover"));

	struct
	{
		class UPUMG_Widget*            Widget;
		bool                           bHovered;
	} params;

	params.Widget = Widget;
	params.bHovered = bHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomizeAvatar_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ExecuteUbergraph_WBP_CustomizeAvatar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomizeAvatar_C::ExecuteUbergraph_WBP_CustomizeAvatar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ExecuteUbergraph_WBP_CustomizeAvatar"));

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
