// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PartyModuleCardSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PartyModuleCardSlot_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player_Info                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModuleCardSlot_C::SetPlayerView(class UPUMG_PlayerInfo* Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView");

	struct
	{
		class UPUMG_PlayerInfo*        Player_Info;
	} params;

	params.Player_Info = Player_Info;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::SetEmptyView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModuleCardSlot_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Hovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModuleCardSlot_C::Add_Party_Member_Unhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModuleCardSlot_C::ExecuteUbergraph_WBP_PartyModuleCardSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot");

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
