// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomGameLobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ToggleContextBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::ToggleContextBar(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ToggleContextBar"));

	struct
	{
		bool                           bShouldShow;
	} params;

	params.bShouldShow = bShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateSpectateState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::UpdateSpectateState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateSpectateState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupSpectateButtonNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::SetupSpectateButtonNavigation(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupSpectateButtonNavigation"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupStartButtonNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::SetupStartButtonNavigation(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupStartButtonNavigation"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CustomGameLobby_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp"));

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


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_CustomLobbyPlayer_C* PlayerWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::TogglePlayerCardFor(class UKSPlayerInfo* playerinfo, class UWBP_CustomLobbyPlayer_C* PlayerWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UWBP_CustomLobbyPlayer_C* PlayerWidget;
	} params;

	params.playerinfo = playerinfo;
	params.PlayerWidget = PlayerWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsTalking                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsMuted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::HandleVoiceMemberUpdate(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate"));

	struct
	{
		struct FString                 AccountId;
		bool                           bIsTalking;
		bool                           bIsMuted;
	} params;

	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandleVoiceMemberRemoved(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandleVoiceMemberAdded(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 VoiceId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_CustomLobbyPlayer_C* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::GetMemberWidgetForVoice(const struct FString& VoiceId, class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice"));

	struct
	{
		struct FString                 VoiceId;
		class UWBP_CustomLobbyPlayer_C* Widget;
	} params;

	params.VoiceId = VoiceId;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupExistingPlayers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupQueueFactoryEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus              MatchStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::OnQueueStateUpdated(EPUMG_MatchStatus MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated"));

	struct
	{
		EPUMG_MatchStatus              MatchStatus;
	} params;

	params.MatchStatus = MatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UKSWidget*>       TeamButtons                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::GetTeamButtons(TArray<class UKSWidget*>* TeamButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons"));

	struct
	{
		TArray<class UKSWidget*>       TeamButtons;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TeamButtons != nullptr)
		*TeamButtons = params.TeamButtons;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::MassInvite_Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EKSInviteSelectResult          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

EKSInviteSelectResult UWBP_CustomGameLobby_C::MassInvite_Select(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		EKSInviteSelectResult          ReturnValue;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomGameLobby_C::MassInvite_IsSelected(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		bool                           ReturnValue;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomGameLobby_C::MassInvite_ShouldShowPlayer(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		bool                           ReturnValue;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnReceiveHostName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueState
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::UpdateQueueState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::FinalizeLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog"));

	struct
	{
		struct FText                   Text;
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.Text = Text;
	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPUMG_CustomMatchPermission    NewPermissions                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPUMG_CustomMatchPermission    OldPermissions                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::LogPermissionChange(class UPUMG_PlayerInfo* playerinfo, EPUMG_CustomMatchPermission NewPermissions, EPUMG_CustomMatchPermission OldPermissions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange"));

	struct
	{
		class UPUMG_PlayerInfo*        playerinfo;
		EPUMG_CustomMatchPermission    NewPermissions;
		EPUMG_CustomMatchPermission    OldPermissions;
	} params;

	params.playerinfo = playerinfo;
	params.NewPermissions = NewPermissions;
	params.OldPermissions = OldPermissions;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::HandleReceivePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPUMG_CustomMatchMember PUMG_CustomMatchMember         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_CustomGameLobby_C::GetTeamName(const struct FPUMG_CustomMatchMember& PUMG_CustomMatchMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName"));

	struct
	{
		struct FPUMG_CustomMatchMember PUMG_CustomMatchMember;
		struct FText                   ReturnValue;
	} params;

	params.PUMG_CustomMatchMember = PUMG_CustomMatchMember;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UPUMG_PlayerInfo*        playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::AddLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog"));

	struct
	{
		struct FText                   Text;
		class UPUMG_PlayerInfo*        playerinfo;
	} params;

	params.Text = Text;
	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember FormerMember                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Removed                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::RemoveMember(struct FPUMG_CustomMatchMember* FormerMember, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember"));

	struct
	{
		struct FPUMG_CustomMatchMember FormerMember;
		bool                           Removed;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FormerMember != nullptr)
		*FormerMember = params.FormerMember;
	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember MatchMember                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           Added                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::AddMember(const struct FPUMG_CustomMatchMember& MatchMember, bool* Added)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember"));

	struct
	{
		struct FPUMG_CustomMatchMember MatchMember;
		bool                           Added;
	} params;

	params.MatchMember = MatchMember;

	UObject::ProcessEvent(fn, &params);

	if (Added != nullptr)
		*Added = params.Added;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CustomGameLobby_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::TEST_InviteNextAvailablePlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::SetupTeamNavigation(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFBP_CustomMatchTeam    Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::UpdateWidgetsWithData(struct FFBP_CustomMatchTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData"));

	struct
	{
		struct FFBP_CustomMatchTeam    Team;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Team != nullptr)
		*Team = params.Team;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember MatchMember                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPUMG_CustomMatchMember PreviousData                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::OnMemberUpdate(const struct FPUMG_CustomMatchMember& MatchMember, const struct FPUMG_CustomMatchMember& PreviousData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate"));

	struct
	{
		struct FPUMG_CustomMatchMember MatchMember;
		struct FPUMG_CustomMatchMember PreviousData;
	} params;

	params.MatchMember = MatchMember;
	params.PreviousData = PreviousData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember FormerMember                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::OnMemberRemoved(const struct FPUMG_CustomMatchMember& FormerMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved"));

	struct
	{
		struct FPUMG_CustomMatchMember FormerMember;
	} params;

	params.FormerMember = FormerMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember MatchMember                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::OnMemberAdded(const struct FPUMG_CustomMatchMember& MatchMember)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded"));

	struct
	{
		struct FPUMG_CustomMatchMember MatchMember;
	} params;

	params.MatchMember = MatchMember;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSQueueDataFactory*     DataFactory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::GetQueueDataFactory(class UKSQueueDataFactory** DataFactory)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory"));

	struct
	{
		class UKSQueueDataFactory*     DataFactory;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            TeamPanel                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TeamId                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ELaterality>       ControlsSide                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NumPlayers                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::PopulateTeamRenderers(class UPanelWidget* TeamPanel, int TeamId, TEnumAsByte<ELaterality> ControlsSide, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers"));

	struct
	{
		class UPanelWidget*            TeamPanel;
		int                            TeamId;
		TEnumAsByte<ELaterality>       ControlsSide;
		int                            NumPlayers;
	} params;

	params.TeamPanel = TeamPanel;
	params.TeamId = TeamId;
	params.ControlsSide = ControlsSide;
	params.NumPlayers = NumPlayers;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupRenderers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::SetupDisplayElements()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        QueueInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_CustomGameLobby_C::UpdateQueueInfo(const struct FClientQueueInfo& QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo"));

	struct
	{
		struct FClientQueueInfo        QueueInfo;
	} params;

	params.QueueInfo = QueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::HandleDataChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::InvalidateData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandlePlayerClicked(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandleEmptyClicked(class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked"));

	struct
	{
		class UKSWidget*               Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandlePlayerKick(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWidget*               Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::HandlePlayerSwap(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
		class UKSWidget*               Widget;
	} params;

	params.playerinfo = playerinfo;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnClickBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::OnPlayerHovered(class UWBP_CustomLobbyPlayer_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered"));

	struct
	{
		class UWBP_CustomLobbyPlayer_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::OnPlayerUnhovered(class UWBP_CustomLobbyPlayer_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered"));

	struct
	{
		class UWBP_CustomLobbyPlayer_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::OnQueueLeft()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsTalking                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsMuted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature"));

	struct
	{
		struct FString                 AccountId;
		bool                           bIsTalking;
		bool                           bIsMuted;
	} params;

	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameLobby_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature"));

	struct
	{
		class UWidget*                 FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UWidget*                 Default_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature"));

	struct
	{
		TArray<class UWidget*>         NavWidgets;
		class UWidget*                 Default_Widget;
	} params;

	params.Default_Widget = Default_Widget;

	UObject::ProcessEvent(fn, &params);

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_CustomGameLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameLobby_C::ExecuteUbergraph_WBP_CustomGameLobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby"));

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
