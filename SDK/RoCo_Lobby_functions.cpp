// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Lobby_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InPartyOwnerId                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
		struct FUniqueNetIdRepl        InPartyOwnerId;
	} params;

	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 InSessionId                    (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FString                 UrlString                      (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");

	struct
	{
		struct FString                 InSessionId;
		struct FUniqueNetIdRepl        InUniqueId;
		struct FString                 UrlString;
	} params;

	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FText                   Reason                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");

	struct
	{
		struct FUniqueNetIdRepl        PlayerToKick;
		struct FText                   Reason;
	} params;

	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 Msg                            (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");

	struct
	{
		struct FString                 Msg;
	} params;

	params.Msg = Msg;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   KickReason                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");

	struct
	{
		struct FText                   KickReason;
	} params;

	params.KickReason = KickReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FJoinabilitySettings    Settings                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");

	struct
	{
		struct FJoinabilitySettings    Settings;
	} params;

	params.Settings = Settings;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
	} params;

	params.InUniqueId = InUniqueId;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FText                   NewPlayerName                  (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");

	struct
	{
		struct FText                   NewPlayerName;
		struct FUniqueNetIdRepl        InUniqueId;
	} params;

	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWasSuccessful                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");

	struct
	{
		struct FUniqueNetIdRepl        InUniqueId;
		bool                           bWasSuccessful;
	} params;

	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ALobbyBeaconClient::ClientJoinGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetClient)

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (FUNC_Final, FUNC_Native, FUNC_Protected)

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
