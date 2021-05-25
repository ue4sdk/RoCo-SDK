// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RadialSelect.WBP_RadialSelect_C.IsItemUsable
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelect_C::IsItemUsable(class UKSItem* KSItem, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.IsItemUsable");

	struct
	{
		class UKSItem*                 KSItem;
		bool                           Return_Value;
	} params;

	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetHoverForAllEntries
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_RadialMenuEntry_C*  New_Hovered_Entry              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::SetHoverForAllEntries(class UWBP_RadialMenuEntry_C* New_Hovered_Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetHoverForAllEntries");

	struct
	{
		class UWBP_RadialMenuEntry_C*  New_Hovered_Entry;
	} params;

	params.New_Hovered_Entry = New_Hovered_Entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialEntryByIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_RadialMenuEntry_C*  Entry                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::GetRadialEntryByIndex(int Index, class UWBP_RadialMenuEntry_C** Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialEntryByIndex");

	struct
	{
		int                            Index;
		class UWBP_RadialMenuEntry_C*  Entry;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Entry != nullptr)
		*Entry = params.Entry;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RadialSelect_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyDown");

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


// Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RadialSelect_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.OnKeyUp");

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


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemData
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Item_Index                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 KSItem                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::GetRadialItemData(int Item_Index, class UKSItem** KSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemData");

	struct
	{
		int                            Item_Index;
		class UKSItem*                 KSItem;
	} params;

	params.Item_Index = Item_Index;

	UObject::ProcessEvent(fn, &params);

	if (KSItem != nullptr)
		*KSItem = params.KSItem;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RadialSelect_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RadialSelect_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_RadialSelect_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.OnMouseButtonDown");

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


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::SetRadialItemName(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_InputCallout_C*     InputCallout                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::SetupInputCallout(class UWBP_InputCallout_C* InputCallout, class APUMG_HUD* HUD, TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout");

	struct
	{
		class UWBP_InputCallout_C*     InputCallout;
		class APUMG_HUD*               HUD;
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputCallout = InputCallout;
	params.HUD = HUD;
	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RadialSelect_C::IsSelectorVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelect_C::ShowRadialMenuCycle(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.Get Radial Item Name from Player Controller
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerController*     KSPlayerController             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   RadialItemName                 (CPF_Parm, CPF_OutParm)

void UWBP_RadialSelect_C::Get_Radial_Item_Name_from_Player_Controller(int Index, class AKSPlayerController* KSPlayerController, struct FText* RadialItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.Get Radial Item Name from Player Controller");

	struct
	{
		int                            Index;
		class AKSPlayerController*     KSPlayerController;
		struct FText                   RadialItemName;
	} params;

	params.Index = Index;
	params.KSPlayerController = KSPlayerController;

	UObject::ProcessEvent(fn, &params);

	if (RadialItemName != nullptr)
		*RadialItemName = params.RadialItemName;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EMercCosmeticSlot              CosmeticSlot                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UWBP_RadialSelect_C::GetTextForCosmeticSlot(EMercCosmeticSlot CosmeticSlot, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot");

	struct
	{
		EMercCosmeticSlot              CosmeticSlot;
		struct FText                   Text;
	} params;

	params.CosmeticSlot = CosmeticSlot;

	UObject::ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::SetRadialMenuNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_RadialSelect_C::GetDeadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UWBP_RadialSelect_C::GetOptionsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UWBP_RadialSelect_C::GetWheelSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::HideSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::ShowSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::RadialOptionUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::RadialOptionSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::RadialOptionHovered(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::TraceSelectionCursor(float Radius, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor");

	struct
	{
		float                          Radius;
		float                          Angle;
	} params;

	params.Radius = Radius;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSEquipment*            AddedEquipment                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::Handle_Equipment_Change(class AKSEquipment* AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change");

	struct
	{
		class AKSEquipment*            AddedEquipment;
	} params;

	params.AddedEquipment = AddedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::ChangeToNewRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCycledRight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RadialSelect_C::OnCycledMenus(bool bCycledRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus");

	struct
	{
		bool                           bCycledRight;
	} params;

	params.bCycledRight = bCycledRight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ERadialWheelMode               NewRadialWheelMode             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::SetupForRadialWheelMode(ERadialWheelMode NewRadialWheelMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode");

	struct
	{
		ERadialWheelMode               NewRadialWheelMode;
	} params;

	params.NewRadialWheelMode = NewRadialWheelMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RadialSelect_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle View State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousRoute                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.Handle View State Changed");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   PreviousRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RadialSelect_C::ExecuteUbergraph_WBP_RadialSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect");

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
