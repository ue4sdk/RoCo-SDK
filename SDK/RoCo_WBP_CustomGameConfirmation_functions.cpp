// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomGameConfirmation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameConfirmation_C::InitalizeButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSWidget*>       Buttons                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::GetButtons(TArray<class UKSWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons"));

	struct
	{
		TArray<class UKSWidget*>       Buttons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MapId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::PopulateCustomPopup(int QueueId, int MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup"));

	struct
	{
		int                            QueueId;
		int                            MapId;
	} params;

	params.QueueId = QueueId;
	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomGameConfirmation_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::ExecuteUbergraph_WBP_CustomGameConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameConfirmation_C::OnCreateLobby__DelegateSignature(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature"));

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameConfirmation_C::OnCancelLobby__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
