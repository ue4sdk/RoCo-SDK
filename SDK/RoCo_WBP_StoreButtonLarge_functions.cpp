// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreButtonLarge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnRotationTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreButtonLarge_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_StoreButtonLarge_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStorePanelItem*       StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Animate                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StoreButtonLarge_C::DisplayStoreItem(class UKSStorePanelItem* StoreItem, bool Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem");

	struct
	{
		class UKSStorePanelItem*       StoreItem;
		bool                           Animate;
	} params;

	params.StoreItem = StoreItem;
	params.Animate = Animate;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSStoreSectionItem*     StoreSection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreButtonLarge_C::SetStoreItems(class UKSStoreSectionItem* StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems");

	struct
	{
		class UKSStoreSectionItem*     StoreSection;
	} params;

	params.StoreSection = StoreSection;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::OnComparePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_StoreButtonLarge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreButtonLarge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreButtonLarge_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_StoreButtonLarge_C::ExecuteUbergraph_WBP_StoreButtonLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge");

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
