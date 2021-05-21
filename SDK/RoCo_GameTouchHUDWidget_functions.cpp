// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTouchHUDWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.TriggerInputAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InActionName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EInputEvent>       InInputEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::TriggerInputAction(const struct FName& InActionName, TEnumAsByte<EInputEvent> InInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.TriggerInputAction");

	struct
	{
		struct FName                   InActionName;
		TEnumAsByte<EInputEvent>       InInputEvent;
	} params;

	params.InActionName = InActionName;
	params.InInputEvent = InInputEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.GetWidgetBounds
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               TopLeft                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               BottomRight                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::GetWidgetBounds(class UWidget* Widget, struct FVector2D* TopLeft, struct FVector2D* BottomRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.GetWidgetBounds");

	struct
	{
		class UWidget*                 Widget;
		struct FVector2D               TopLeft;
		struct FVector2D               BottomRight;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);

	if (TopLeft != nullptr)
		*TopLeft = params.TopLeft;
	if (BottomRight != nullptr)
		*BottomRight = params.BottomRight;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.IsPointOverWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               ScreenPoint                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsPointOverWidget              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTouchHUDWidget_C::IsPointOverWidget(const struct FVector2D& ScreenPoint, class UWidget* Widget, bool* IsPointOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.IsPointOverWidget");

	struct
	{
		struct FVector2D               ScreenPoint;
		class UWidget*                 Widget;
		bool                           IsPointOverWidget;
	} params;

	params.ScreenPoint = ScreenPoint;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);

	if (IsPointOverWidget != nullptr)
		*IsPointOverWidget = params.IsPointOverWidget;
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnInputStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::OnInputStateChanged_Event_1(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnInputStateChanged_Event_1");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ViewTargetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OldViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  NewViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::ViewTargetChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.ViewTargetChanged");

	struct
	{
		class AKSPlayerController*     Controller;
		class AActor*                  OldViewTarget;
		class AActor*                  NewViewTarget;
	} params;

	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ShouldSwapPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameTouchHUDWidget_C::ShouldSwapPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.ShouldSwapPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ShoulderSwapUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::ShoulderSwapUpdate(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.ShoulderSwapUpdate");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.HandleEquipmentChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            EquipmentOwner                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponComponent*      Equipment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::HandleEquipmentChange(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.HandleEquipmentChange");

	struct
	{
		class AKSCharacter*            EquipmentOwner;
		class UKSWeaponComponent*      Equipment;
	} params;

	params.EquipmentOwner = EquipmentOwner;
	params.Equipment = Equipment;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ExecuteUbergraph_GameTouchHUDWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTouchHUDWidget_C::ExecuteUbergraph_GameTouchHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTouchHUDWidget.GameTouchHUDWidget_C.ExecuteUbergraph_GameTouchHUDWidget");

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
