// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoginRewards_ClaimScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.PlayClaimedRewardAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewards_ClaimScreen_C::PlayClaimedRewardAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.PlayClaimedRewardAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.HandleRewardsReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLoginRewardItem> RewardItems                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_LoginRewards_ClaimScreen_C::HandleRewardsReady(TArray<struct FLoginRewardItem>* RewardItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.HandleRewardsReady");

	struct
	{
		TArray<struct FLoginRewardItem> RewardItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewards_ClaimScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewards_ClaimScreen_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewards_ClaimScreen_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.CloseLoginClaimScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoginRewards_ClaimScreen_C::CloseLoginClaimScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.CloseLoginClaimScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewards_ClaimScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoginRewards_ClaimScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.ExecuteUbergraph_WBP_LoginRewards_ClaimScreen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoginRewards_ClaimScreen_C::ExecuteUbergraph_WBP_LoginRewards_ClaimScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoginRewards_ClaimScreen.WBP_LoginRewards_ClaimScreen_C.ExecuteUbergraph_WBP_LoginRewards_ClaimScreen");

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
