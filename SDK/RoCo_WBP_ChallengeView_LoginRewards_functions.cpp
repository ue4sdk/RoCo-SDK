// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeView_LoginRewards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardGridEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::BindRewardGridEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardGridEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemUnhovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemUnhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemHovered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_LoginRewardItem_C*  RewardItemWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemHovered(class UWBP_LoginRewardItem_C* RewardItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemHovered"));

	struct
	{
		class UWBP_LoginRewardItem_C*  RewardItemWidget;
	} params;

	params.RewardItemWidget = RewardItemWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::BindRewardItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.BindRewardItems"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetupRewardItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::SetupRewardItems()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetupRewardItems"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ResetRewardItemsNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::ResetRewardItemsNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ResetRewardItemsNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetRewardItemNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::SetRewardItemNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.SetRewardItemNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemsReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLoginRewardItem> RewardItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_LoginRewards_C::HandleRewardItemsReady(TArray<struct FLoginRewardItem>* RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.HandleRewardItemsReady"));

	struct
	{
		TArray<struct FLoginRewardItem> RewardItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_LoginRewards_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ChallengeView_LoginRewards_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ExecuteUbergraph_WBP_ChallengeView_LoginRewards
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ChallengeView_LoginRewards_C::ExecuteUbergraph_WBP_ChallengeView_LoginRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ChallengeView_LoginRewards.WBP_ChallengeView_LoginRewards_C.ExecuteUbergraph_WBP_ChallengeView_LoginRewards"));

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
