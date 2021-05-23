// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlePassEmblem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetPremiumUpsellState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassEmblem_C::SetPremiumUpsellState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetPremiumUpsellState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoExplicit
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasPremium                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            Tier                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassEmblem_C::SetBattlePassInfoExplicit(bool HasPremium, int Tier)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoExplicit"));

	struct
	{
		bool                           HasPremium;
		int                            Tier;
	} params;

	params.HasPremium = HasPremium;
	params.Tier = Tier;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromStoreItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassEmblem_C::SetBattlePassInfoFromStoreItem(class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromStoreItem"));

	struct
	{
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassEmblem_C::SetBattlePassInfoFromActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.SetBattlePassInfoFromActivityInstance"));

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeBadgeTextures
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlePassEmblem_C::InitializeBadgeTextures()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeBadgeTextures"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassEmblem_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.ExecuteUbergraph_WBP_BattlePassEmblem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlePassEmblem_C::ExecuteUbergraph_WBP_BattlePassEmblem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlePassEmblem.WBP_BattlePassEmblem_C.ExecuteUbergraph_WBP_BattlePassEmblem"));

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
