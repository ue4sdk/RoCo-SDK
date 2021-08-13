// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformUMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_AsyncImage::ShowWaitingWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_AsyncImage::HideWaitingWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::IsWithEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UPUMG_BlueprintFunctionLibrary::GetUMG_DPI_Scaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    Key                            (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UPUMG_BlueprintFunctionLibrary::GetKeyName(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName");

	struct
	{
		struct FKey                    Key;
		struct FName                   ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FKey UPUMG_BlueprintFunctionLibrary::GetGamepadConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton");

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FKey UPUMG_BlueprintFunctionLibrary::GetGamepadCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton");

	struct
	{
		struct FKey                    ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    Button                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::GetGamepadButtonForAction(const struct FName& Action, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction");

	struct
	{
		struct FName                   Action;
		struct FKey                    Button;
		bool                           ReturnValue;
	} params;

	params.Action = Action;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 InWidget                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    Button                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::GetButtonForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget");

	struct
	{
		class UWidget*                 InWidget;
		struct FName                   Action;
		struct FKey                    Button;
		bool                           ReturnValue;
	} params;

	params.InWidget = InWidget;
	params.Action = Action;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    Button                         (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsGamepadKey                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::GetButtonForActionMapping(const struct FName& Action, bool IsGamepadKey, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping");

	struct
	{
		struct FName                   Action;
		struct FKey                    Button;
		bool                           IsGamepadKey;
		bool                           ReturnValue;
	} params;

	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 InWidget                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            Buttons                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::GetAllButtonsForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, TArray<struct FKey>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget");

	struct
	{
		class UWidget*                 InWidget;
		struct FName                   Action;
		TArray<struct FKey>            Buttons;
		bool                           ReturnValue;
	} params;

	params.InWidget = InWidget;
	params.Action = Action;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FKey>            Buttons                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           IsGamepadKey                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_BlueprintFunctionLibrary::GetAllButtonsForActionMapping(const struct FName& Action, bool IsGamepadKey, TArray<struct FKey>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping");

	struct
	{
		struct FName                   Action;
		TArray<struct FKey>            Buttons;
		bool                           IsGamepadKey;
		bool                           ReturnValue;
	} params;

	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UUserWidget*             BottomWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUserWidget*             TopWidget                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_CanvasPanel::PlaceWidgetUnder(class UUserWidget* BottomWidget, class UUserWidget* TopWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder");

	struct
	{
		class UUserWidget*             BottomWidget;
		class UUserWidget*             TopWidget;
	} params;

	params.BottomWidget = BottomWidget;
	params.TopWidget = TopWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_DataFactory::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_DataFactory.IsLoggedIn");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxMessageCount                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::SetMaxMessageCount(int MaxMessageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount");

	struct
	{
		int                            MaxMessageCount;
	} params;

	params.MaxMessageCount = MaxMessageCount;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        TargetPlayerId                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::SendChatToPlayer(const struct FString& Message, int64_t TargetPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer");

	struct
	{
		struct FString                 Message;
		int64_t                        TargetPlayerId;
	} params;

	params.Message = Message;
	params.TargetPlayerId = TargetPlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::SendChatToChannel(const struct FString& Message, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel");

	struct
	{
		struct FString                 Message;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Message = Message;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::RemovePlayerFilter(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::RemoveChatCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand");

	struct
	{
		struct FString                 Command;
		bool                           ReturnValue;
	} params;

	params.Command = Command;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::RemoveAllChatCommands(class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands");

	struct
	{
		class UObject*                 Target;
		bool                           ReturnValue;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_ChatDataFactory::QueueCheckPendingMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MessageId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::MarkMessageAsRead(int MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead");

	struct
	{
		int                            MessageId;
	} params;

	params.MessageId = MessageId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_ChatDataFactory::ListChatCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPUMG_ChatData          Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::IsValidMessage(const struct FPUMG_ChatData& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage");

	struct
	{
		struct FPUMG_ChatData          Message;
		bool                           ReturnValue;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::IsPlayerFilteredFromChat(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_ChatDataFactory::HandleCommunicationSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MessageId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPUMG_ChatData          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FPUMG_ChatData UPUMG_ChatDataFactory::GetMessage(int MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetMessage");

	struct
	{
		int                            MessageId;
		struct FPUMG_ChatData          ReturnValue;
	} params;

	params.MessageId = MessageId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_ChatDataFactory::GetMaxMessageCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPCOM_PrivilegeStatus          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPCOM_PrivilegeStatus UPUMG_ChatDataFactory::GetChatPrivilegeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus");

	struct
	{
		EPCOM_PrivilegeStatus          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// bool                           IncludePersonalChannel         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FPUMG_ActiveChatChannelData> ActiveChatChatChannels         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::GetActiveChatChannels(bool IncludePersonalChannel, TArray<struct FPUMG_ActiveChatChannelData>* ActiveChatChatChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels");

	struct
	{
		bool                           IncludePersonalChannel;
		TArray<struct FPUMG_ActiveChatChannelData> ActiveChatChatChannels;
	} params;

	params.IncludePersonalChannel = IncludePersonalChannel;

	UObject::ProcessEvent(fn, &params);

	if (ActiveChatChatChannels != nullptr)
		*ActiveChatChatChannels = params.ActiveChatChatChannels;
}


// Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_ChatDataFactory::FindChatCommandIndex(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex");

	struct
	{
		struct FString                 Command;
		int                            ReturnValue;
	} params;

	params.Command = Command;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CommandLine                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::ExecuteChatCommandLine(const struct FString& CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine");

	struct
	{
		struct FString                 CommandLine;
		bool                           ReturnValue;
	} params;

	params.CommandLine = CommandLine;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_ChatDataFactory::CheckPendingMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPUMG_ChatData          Message                        (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::BeginProcessingChatMessage(struct FPUMG_ChatData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage");

	struct
	{
		struct FPUMG_ChatData          Message;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Message != nullptr)
		*Message = params.Message;
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::AddSystemMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage");

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::AddPlayerFilter(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddGameMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// EPUMG_ChatChannel              Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ChatDataFactory::AddGameMessage(const struct FText& Message, EPUMG_ChatChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddGameMessage");

	struct
	{
		struct FText                   Message;
		EPUMG_ChatChannel              Channel;
	} params;

	params.Message = Message;
	params.Channel = Channel;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   Desc                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Function                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Alias1                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Alias2                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Alias3                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Alias4                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ChatDataFactory::AddChatCommand(const struct FString& Command, const struct FText& Desc, class UObject* Target, const struct FString& Function, const struct FString& Alias1, const struct FString& Alias2, const struct FString& Alias3, const struct FString& Alias4)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand");

	struct
	{
		struct FString                 Command;
		struct FText                   Desc;
		class UObject*                 Target;
		struct FString                 Function;
		struct FString                 Alias1;
		struct FString                 Alias2;
		struct FString                 Alias3;
		struct FString                 Alias4;
		bool                           ReturnValue;
	} params;

	params.Command = Command;
	params.Desc = Desc;
	params.Target = Target;
	params.Function = Function;
	params.Alias1 = Alias1;
	params.Alias2 = Alias2;
	params.Alias3 = Alias3;
	params.Alias4 = Alias4;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::UIX_OnRemoveFriend(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::UIX_OnRejectFriendRequest(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::UIX_OnCancelFriendRequest(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::UIX_OnAddFriend(class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend");

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::UIX_OnAcceptFriendRequest(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InBool                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_FriendDataFactory::SetEnableFriendsListUpdatePolling(bool InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling");

	struct
	{
		bool                           InBool;
	} params;

	params.InBool = InBool;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_FriendDataFactory::RequestUpdateFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_FriendDataFactory::IsCrossplaySocialEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_FriendDataFactory::HandleFriendsListUpdatePolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_FriendDataFactory::HandleCrossplaySettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetPendingFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends");

	struct
	{
		TArray<struct FPUMG_FriendData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriends");

	struct
	{
		TArray<struct FPUMG_FriendData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests");

	struct
	{
		TArray<struct FPUMG_FriendData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_FriendDataFactory::GetFriendName(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName");

	struct
	{
		int64_t                        PlayerId;
		struct FText                   ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPUMG_FriendData        Friend                         (CPF_Parm, CPF_NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UPUMG_FriendDataFactory::GetFriendAvatarTexture(const struct FPUMG_FriendData& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture");

	struct
	{
		struct FPUMG_FriendData        Friend;
		TSoftObjectPtr<class UTexture2D> ReturnValue;
	} params;

	params.Friend = Friend;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_FriendDataFactory::GetEnableFriendsListUpdatePolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_FriendDataFactory::FriendRemoveResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FriendName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_FriendDataFactory::CheckAlreadyFriends(const struct FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends");

	struct
	{
		struct FString                 FriendName;
		bool                           ReturnValue;
	} params;

	params.FriendName = FriendName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGamepadPromptInterface::UnregisterOnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.GamepadPromptInterface.SetPrompt
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PromptText                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UGamepadPromptInterface::SetPrompt(const struct FText& PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.SetPrompt");

	struct
	{
		struct FText                   PromptText;
	} params;

	params.PromptText = PromptText;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.GamepadPromptInterface.ClearPrompt
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamepadPromptInterface::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.ClearPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_GamepadDataFactory::UnregisterPromptForButton(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton");

	struct
	{
		struct FKey                    Button;
		bool                           ReturnValue;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   PromptText                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UPUMG_GamepadDataFactory::SetPromptForGamepadButton(const struct FKey& Button, const struct FText& PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton");

	struct
	{
		struct FKey                    Button;
		struct FText                   PromptText;
	} params;

	params.Button = Button;
	params.PromptText = PromptText;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_GamepadDataFactory::RemovePromptForGamepadButton(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton");

	struct
	{
		struct FKey                    Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_GamepadDataFactory::RegisterPromptWidgetForButton(class UWidget* Widget, const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton");

	struct
	{
		class UWidget*                 Widget;
		struct FKey                    Button;
		bool                           ReturnValue;
	} params;

	params.Widget = Widget;
	params.Button = Button;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_GamepadDataFactory::ClearAllGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.TestHirezLogin
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 User                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::TestHirezLogin(const struct FString& User, const struct FString& password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.TestHirezLogin");

	struct
	{
		struct FString                 User;
		struct FString                 password;
	} params;

	params.User = User;
	params.password = password;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.TestAutoLogin
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// int                            ControllerId                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::TestAutoLogin(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.TestAutoLogin");

	struct
	{
		int                            ControllerId;
	} params;

	params.ControllerId = ControllerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 popupType                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::ShowSystemTrayNotification(const struct FString& popupType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification");

	struct
	{
		struct FString                 popupType;
	} params;

	params.popupType = popupType;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           UseNewFeatures                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::SetUseNewUIFeatures(bool UseNewFeatures)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures");

	struct
	{
		bool                           UseNewFeatures;
	} params;

	params.UseNewFeatures = UseNewFeatures;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.SetUIFocus
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APUMG_HUD::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetUIFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enabled                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::SetNavigationEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetNavigationEnabled");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.OnQuit
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void APUMG_HUD::OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnQuit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.OnNavigateBack
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool APUMG_HUD::OnNavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnNavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.OnConfirmQuit
// (FUNC_Native, FUNC_Protected)

void APUMG_HUD::OnConfirmQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnConfirmQuit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.NewPlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* APUMG_HUD::NewPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.NewPlayerInfo");

	struct
	{
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.IsLobbyHUD
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool APUMG_HUD::IsLobbyHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.IsLobbyHUD");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool APUMG_HUD::IsCrossplayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::InputStateChangePassthrough(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.gmmf
// (FUNC_Final, FUNC_Exec, FUNC_Native, FUNC_Protected)
// Parameters:
// bool                           bAutolaunch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::gmmf(bool bAutolaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.gmmf");

	struct
	{
		bool                           bAutolaunch;
	} params;

	params.bAutolaunch = bAutolaunch;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.GetViewManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_ViewManager*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_ViewManager* APUMG_HUD::GetViewManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetViewManager");

	struct
	{
		class UPUMG_ViewManager*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetPopupManager
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PopupManager* APUMG_HUD::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetPopupManager");

	struct
	{
		class UPUMG_PopupManager*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class APlayerController* APUMG_HUD::GetPlayerControllerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* APUMG_HUD::GetOrCreatePlayerInfo(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo");

	struct
	{
		int64_t                        PlayerId;
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_InputManager*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_InputManager* APUMG_HUD::GetInputManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetInputManager");

	struct
	{
		class UPUMG_InputManager*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetCurrentInputState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TEnumAsByte<EPGAME_INPUT_STATE> APUMG_HUD::GetCurrentInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetCurrentInputState");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 sTitle                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 sDesc                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.DisplayGenericPopup");

	struct
	{
		struct FString                 sTitle;
		struct FString                 sDesc;
	} params;

	params.sTitle = sTitle;
	params.sDesc = sDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_HUD.DisplayGenericError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 sDesc                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void APUMG_HUD::DisplayGenericError(const struct FString& sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.DisplayGenericError");

	struct
	{
		struct FString                 sDesc;
	} params;

	params.sDesc = sDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_InputManager.HandleModeChange
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_InputManager::HandleModeChange(TEnumAsByte<EPGAME_INPUT_STATE> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.HandleModeChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> Mode;
	} params;

	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_InputManager.GetFocusedWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPUMG_Widget*            ParentWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_InputManager::GetFocusedWidget(class UPUMG_Widget* ParentWidget, class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.GetFocusedWidget");

	struct
	{
		class UPUMG_Widget*            ParentWidget;
		class UWidget*                 FocusWidget;
		bool                           ReturnValue;
	} params;

	params.ParentWidget = ParentWidget;

	UObject::ProcessEvent(fn, &params);

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_InputManager::ClearNavInputThrottled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_InputManager.ClearNavInputDebouncedThrottled
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_InputManager::ClearNavInputDebouncedThrottled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.ClearNavInputDebouncedThrottled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UPGame_LandingPanelJSONHandler* pHandler                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_JsonDataFactory::HandleJsonReady(class UPGame_LandingPanelJSONHandler* pHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady");

	struct
	{
		class UPGame_LandingPanelJSONHandler* pHandler;
	} params;

	params.pHandler = pHandler;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class UPGame_LandingPanelJSONHandler* pHandler                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_JsonDataFactory::HandleImagesReady(class UPGame_LandingPanelJSONHandler* pHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady");

	struct
	{
		class UPGame_LandingPanelJSONHandler* pHandler;
	} params;

	params.pHandler = pHandler;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::UpdateControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_TriggerAutoLogin
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_TriggerAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_TriggerAutoLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 AuthCode                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnTwoFactorSubmit(const struct FString& AuthCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit");

	struct
	{
		struct FString                 AuthCode;
	} params;

	params.AuthCode = AuthCode;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnTwoFactorDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnSubmitLogin(const struct FString& UserName, const struct FString& password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin");

	struct
	{
		struct FString                 UserName;
		struct FString                 password;
	} params;

	params.UserName = UserName;
	params.password = password;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ControllerId                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnSubmitConsoleLogin(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin");

	struct
	{
		int                            ControllerId;
	} params;

	params.ControllerId = ControllerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ControllerId                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnSubmitAutoLogin(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin");

	struct
	{
		int                            ControllerId;
	} params;

	params.ControllerId = ControllerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnPlayerCreate(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate");

	struct
	{
		struct FString                 PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnLinkExistingAccount(const struct FString& UserName, const struct FString& password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount");

	struct
	{
		struct FString                 UserName;
		struct FString                 password;
	} params;

	params.UserName = UserName;
	params.password = password;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnLinkDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Email                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAcceptAgeReqs                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnLinkCreateAccount(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount");

	struct
	{
		struct FString                 UserName;
		struct FString                 password;
		struct FString                 Email;
		bool                           bAcceptAgeReqs;
	} params;

	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnEulaDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnEulaAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnChangeUserAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnCancelLogin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnCancelLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnCancelLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 UserName                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 password                       (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Email                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAcceptAgeReqs                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::UIX_OnAccountCreate(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate");

	struct
	{
		struct FString                 UserName;
		struct FString                 password;
		struct FString                 Email;
		bool                           bAcceptAgeReqs;
	} params;

	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.TriggerAutoLogin
// (FUNC_Native, FUNC_Public)

void UPUMG_LoginDataFactory::TriggerAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.TriggerAutoLogin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::ShouldDisplayUsername()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::ShouldDisplayDisconnectError()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.SetUserErrorDataTable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDataTable*              ErrorMsgTable                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::SetUserErrorDataTable(class UDataTable* ErrorMsgTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.SetUserErrorDataTable");

	struct
	{
		class UDataTable*              ErrorMsgTable;
	} params;

	params.ErrorMsgTable = ErrorMsgTable;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// EPUMG_LoginState               NewState                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::RecordLoginState(EPUMG_LoginState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState");

	struct
	{
		EPUMG_LoginState               NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowAgreements
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           bNeedsEULA                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bNeedsTOS                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bNeedsPP                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::LoginEvent_ShowAgreements(bool bNeedsEULA, bool bNeedsTOS, bool bNeedsPP)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowAgreements");

	struct
	{
		bool                           bNeedsEULA;
		bool                           bNeedsTOS;
		bool                           bNeedsPP;
	} params;

	params.bNeedsEULA = bNeedsEULA;
	params.bNeedsTOS = bNeedsTOS;
	params.bNeedsPP = bNeedsPP;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Queued
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// uint32_t                       QueuePosition                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// uint32_t                       QueueSize                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// uint32_t                       queueEstimatedWait             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::LoginEvent_Queued(uint32_t QueuePosition, uint32_t QueueSize, uint32_t queueEstimatedWait)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Queued");

	struct
	{
		uint32_t                       QueuePosition;
		uint32_t                       QueueSize;
		uint32_t                       queueEstimatedWait;
	} params;

	params.QueuePosition = QueuePosition;
	params.QueueSize = QueueSize;
	params.queueEstimatedWait = queueEstimatedWait;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UPUMG_LoginDataFactory::LoginEvent_LoginRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UPUMG_LoginDataFactory::LoginEvent_LoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_FailedClient
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::LoginEvent_FailedClient(const struct FText& ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_FailedClient");

	struct
	{
		struct FText                   ErrorMsg;
	} params;

	params.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// uint32_t                       ErrorMsgId                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::LoginEvent_Failed(uint32_t ErrorMsgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed");

	struct
	{
		uint32_t                       ErrorMsgId;
	} params;

	params.ErrorMsgId = ErrorMsgId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SaveText                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::LoadEULAFile(struct FString* SaveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile");

	struct
	{
		struct FString                 SaveText;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SaveText != nullptr)
		*SaveText = params.SaveText;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// int                            ControllerIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            NewUserId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            OldUserId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::HandleControllerPairingChange(int ControllerIndex, int NewUserId, int OldUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange");

	struct
	{
		int                            ControllerIndex;
		int                            NewUserId;
		int                            OldUserId;
	} params;

	params.ControllerIndex = ControllerIndex;
	params.NewUserId = NewUserId;
	params.OldUserId = OldUserId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
// (FUNC_Final, FUNC_Native, FUNC_Private)
// Parameters:
// bool                           IsConnection                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            UserId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ControllerIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_LoginDataFactory::HandleControllerConnectionChange(bool IsConnection, int UserId, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange");

	struct
	{
		bool                           IsConnection;
		int                            UserId;
		int                            ControllerIndex;
	} params;

	params.IsConnection = IsConnection;
	params.UserId = UserId;
	params.ControllerIndex = ControllerIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPUMG_LoginDataFactory::GetVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetVersion");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetLastDisconnectReason
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   ErrorMsg                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::GetLastDisconnectReason(struct FText* ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetLastDisconnectReason");

	struct
	{
		struct FText                   ErrorMsg;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NameText                       (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_LoginDataFactory::GetCurrentPlayerName(struct FText* NameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName");

	struct
	{
		struct FText                   NameText;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NameText != nullptr)
		*NameText = params.NameText;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EPUMG_LoginState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPUMG_LoginState UPUMG_LoginDataFactory::GetCurrentLoginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState");

	struct
	{
		EPUMG_LoginState               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PartyDataFactory::UIX_PromoteMemberToLeader(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PartyDataFactory::UIX_KickMemberFromParty(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::UIX_InviteMemberToParty(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PartyDataFactory::UIX_GiveInvitePermission(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_DisbandParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_DenyPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_AcceptPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.SetPartyInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PartyDataFactory::SetPartyInfo(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.SetPartyInfo");

	struct
	{
		struct FString                 Key;
		struct FString                 Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.SendPartyMessage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PartyDataFactory::SendPartyMessage(const struct FString& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.SendPartyMessage");

	struct
	{
		struct FString                 Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_PartyDataFactory::PartyPromoteResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_PartyDataFactory::PartyLeaveResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UPUMG_PartyDataFactory::PartyKickResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::IsPlayerInParty(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPending
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::IsPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPending");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::IsPartyMaxed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::IsLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsLeader");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::IsInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsInParty");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.HasInvitePrivileges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::HasInvitePrivileges(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.HasInvitePrivileges");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PartyDataFactory::GetQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_PartyDataFactory::GetPartyMemeberName(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName");

	struct
	{
		int64_t                        PlayerId;
		struct FText                   ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_PartyMemberData> UPUMG_PartyDataFactory::GetPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers");

	struct
	{
		TArray<struct FPUMG_PartyMemberData> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PartyDataFactory::GetPartyMemberCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPUMG_PartyMemberData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FPUMG_PartyMemberData UPUMG_PartyDataFactory::GetPartyMemberByID(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID");

	struct
	{
		int64_t                        PlayerId;
		struct FPUMG_PartyMemberData   ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* UPUMG_PartyDataFactory::GetPartyInviter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter");

	struct
	{
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EPUMG_PartyInviteRightsMode    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPUMG_PartyInviteRightsMode UPUMG_PartyDataFactory::GetPartyInviteMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode");

	struct
	{
		EPUMG_PartyInviteRightsMode    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPUMG_PartyDataFactory::GetPartyInfo(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInfo");

	struct
	{
		struct FString                 Key;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PartyDataFactory::GetMaxPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PartyDataFactory::CheckPartyMemberIsLeader(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ItemId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PlayerDataFactory::OnSelectAvatar(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar");

	struct
	{
		int                            ItemId;
	} params;

	params.ItemId = ItemId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UPUMG_PlayerDataFactory::GetAvatarIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon");

	struct
	{
		TSoftObjectPtr<class UTexture2D> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Ignored                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PlayerInfo::SetIgnored(bool Ignored)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.SetIgnored");

	struct
	{
		bool                           Ignored;
	} params;

	params.Ignored = Ignored;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_PlayerInfo::IsIgnored()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.IsIgnored");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UPUMG_PlayerInfo::GetPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId");

	struct
	{
		int64_t                        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_PlayerInfo::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UPUMG_PlayerInfo::GetMctsName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetMctsName");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PlayerInfo::GetAvatarItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeOfflinePlayers         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PlayerWhoDataFactory::UIX_SearchByNameForPlayer(const struct FString& PlayerName, bool bIncludeOfflinePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer");

	struct
	{
		struct FString                 PlayerName;
		bool                           bIncludeOfflinePlayers;
	} params;

	params.PlayerName = PlayerName;
	params.bIncludeOfflinePlayers = bIncludeOfflinePlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_PlayerInfo*> UPUMG_PlayerWhoDataFactory::GetSearchByNameResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults");

	struct
	{
		TArray<class UPUMG_PlayerInfo*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.UpdateRegistrationToInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Up                             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Down                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Left                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Right                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::UpdateRegistrationToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UpdateRegistrationToInputManager");

	struct
	{
		class UWidget*                 Widget;
		int                            FocusGroup;
		class UWidget*                 Up;
		class UWidget*                 Down;
		class UWidget*                 Left;
		class UWidget*                 Right;
	} params;

	params.Widget = Widget;
	params.FocusGroup = FocusGroup;
	params.Up = Up;
	params.Down = Down;
	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::UnregisterWidgetFromInputManager(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::UnregisterFocusGroup(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.UninitializeWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPUMG_Widget::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.SwapViewRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SwapTargetRoute                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SwapViewRoute");

	struct
	{
		struct FName                   RouteName;
		struct FName                   SwapTargetRoute;
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.StartShowSequence
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ToRoute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.StartShowSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.StartHideSequence
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ToRoute                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.StartHideSequence");

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.ShowWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::ShowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ShowWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.SetPendingRouteData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::SetPendingRouteData(const struct FName& RouteName, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetPendingRouteData");

	struct
	{
		struct FName                   RouteName;
		class UObject*                 Data;
	} params;

	params.RouteName = RouteName;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.SetFocusToWidgetOfGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_Widget*            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::SetFocusToWidgetOfGroup(int FocusGroup, class UPUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetFocusToWidgetOfGroup");

	struct
	{
		int                            FocusGroup;
		class UPUMG_Widget*            Widget;
	} params;

	params.FocusGroup = FocusGroup;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.SetFocusToThis
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidget* UPUMG_Widget::SetFocusToThis()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetFocusToThis");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.SetFocusToGroup
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           KeepLastFocus                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::SetFocusToGroup(int FocusGroup, bool KeepLastFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetFocusToGroup");

	struct
	{
		int                            FocusGroup;
		bool                           KeepLastFocus;
	} params;

	params.FocusGroup = FocusGroup;
	params.KeepLastFocus = KeepLastFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::SetDefaultFocusForGroup(class UWidget* Widget, int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup");

	struct
	{
		class UWidget*                 Widget;
		int                            FocusGroup;
	} params;

	params.Widget = Widget;
	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.RemoveViewRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::RemoveViewRoute(const struct FName& RouteName, bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.RemoveViewRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::RemoveTopViewRoute(bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute");

	struct
	{
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Up                             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Down                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Left                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 Right                          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::RegisterWidgetToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager");

	struct
	{
		class UWidget*                 Widget;
		int                            FocusGroup;
		class UWidget*                 Up;
		class UWidget*                 Down;
		class UWidget*                 Left;
		class UWidget*                 Right;
	} params;

	params.Widget = Widget;
	params.FocusGroup = FocusGroup;
	params.Up = Up;
	params.Down = Down;
	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.OnShown
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.OnHide
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.OnGamepadUnhover
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::OnGamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnGamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.OnGamepadHover
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::OnGamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnGamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateUpFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateUpFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateRightFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateLeftFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateDownFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateDownFailure");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateConfirmCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirm
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateBackPressed
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::NavigateBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBackPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPUMG_Widget::NavigateBackCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBackCancelled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.NavigateBack
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.IsFocusEnabled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::IsFocusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.IsFocusEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.InitializeWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.InheritFocusGroupFromWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TargetFocusGroupNum            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_Widget*            SourceWidget                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SourceFocusGroupNum            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::InheritFocusGroupFromWidget(int TargetFocusGroupNum, class UPUMG_Widget* SourceWidget, int SourceFocusGroupNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InheritFocusGroupFromWidget");

	struct
	{
		int                            TargetFocusGroupNum;
		class UPUMG_Widget*            SourceWidget;
		int                            SourceFocusGroupNum;
	} params;

	params.TargetFocusGroupNum = TargetFocusGroupNum;
	params.SourceWidget = SourceWidget;
	params.SourceFocusGroupNum = SourceFocusGroupNum;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.HideWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.HideWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.GetViewManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_ViewManager*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_ViewManager* UPUMG_Widget::GetViewManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetViewManager");

	struct
	{
		class UPUMG_ViewManager*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetUsesBlocker
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::GetUsesBlocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetUsesBlocker");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetPendingRouteData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::GetPendingRouteData(const struct FName& RouteName, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetPendingRouteData");

	struct
	{
		struct FName                   RouteName;
		class UObject*                 Data;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;

	UObject::ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGeometry               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FGeometry UPUMG_Widget::GetGeometryFromLastTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick");

	struct
	{
		struct FGeometry               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            OutFocusGroup                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::GetCurrentFocusGroup(int* OutFocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup");

	struct
	{
		int                            OutFocusGroup;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutFocusGroup != nullptr)
		*OutFocusGroup = params.OutFocusGroup;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UWidget* UPUMG_Widget::GetCurrentFocusForGroup(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup");

	struct
	{
		int                            FocusGroup;
		class UWidget*                 ReturnValue;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GameStateSet
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::GameStateSet(class AGameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GameStateSet");

	struct
	{
		class AGameStateBase*          GameState;
	} params;

	params.GameState = GameState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPUMG_Widget::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.GamepadButtonUp
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FEventReply UPUMG_Widget::GamepadButtonUp(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadButtonUp");

	struct
	{
		struct FKey                    Button;
		struct FEventReply             ReturnValue;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GamepadButtonDown
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Button                         (CPF_Parm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FEventReply UPUMG_Widget::GamepadButtonDown(const struct FKey& Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadButtonDown");

	struct
	{
		struct FKey                    Button;
		struct FEventReply             ReturnValue;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::ExplicitNavigateUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::ExplicitNavigateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::ExplicitNavigateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::ExplicitNavigateDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 sTitle                         (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 sDesc                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.DisplayGenericPopup");

	struct
	{
		struct FString                 sTitle;
		struct FString                 sDesc;
	} params;

	params.sTitle = sTitle;
	params.sDesc = sDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.DisplayGenericError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 sDesc                          (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::DisplayGenericError(const struct FString& sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.DisplayGenericError");

	struct
	{
		struct FString                 sDesc;
	} params;

	params.sDesc = sDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::ClearNavigationInputThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::CanCloseOnLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CanCloseOnLogout");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::CallOnShowSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_Widget::CallOnHideSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.BindToInputManager
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            DefaultFocusGroup              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::BindToInputManager(int DefaultFocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.BindToInputManager");

	struct
	{
		int                            DefaultFocusGroup;
	} params;

	params.DefaultFocusGroup = DefaultFocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D> Texture2DRef                   (CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_Widget::AsyncLoadTexture2D(TSoftObjectPtr<class UTexture2D> Texture2DRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D");

	struct
	{
		TSoftObjectPtr<class UTexture2D> Texture2DRef;
	} params;

	params.Texture2DRef = Texture2DRef;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_Widget.AddViewRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ClearRouteStack                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_Widget::AddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.AddViewRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ClearRouteStack;
		bool                           ForceTransition;
		class UObject*                 Data;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PopupManager.ShowPopup
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_PopupConfig       popupData                      (CPF_Parm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UPUMG_PopupManager::ShowPopup(const struct FPUMG_PopupConfig& popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.ShowPopup");

	struct
	{
		struct FPUMG_PopupConfig       popupData;
	} params;

	params.popupData = popupData;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.RemovePopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PopupId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PopupManager::RemovePopup(int PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.RemovePopup");

	struct
	{
		int                            PopupId;
	} params;

	params.PopupId = PopupId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            nPopupId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            nResponseIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_PopupManager::OnPopupResponse(int nPopupId, int nResponseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.OnPopupResponse");

	struct
	{
		int                            nPopupId;
		int                            nResponseIndex;
	} params;

	params.nPopupId = nPopupId;
	params.nResponseIndex = nResponseIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PopupManager::OnPopupCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.NextPopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PopupManager::NextPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.NextPopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.HidePopup
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPUMG_PopupManager::HidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.HidePopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PopupManager::CloseUnimportantPopups()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_PopupManager::CloseAllPopups()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.CloseAllPopups");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_PopupManager.AddPopup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPUMG_PopupConfig       popupData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PopupManager::AddPopup(const struct FPUMG_PopupConfig& popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.AddPopup");

	struct
	{
		struct FPUMG_PopupConfig       popupData;
		int                            ReturnValue;
	} params;

	params.popupData = popupData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.StartCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bDoChecks                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::StartCustomMatch(bool bDoChecks)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.StartCustomMatch");

	struct
	{
		bool                           bDoChecks;
	} params;

	params.bDoChecks = bDoChecks;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.SetPlayerTeamCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TeamId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::SetPlayerTeamCustomMatch(int64_t PlayerId, int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.SetPlayerTeamCustomMatch");

	struct
	{
		int64_t                        PlayerId;
		int                            TeamId;
	} params;

	params.PlayerId = PlayerId;
	params.TeamId = TeamId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.SetPendingMapForCustomQueue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::SetPendingMapForCustomQueue(int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.SetPendingMapForCustomQueue");

	struct
	{
		int                            MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.SetMapForCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// int                            MapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::SetMapForCustomMatch(int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.SetMapForCustomMatch");

	struct
	{
		int                            MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::LeaveQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.KickFromCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::KickFromCustomMatch(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.KickFromCustomMatch");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::JoinQueue(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::IsQueueActive(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::IsInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInGame");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::IsInCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsCustomInvitePending
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::IsCustomInvitePending(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsCustomInvitePending");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.InviteToCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::InviteToCustomMatch(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.InviteToCustomMatch");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.IncrementPlayerTeamCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::IncrementPlayerTeamCustomMatch(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IncrementPlayerTeamCustomMatch");

	struct
	{
		int64_t                        PlayerId;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.HandleInviteCooldowns
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_QueueDataFactory::HandleInviteCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.HandleInviteCooldowns");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.HandleConfirmKickCustomPlayer
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_QueueDataFactory::HandleConfirmKickCustomPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.HandleConfirmKickCustomPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetTimeInQueueSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UPUMG_QueueDataFactory::GetTimeInQueueSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetTimeInQueueSeconds");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetTeamMemberCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TeamId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_QueueDataFactory::GetTeamMemberCount(int TeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetTeamMemberCount");

	struct
	{
		int                            TeamId;
		int                            ReturnValue;
	} params;

	params.TeamId = TeamId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<int> UPUMG_QueueDataFactory::GetQueueIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds");

	struct
	{
		TArray<int>                    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetPlayerTeamId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_QueueDataFactory::GetPlayerTeamId(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetPlayerTeamId");

	struct
	{
		int64_t                        PlayerId;
		int                            ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetPendingCustomMatchMapId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_QueueDataFactory::GetPendingCustomMatchMapId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetPendingCustomMatchMapId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetNextTeamId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            RelativeToTeamId               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_QueueDataFactory::GetNextTeamId(int RelativeToTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetNextTeamId");

	struct
	{
		int                            RelativeToTeamId;
		int                            ReturnValue;
	} params;

	params.RelativeToTeamId = RelativeToTeamId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchPermissions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPUMG_CustomMatchPermission    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPUMG_CustomMatchPermission UPUMG_QueueDataFactory::GetCustomMatchPermissions(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchPermissions");

	struct
	{
		int64_t                        PlayerId;
		EPUMG_CustomMatchPermission    ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMembers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FPUMG_CustomMatchMember> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<struct FPUMG_CustomMatchMember> UPUMG_QueueDataFactory::GetCustomMatchMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMembers");

	struct
	{
		TArray<struct FPUMG_CustomMatchMember> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMapId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_QueueDataFactory::GetCustomMatchMapId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMapId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchInviterPlayerInfo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PlayerInfo* UPUMG_QueueDataFactory::GetCustomMatchInviterPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchInviterPlayerInfo");

	struct
	{
		class UPUMG_PlayerInfo*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EPUMG_MatchStatus              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPUMG_MatchStatus UPUMG_QueueDataFactory::GetCurrentQueueMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState");

	struct
	{
		EPUMG_MatchStatus              ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::GetCurrentQueueId(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId");

	struct
	{
		int                            QueueId;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (QueueId != nullptr)
		*QueueId = params.QueueId;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            MatchID                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::GetCurrentMatchId(int* MatchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId");

	struct
	{
		int                            MatchID;
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MatchID != nullptr)
		*MatchID = params.MatchID;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPUMG_ClientQueueInfo   InClientQueueInfo              (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::GetBaseQueueInfoById(int QueueId, struct FPUMG_ClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById");

	struct
	{
		int                            QueueId;
		struct FPUMG_ClientQueueInfo   InClientQueueInfo;
		bool                           ReturnValue;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.DeclineMatchInvite
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_QueueDataFactory::DeclineMatchInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.DeclineMatchInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.CreateCustomMatch
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            QueueId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TeamSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TaskForceCount                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_QueueDataFactory::CreateCustomMatch(int QueueId, int TeamSize, int TaskForceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CreateCustomMatch");

	struct
	{
		int                            QueueId;
		int                            TeamSize;
		int                            TaskForceCount;
	} params;

	params.QueueId = QueueId;
	params.TeamSize = TeamSize;
	params.TaskForceCount = TaskForceCount;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_QueueDataFactory.CheckCustomMatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bAllowGMOverride               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPUMG_CustomMatchError         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EPUMG_CustomMatchError UPUMG_QueueDataFactory::CheckCustomMatch(bool bAllowGMOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CheckCustomMatch");

	struct
	{
		bool                           bAllowGMOverride;
		EPUMG_CustomMatchError         ReturnValue;
	} params;

	params.bAllowGMOverride = bAllowGMOverride;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::CanQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CanQueue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::CanLocalPlayerPromoteCustomLobbyPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::CanLocalPlayerKickCustomLobbyPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::CanLocalPlayerControlCustomLobbyPlayer(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.AttemptRejoinMatch
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Forced                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_QueueDataFactory::AttemptRejoinMatch(bool Forced)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.AttemptRejoinMatch");

	struct
	{
		bool                           Forced;
		bool                           ReturnValue;
	} params;

	params.Forced = Forced;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.AcceptMatchInvite
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_QueueDataFactory::AcceptMatchInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.AcceptMatchInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SettingId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            SettingValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_SettingsDataFactory::OnSettingChanged(const struct FName& SettingId, int SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged");

	struct
	{
		struct FName                   SettingId;
		int                            SettingValue;
		bool                           ReturnValue;
	} params;

	params.SettingId = SettingId;
	params.SettingValue = SettingValue;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UPUMG_SettingsDataFactory::InitSettingsForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StorePurchaseRequest.SubmitPurchaseRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StorePurchaseRequest::SubmitPurchaseRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StorePurchaseRequest.SubmitPurchaseRequest");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PortalOffer.GetDiscountPercentage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_PortalOffer::GetDiscountPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PortalOffer.GetDiscountPercentage");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemPrice.GetPriceWithCoupon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_StoreItem*         Coupon                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItemPrice::GetPriceWithCoupon(class UPUMG_StoreItem* Coupon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemPrice.GetPriceWithCoupon");

	struct
	{
		class UPUMG_StoreItem*         Coupon;
		int                            ReturnValue;
	} params;

	params.Coupon = Coupon;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemPrice.GetDiscountPercentage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItemPrice::GetDiscountPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemPrice.GetDiscountPercentage");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemPrice.CanAfford
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Quantity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         Coupon                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemPrice::CanAfford(int Quantity, class UPUMG_StoreItem* Coupon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemPrice.CanAfford");

	struct
	{
		int                            Quantity;
		class UPUMG_StoreItem*         Coupon;
		bool                           ReturnValue;
	} params;

	params.Quantity = Quantity;
	params.Coupon = Coupon;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_StoreItemPrice*    pPrice                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_StoreItem::UIX_ShowPurchaseConfirmation(class UPUMG_StoreItemPrice* pPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation");

	struct
	{
		class UPUMG_StoreItemPrice*    pPrice;
	} params;

	params.pPrice = pPrice;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItem.ShouldDisplayToUser
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::ShouldDisplayToUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.ShouldDisplayToUser");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_StoreItem::PurchaseFromPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItem.IsRented
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::IsRented(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsRented");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::IsRecipeFulfilled(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsOwned
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::IsOwned(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsOwned");

	struct
	{
		int64_t                        PlayerId;
		bool                           ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsOnSale
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::IsOnSale()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsOnSale");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsActive
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::HasPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.HasPortalOffer");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetVendorId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetVendorId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetVendorId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetUIHint
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetUIHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetUIHint");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetType
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetType");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSubType
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetSubType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSubType");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSortOrder
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetSortOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSortOrder");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIconAsPath
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSoftObjectPath         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FSoftObjectPath UPUMG_StoreItem::GetSoftItemIconAsPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSoftItemIconAsPath");

	struct
	{
		struct FSoftObjectPath         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TSoftObjectPtr<class UTexture2D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UPUMG_StoreItem::GetSoftItemIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon");

	struct
	{
		TSoftObjectPtr<class UTexture2D> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetRecipeEntryType
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetRecipeEntryType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetRecipeEntryType");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        PlayerId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetQuantityOwned(int64_t PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned");

	struct
	{
		int64_t                        PlayerId;
		int                            ReturnValue;
	} params;

	params.PlayerId = PlayerId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_StorePurchaseRequest* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StorePurchaseRequest* UPUMG_StoreItem::GetPurchaseRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest");

	struct
	{
		class UPUMG_StorePurchaseRequest* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPrices
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPUMG_StoreItemPrice*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StoreItemPrice*> UPUMG_StoreItem::GetPrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPrices");

	struct
	{
		TArray<class UPUMG_StoreItemPrice*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPrice
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UPlatformInventoryItem> nCurrencyType                  (CPF_Parm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItemPrice*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItemPrice* UPUMG_StoreItem::GetPrice(TSoftObjectPtr<class UPlatformInventoryItem> nCurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPrice");

	struct
	{
		TSoftObjectPtr<class UPlatformInventoryItem> nCurrencyType;
		class UPUMG_StoreItemPrice*    ReturnValue;
	} params;

	params.nCurrencyType = nCurrencyType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_PortalOffer*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_PortalOffer* UPUMG_StoreItem::GetPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPortalOffer");

	struct
	{
		class UPUMG_PortalOffer*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_StoreItem::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetLootQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetLootQuantity");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetLootId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetLootId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetLootId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetItemId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetItemId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TSoftObjectPtr<class UPlatformInventoryItem> UPUMG_StoreItem::GetInventoryItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetInventoryItem");

	struct
	{
		TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetFormattedNameDisplay
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ExternalQuantity               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_StoreItem::GetFormattedNameDisplay(int ExternalQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetFormattedNameDisplay");

	struct
	{
		int                            ExternalQuantity;
		struct FText                   ReturnValue;
	} params;

	params.ExternalQuantity = ExternalQuantity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetFormattedDescDisplay
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_StoreItem::GetFormattedDescDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetFormattedDescDisplay");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetDescription
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

struct FText UPUMG_StoreItem::GetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetDescription");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetCouponsForPrice
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_StoreItemPrice*    Price                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StoreItem*> UPUMG_StoreItem::GetCouponsForPrice(class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetCouponsForPrice");

	struct
	{
		class UPUMG_StoreItemPrice*    Price;
		TArray<class UPUMG_StoreItem*> ReturnValue;
	} params;

	params.Price = Price;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetBundleId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetBundleId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetBundleId");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetBestDiscount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItem::GetBestDiscount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetBestDiscount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetBestCouponForPrice
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_StoreItemPrice*    Price                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UPUMG_StoreItem::GetBestCouponForPrice(class UPUMG_StoreItemPrice* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetBestCouponForPrice");

	struct
	{
		class UPUMG_StoreItemPrice*    Price;
		class UPUMG_StoreItem*         ReturnValue;
	} params;

	params.Price = Price;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_StoreItem::ConfirmGotoPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItem.CanAfford
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_StoreItemPrice*    Price                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Quantity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItem::CanAfford(class UPUMG_StoreItemPrice* Price, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.CanAfford");

	struct
	{
		class UPUMG_StoreItemPrice*    Price;
		int                            Quantity;
		bool                           ReturnValue;
	} params;

	params.Price = Price;
	params.Quantity = Quantity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            XpLevel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UPUMG_XpTable::GetXpAtLevel(int XpLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetXpAtLevel");

	struct
	{
		int                            XpLevel;
		int64_t                        ReturnValue;
	} params;

	params.XpLevel = XpLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UPUMG_XpTable::GetXpAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetXpAtIndex");

	struct
	{
		int                            Index;
		int64_t                        ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_XpTable::GetMinXpLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetMinXpLevel");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetLevelCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_XpTable::GetLevelCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetLevelCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        XpPoints                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_XpTable::GetLevelAtXp(int64_t XpPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetLevelAtXp");

	struct
	{
		int64_t                        XpPoints;
		int                            ReturnValue;
	} params;

	params.XpPoints = XpPoints;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetId
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int64_t                        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int64_t UPUMG_XpTable::GetId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetId");

	struct
	{
		int64_t                        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Code                           (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_StoreItemHelper::UIX_RedeemCode(const struct FString& Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode");

	struct
	{
		struct FString                 Code;
	} params;

	params.Code = Code;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPUMG_StorePurchaseRequest* PurchaseRequest                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::UIX_CompletePurchaseItem(class UPUMG_StorePurchaseRequest* PurchaseRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem");

	struct
	{
		class UPUMG_StorePurchaseRequest* PurchaseRequest;
		bool                           ReturnValue;
	} params;

	params.PurchaseRequest = PurchaseRequest;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    VendorIds                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_StoreItemHelper::RequestVendorData(TArray<int> VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData");

	struct
	{
		TArray<int>                    VendorIds;
		int                            ReturnValue;
	} params;

	params.VendorIds = VendorIds;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.HasPendingPurchase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::HasPendingPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.HasPendingPurchase");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int64_t                        XpTableId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_XpTable*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_XpTable* UPUMG_StoreItemHelper::GetXpTable(int64_t XpTableId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable");

	struct
	{
		int64_t                        XpTableId;
		class UPUMG_XpTable*           ReturnValue;
	} params;

	params.XpTableId = XpTableId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            nVendorId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeInactiveItems          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSearchSubContainers           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StoreItem*> UPUMG_StoreItemHelper::GetStoreItemsForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor");

	struct
	{
		int                            nVendorId;
		bool                           bIncludeInactiveItems;
		bool                           bSearchSubContainers;
		TArray<class UPUMG_StoreItem*> ReturnValue;
	} params;

	params.nVendorId = nVendorId;
	params.bIncludeInactiveItems = bIncludeInactiveItems;
	params.bSearchSubContainers = bSearchSubContainers;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsAndQuantitiesForVendor
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            nVendorId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIncludeInactiveItems          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSearchSubContainers           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TMap<int, int>                 QuantityMap                    (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)
// int                            ExternalQuantity               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UPUMG_StoreItem*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StoreItem*> UPUMG_StoreItemHelper::GetStoreItemsAndQuantitiesForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers, int ExternalQuantity, TMap<int, int>* QuantityMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsAndQuantitiesForVendor");

	struct
	{
		int                            nVendorId;
		bool                           bIncludeInactiveItems;
		bool                           bSearchSubContainers;
		TMap<int, int>                 QuantityMap;
		int                            ExternalQuantity;
		TArray<class UPUMG_StoreItem*> ReturnValue;
	} params;

	params.nVendorId = nVendorId;
	params.bIncludeInactiveItems = bIncludeInactiveItems;
	params.bSearchSubContainers = bSearchSubContainers;
	params.ExternalQuantity = ExternalQuantity;

	UObject::ProcessEvent(fn, &params);

	if (QuantityMap != nullptr)
		*QuantityMap = params.QuantityMap;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            nVendorId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            nItemId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSearchSubVendors              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendorByItemId(int nVendorId, int nItemId, bool bSearchSubVendors)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId");

	struct
	{
		int                            nVendorId;
		int                            nItemId;
		bool                           bSearchSubVendors;
		class UPUMG_StoreItem*         ReturnValue;
	} params;

	params.nVendorId = nVendorId;
	params.nItemId = nItemId;
	params.bSearchSubVendors = bSearchSubVendors;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            nVendorId                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            nLootItemId                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendor(int nVendorId, int nLootItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor");

	struct
	{
		int                            nVendorId;
		int                            nLootItemId;
		class UPUMG_StoreItem*         ReturnValue;
	} params;

	params.nVendorId = nVendorId;
	params.nLootItemId = nLootItemId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            LootId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UPUMG_StoreItem*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItem(int LootId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem");

	struct
	{
		int                            LootId;
		class UPUMG_StoreItem*         ReturnValue;
	} params;

	params.LootId = LootId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetPendingPurchaseData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UPUMG_StorePurchaseRequest*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

TArray<class UPUMG_StorePurchaseRequest*> UPUMG_StoreItemHelper::GetPendingPurchaseData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetPendingPurchaseData");

	struct
	{
		TArray<class UPUMG_StorePurchaseRequest*> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_StoreItemHelper::ExitInGameStoreUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_StoreItemHelper::EnterInGameStoreUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::DoesPortalHaveOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::AreXpTablesLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.ArePricePointsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::ArePricePointsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.ArePricePointsLoaded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.ArePortalOffersLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_StoreItemHelper::ArePortalOffersLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.ArePortalOffersLoaded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewRedirecter.ShouldRedirect
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   Route                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 SceneData                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewRedirecter::ShouldRedirect(class APUMG_HUD* HUD, const struct FName& Route, class UObject** SceneData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewRedirecter.ShouldRedirect");

	struct
	{
		class APUMG_HUD*               HUD;
		struct FName                   Route;
		class UObject*                 SceneData;
		bool                           ReturnValue;
	} params;

	params.HUD = HUD;
	params.Route = Route;

	UObject::ProcessEvent(fn, &params);

	if (SceneData != nullptr)
		*SceneData = params.SceneData;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewLayer.IsRouteValid
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewLayer::IsRouteValid(const struct FName& RouteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewLayer.IsRouteValid");

	struct
	{
		struct FName                   RouteName;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_InternalShowStep
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_ViewLayer::GoToRoute_InternalShowStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewLayer.GoToRoute_InternalShowStep");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleShowFinished
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ViewLayer::GoToRoute_HandleShowFinished(class UPUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleShowFinished");

	struct
	{
		class UPUMG_Widget*            Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleHideFinished
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPUMG_Widget*            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ViewLayer::GoToRoute_HandleHideFinished(class UPUMG_Widget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleHideFinished");

	struct
	{
		class UPUMG_Widget*            Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewManager.SwapRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   SwapTargetRoute                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::SwapRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.SwapRoute");

	struct
	{
		struct FName                   RouteName;
		struct FName                   SwapTargetRoute;
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.SetPendingRouteData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ViewManager::SetPendingRouteData(const struct FName& RouteName, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.SetPendingRouteData");

	struct
	{
		struct FName                   RouteName;
		class UObject*                 Data;
	} params;

	params.RouteName = RouteName;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::ReplaceRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ReplaceRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ForceTransition;
		class UObject*                 Data;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.RemoveRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::RemoveRoute(const struct FName& RouteName, bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.RemoveRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.PushRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::PushRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.PushRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ForceTransition;
		class UObject*                 Data;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.PopRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ForceTransition                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::PopRoute(bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.PopRoute");

	struct
	{
		bool                           ForceTransition;
		bool                           ReturnValue;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.IsLayerIdle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewManagerLayer              LayerType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::IsLayerIdle(EViewManagerLayer LayerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.IsLayerIdle");

	struct
	{
		EViewManagerLayer              LayerType;
		bool                           ReturnValue;
	} params;

	params.LayerType = LayerType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.IsEveryLayerIdle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::IsEveryLayerIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.IsEveryLayerIdle");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.IsBlockingAcquisitions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::IsBlockingAcquisitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.IsBlockingAcquisitions");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.InitializeRoutes
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UDataTable*              RouteTable                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_ViewManager::InitializeRoutes(class UDataTable* RouteTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.InitializeRoutes");

	struct
	{
		class UDataTable*              RouteTable;
	} params;

	params.RouteTable = RouteTable;

	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewManager.Initialize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPUMG_ViewManager::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.Initialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_ViewManager.HasCompletedRedirectFlow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewRouteRedirectionPhase     RedirectPhase                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::HasCompletedRedirectFlow(EViewRouteRedirectionPhase RedirectPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.HasCompletedRedirectFlow");

	struct
	{
		EViewRouteRedirectionPhase     RedirectPhase;
		bool                           ReturnValue;
	} params;

	params.RedirectPhase = RedirectPhase;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetViewRouteCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UPUMG_ViewManager::GetViewRouteCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetViewRouteCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetTopViewRouteWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPUMG_Widget*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UPUMG_Widget* UPUMG_ViewManager::GetTopViewRouteWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetTopViewRouteWidget");

	struct
	{
		class UPUMG_Widget*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetTopViewRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UPUMG_ViewManager::GetTopViewRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetTopViewRoute");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetTopLayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewManagerLayer              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EViewManagerLayer UPUMG_ViewManager::GetTopLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetTopLayer");

	struct
	{
		EViewManagerLayer              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 Data                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::GetPendingRouteData(const struct FName& RouteName, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData");

	struct
	{
		struct FName                   RouteName;
		class UObject*                 Data;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;

	UObject::ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetDefaultRouteForLayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewManagerLayer              LayerType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UPUMG_ViewManager::GetDefaultRouteForLayer(EViewManagerLayer LayerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetDefaultRouteForLayer");

	struct
	{
		EViewManagerLayer              LayerType;
		struct FName                   ReturnValue;
	} params;

	params.LayerType = LayerType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewManagerLayer              Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UPUMG_ViewManager::GetCurrentTransitionRoute(EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute");

	struct
	{
		EViewManagerLayer              Layer;
		struct FName                   ReturnValue;
	} params;

	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EViewManagerLayer              Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FName UPUMG_ViewManager::GetCurrentRoute(EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute");

	struct
	{
		EViewManagerLayer              Layer;
		struct FName                   ReturnValue;
	} params;

	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.ContainsRoute
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   RouteName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UPUMG_ViewManager::ContainsRoute(const struct FName& RouteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ContainsRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ReturnValue;
	} params;

	params.RouteName = RouteName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_VoiceChatManager.OnPartyDataUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void UPUMG_VoiceChatManager::OnPartyDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_VoiceChatManager.OnPartyDataUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlatformUMG.PUMG_VoiceChatManager.OnMatchStatusUpdated
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// EPUMG_MatchStatus              MatchStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPUMG_VoiceChatManager::OnMatchStatusUpdated(EPUMG_MatchStatus MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_VoiceChatManager.OnMatchStatusUpdated");

	struct
	{
		EPUMG_MatchStatus              MatchStatus;
	} params;

	params.MatchStatus = MatchStatus;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
