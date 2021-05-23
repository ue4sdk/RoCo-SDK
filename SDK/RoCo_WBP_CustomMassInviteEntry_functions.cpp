// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomMassInviteEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInviteEntry_C::GetPlayerInfo(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (playerinfo != nullptr)
		*playerinfo = params.playerinfo;
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInviteEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged"));

	struct
	{
		bool                           bIsSelected;
	} params;

	params.bIsSelected = bIsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInviteEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged"));

	struct
	{
		bool                           bIsExpanded;
	} params;

	params.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInviteEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet"));

	struct
	{
		class UObject*                 ListItemObject;
	} params;

	params.ListItemObject = ListItemObject;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::ForceHovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::ForceUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::PlaySelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomMassInviteEntry_C::PlayDeselection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomMassInviteEntry_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected"));

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_CustomMassInviteEntry_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_CustomMassInviteEntry_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInviteEntry_C::ExecuteUbergraph_WBP_CustomMassInviteEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomMassInviteEntry_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
