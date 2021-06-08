// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Thrifty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Thrifty.EventTracker_Thrifty_C.DidPlayerWinMatch
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UEventTracker_Thrifty_C::DidPlayerWinMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.DidPlayerWinMatch");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EventTracker_Thrifty.EventTracker_Thrifty_C.MatchHasEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_Thrifty_C::MatchHasEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.MatchHasEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Thrifty.EventTracker_Thrifty_C.Hande OnShopItemPurchased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEventTracker_Thrifty_C::Hande_OnShopItemPurchased(const struct FShopItem& ShopItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.Hande OnShopItemPurchased");

	struct
	{
		struct FShopItem               ShopItem;
	} params;

	params.ShopItem = ShopItem;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Thrifty.EventTracker_Thrifty_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Thrifty_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Thrifty.EventTracker_Thrifty_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Thrifty_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Thrifty.EventTracker_Thrifty_C.ExecuteUbergraph_EventTracker_Thrifty
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Thrifty_C::ExecuteUbergraph_EventTracker_Thrifty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Thrifty.EventTracker_Thrifty_C.ExecuteUbergraph_EventTracker_Thrifty");

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
