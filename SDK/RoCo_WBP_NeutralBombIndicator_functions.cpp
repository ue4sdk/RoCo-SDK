// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NeutralBombIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.GetObjectiveHolder
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombIndicator_C::GetObjectiveHolder(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.GetObjectiveHolder");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleObjectiveStateChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NeutralBombIndicator_C::HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleObjectiveStateChanged");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_NeutralBombIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleBombStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_NeutralBombIndicator_C::HandleBombStateChanged(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleBombStateChanged");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleViewedPawnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerController*     Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OldViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  NewViewTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombIndicator_C::HandleViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleViewedPawnChanged");

	struct
	{
		class AKSPlayerController*     Controller;
		class AActor*                  OldViewTarget;
		class AActor*                  NewViewTarget;
	} params;

	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombIndicator_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleOnGameObjectiveRegistered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UKSObjective> GameObjective                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NeutralBombIndicator_C::HandleOnGameObjectiveRegistered(const TScriptInterface<class UKSObjective>& GameObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.HandleOnGameObjectiveRegistered");

	struct
	{
		TScriptInterface<class UKSObjective> GameObjective;
	} params;

	params.GameObjective = GameObjective;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.ExecuteUbergraph_WBP_NeutralBombIndicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombIndicator_C::ExecuteUbergraph_WBP_NeutralBombIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombIndicator.WBP_NeutralBombIndicator_C.ExecuteUbergraph_WBP_NeutralBombIndicator");

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
