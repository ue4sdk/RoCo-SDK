// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_SpendCash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.HandleTrackerInitialized
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TMap<struct FString, float>    Config                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TMap<struct FString, struct FString> StringConfig                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEventTracker_Spring2021_SpendCash_C::HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.HandleTrackerInitialized");

	struct
	{
		TMap<struct FString, float>    Config;
		TMap<struct FString, struct FString> StringConfig;
	} params;

	params.Config = Config;
	params.StringConfig = StringConfig;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.HandleLostPlayerController
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_SpendCash_C::HandleLostPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.HandleLostPlayerController");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.MatchHasEnded_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEventTracker_Spring2021_SpendCash_C::MatchHasEnded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.MatchHasEnded_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.OnShopItemPurchased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEventTracker_Spring2021_SpendCash_C::OnShopItemPurchased(const struct FShopItem& ShopItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.OnShopItemPurchased");

	struct
	{
		struct FShopItem               ShopItem;
	} params;

	params.ShopItem = ShopItem;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.OnShopItemRefunded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FShopItem               ShopItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UEventTracker_Spring2021_SpendCash_C::OnShopItemRefunded(const struct FShopItem& ShopItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.OnShopItemRefunded");

	struct
	{
		struct FShopItem               ShopItem;
	} params;

	params.ShopItem = ShopItem;

	UObject::ProcessEvent(fn, &params);
}


// Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.ExecuteUbergraph_EventTracker_Spring2021_SpendCash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEventTracker_Spring2021_SpendCash_C::ExecuteUbergraph_EventTracker_Spring2021_SpendCash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTracker_Spring2021_SpendCash.EventTracker_Spring2021_SpendCash_C.ExecuteUbergraph_EventTracker_Spring2021_SpendCash");

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
