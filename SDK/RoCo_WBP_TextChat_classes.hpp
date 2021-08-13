#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TextChat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C
// 0x0051 (0x0591 - 0x0540)
class UWBP_TextChat_C : public UKSTextChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_TextChat_ChatWindow_C*                  ChatWindow;                                               // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     ClickCatcher;                                             // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TextChat_Input_C*                       TextInput;                                                // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsEditingActive;                                          // 0x0560(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0561(0x0003) MISSED OFFSET
	float                                              ChatMessageAutoHideDelay;                                 // 0x0564(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FPUMG_ActiveChatChannelData                 CachedCurrentChannel;                                     // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	bool                                               NeedToClearFocus;                                         // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0579(0x0007) MISSED OFFSET
	TArray<struct FKey>                                CancelKeys;                                               // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	bool                                               WaitForCancelReleaseToClearFocus;                         // 0x0590(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C");
		return ptr;
	}


	void IsTextChatEnabled(bool* IsEnabled);
	void HandleTextChatEnabledApplied(bool Value);
	void AddCancelKey(const struct FKey& Key);
	void ConsumeCancelInputReleased();
	void IsAnyCancelKeyDown(bool* AnyKeyDown);
	void AddAllCancelKeys(TArray<struct FName>* Actions);
	void ProcessDelayedFocusClear();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void HandleSubmitTextInput(const struct FText& Text);
	bool CanChatInChannel(EPUMG_ChatChannel Channel);
	void GetDefaultChannel(EPUMG_ChatChannel* DefaultChannel);
	void HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData);
	void HandleChatMessage(struct FPUMG_ChatData* Message);
	void DisableInputListeners();
	void EnableInputListeners();
	void ConsumeCancelInputPressed();
	void SetUIFocus(bool IsFocused);
	void DisplayTextChat();
	void FinishTextChat(bool ShouldSubmitText, bool WaitForCancelRelease, struct FText* InputText);
	void StartTextChat(bool BeginChatCommand);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenTextChat(bool BeginChatCommand);
	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void InitializeWidgetNavigation();
	void HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage);
	void OnChannelChanged(const struct FPUMG_ActiveChatChannelData& ChatChannelData);
	void HandleChatChannelJoined(EPUMG_ChatChannel Channel);
	void HandleChatChannelLeft(EPUMG_ChatChannel Channel);
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnCancelButtonPressed(const struct FKey& Key);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void HandleCloseTextChat();
	void HandleTextChatEnabledChanged();
	void ShowTextChat();
	void OnRadialMenuItemUse(const struct FRadialMenuItemEventInfo& EventInfo);
	void ExecuteUbergraph_WBP_TextChat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
