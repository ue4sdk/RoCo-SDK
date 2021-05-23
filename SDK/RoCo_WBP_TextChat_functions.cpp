// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TextChat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsEnabled                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::IsTextChatEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled"));

	struct
	{
		bool                           IsEnabled;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::HandleTextChatEnabledApplied(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied"));

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::AddCancelKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.AddCancelKey"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::ConsumeCancelInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AnyKeyDown                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::IsAnyCancelKeyDown(bool* AnyKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown"));

	struct
	{
		bool                           AnyKeyDown;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnyKeyDown != nullptr)
		*AnyKeyDown = params.AnyKeyDown;
}


// Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FName>           Actions                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::AddAllCancelKeys(TArray<struct FName>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys"));

	struct
	{
		TArray<struct FName>           Actions;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::ProcessDelayedFocusClear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_TextChat_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_TextChat_C::HandleSubmitTextInput(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_TextChat_C::CanChatInChannel(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel"));

	struct
	{
		EPUMG_ChatChannel              Channel;
		bool                           ReturnValue;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EPUMG_ChatChannel              DefaultChannel                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::GetDefaultChannel(EPUMG_ChatChannel* DefaultChannel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel"));

	struct
	{
		EPUMG_ChatChannel              DefaultChannel;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DefaultChannel != nullptr)
		*DefaultChannel = params.DefaultChannel;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ActiveChatChannelData ChannelData                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_TextChat_C::HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged"));

	struct
	{
		struct FPUMG_ActiveChatChannelData ChannelData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ChannelData != nullptr)
		*ChannelData = params.ChannelData;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_TextChat_C::HandleChatMessage(struct FPUMG_ChatData* Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage"));

	struct
	{
		struct FPUMG_ChatData          Message;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Message != nullptr)
		*Message = params.Message;
}


// Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::DisableInputListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::EnableInputListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::ConsumeCancelInputPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFocused                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::SetUIFocus(bool IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.SetUIFocus"));

	struct
	{
		bool                           IsFocused;
	} params;

	params.IsFocused = IsFocused;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.DisplayTextChat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::DisplayTextChat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.DisplayTextChat"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InputText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ShouldSubmitText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           WaitForCancelRelease           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::FinishTextChat(bool ShouldSubmitText, bool WaitForCancelRelease, struct FText* InputText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.FinishTextChat"));

	struct
	{
		struct FText                   InputText;
		bool                           ShouldSubmitText;
		bool                           WaitForCancelRelease;
	} params;

	params.ShouldSubmitText = ShouldSubmitText;
	params.WaitForCancelRelease = WaitForCancelRelease;

	UObject::ProcessEvent(fn, &params);

	if (InputText != nullptr)
		*InputText = params.InputText;
}


// Function WBP_TextChat.WBP_TextChat_C.StartTextChat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::StartTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.StartTextChat"));

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TextChat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_TextChat_C::OpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OpenTextChat"));

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_TextChat_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          ReceivedMessage                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_TextChat_C::HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived"));

	struct
	{
		struct FPUMG_ChatData          ReceivedMessage;
	} params;

	params.ReceivedMessage = ReceivedMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_ActiveChatChannelData ChatChannelData                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_TextChat_C::OnChannelChanged(const struct FPUMG_ActiveChatChannelData& ChatChannelData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged"));

	struct
	{
		struct FPUMG_ActiveChatChannelData ChatChannelData;
	} params;

	params.ChatChannelData = ChatChannelData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::HandleChatChannelJoined(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined"));

	struct
	{
		EPUMG_ChatChannel              Channel;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel              Channel                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::HandleChatChannelLeft(EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft"));

	struct
	{
		EPUMG_ChatChannel              Channel;
	} params;

	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::OnCancelButtonPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed"));

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer"));

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::HandleCloseTextChat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::HandleTextChatEnabledChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.ShowTextChat
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_TextChat_C::ShowTextChat()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.ShowTextChat"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.OnRadialMenuItemUse
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FRadialMenuItemEventInfo EventInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_TextChat_C::OnRadialMenuItemUse(const struct FRadialMenuItemEventInfo& EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.OnRadialMenuItemUse"));

	struct
	{
		struct FRadialMenuItemEventInfo EventInfo;
	} params;

	params.EventInfo = EventInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_TextChat_C::ExecuteUbergraph_WBP_TextChat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat"));

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
