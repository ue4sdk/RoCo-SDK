// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewWBP_LobbyNameplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedTotal
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            RequiredPlacementMatches       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWBP_LobbyNameplate_C::UpdateRankedTotal(bool Index, int RequiredPlacementMatches)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedTotal");

	struct
	{
		bool                           Index;
		int                            RequiredPlacementMatches;
	} params;

	params.Index = Index;
	params.RequiredPlacementMatches = RequiredPlacementMatches;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePlayerName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::UpdateRankedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateRankedData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPartyUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnPartyUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPartyUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateSelectedQueue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::UpdateSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdateSelectedQueue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerDisplayVisible
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNewWBP_LobbyNameplate_C::SetPlayerDisplayVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerDisplayVisible");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePartyLeaderIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::UpdatePartyLeaderIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.UpdatePartyLeaderIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWBP_LobbyNameplate_C::SetPlayerInfo(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetPlayerInfo");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWBP_LobbyNameplate_C::OnPossession(class APlayerState* PlayerState, class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession");

	struct
	{
		class APlayerState*            PlayerState;
		class AKSCharacter*            Character;
	} params;

	params.PlayerState = PlayerState;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InName                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNewWBP_LobbyNameplate_C::SetName(const struct FText& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName");

	struct
	{
		struct FText                   InName;
	} params;

	params.InName = InName;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetAvatar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 AvatarItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWBP_LobbyNameplate_C::SetAvatar(class UKSItem* AvatarItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetAvatar");

	struct
	{
		class UKSItem*                 AvatarItem;
	} params;

	params.AvatarItem = AvatarItem;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UNewWBP_LobbyNameplate_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.RefreshRankedData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWBP_LobbyNameplate_C::RefreshRankedData()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.RefreshRankedData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWBP_LobbyNameplate_C::ExecuteUbergraph_NewWBP_LobbyNameplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate");

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
