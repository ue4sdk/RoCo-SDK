// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TextChat_ChatWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            MaxChatMessages                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatWindow_C::GetMaxChatMessages(int* MaxChatMessages)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages"));

	struct
	{
		int                            MaxChatMessages;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MaxChatMessages != nullptr)
		*MaxChatMessages = params.MaxChatMessages;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Collapsed                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_ChatWindow_C::SetCollapsed(bool Collapsed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed"));

	struct
	{
		bool                           Collapsed;
	} params;

	params.Collapsed = Collapsed;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          ChatData                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_TextChat_ChatWindow_C::AddChatMessage(struct FPUMG_ChatData* ChatData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage"));

	struct
	{
		struct FPUMG_ChatData          ChatData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ChatData != nullptr)
		*ChatData = params.ChatData;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_TextChat_ChatWindow_C::BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatWindow_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatWindow_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_ChatWindow_C::ExecuteUbergraph_WBP_TextChat_ChatWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_ChatWindow_C::OnCloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
