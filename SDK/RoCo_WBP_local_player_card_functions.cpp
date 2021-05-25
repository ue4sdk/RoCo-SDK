// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_local_player_card_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_local_player_card.WBP_local_player_card_C.UpdatePendingPurchaseWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::UpdatePendingPurchaseWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.UpdatePendingPurchaseWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerAvatar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerAvatar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::SetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_local_player_card_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_local_player_card_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_local_player_card_C::ExecuteUbergraph_WBP_local_player_card(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card");

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
