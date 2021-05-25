// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FavoriteLobbyCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.SetLobbyNameplate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFavoriteLobbyCharacter_C::SetLobbyNameplate(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.SetLobbyNameplate");

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.HideLobbyNameplate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFavoriteLobbyCharacter_C::HideLobbyNameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.HideLobbyNameplate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ShowLobbyNameplate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AFavoriteLobbyCharacter_C::ShowLobbyNameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ShowLobbyNameplate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFavoriteLobbyCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ExecuteUbergraph_FavoriteLobbyCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AFavoriteLobbyCharacter_C::ExecuteUbergraph_FavoriteLobbyCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FavoriteLobbyCharacter.FavoriteLobbyCharacter_C.ExecuteUbergraph_FavoriteLobbyCharacter");

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
