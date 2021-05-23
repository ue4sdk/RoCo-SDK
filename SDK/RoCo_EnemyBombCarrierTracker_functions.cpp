// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EnemyBombCarrierTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Create Tracking
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          New_Bomb_Holder                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Try_Create_Tracking(class AKSPlayerState* New_Bomb_Holder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Create Tracking"));

	struct
	{
		class AKSPlayerState*          New_Bomb_Holder;
	} params;

	params.New_Bomb_Holder = New_Bomb_Holder;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Remove Current Tracking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          New_Bomb_Holder                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Try_Remove_Current_Tracking(class AKSPlayerState* New_Bomb_Holder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Remove Current Tracking"));

	struct
	{
		class AKSPlayerState*          New_Bomb_Holder;
	} params;

	params.New_Bomb_Holder = New_Bomb_Holder;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Handle Bomb State Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UEnemyBombCarrierTracker_C::Handle_Bomb_State_Changed(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Handle Bomb State Changed"));

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Bind Game And Player
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState_NeutralBomb* Neutral_Bomb_Game_State        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APlayerController*       Player_Controller              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Bind_Game_And_Player(class AKSGameState_NeutralBomb* Neutral_Bomb_Game_State, class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Bind Game And Player"));

	struct
	{
		class AKSGameState_NeutralBomb* Neutral_Bomb_Game_State;
		class APlayerController*       Player_Controller;
	} params;

	params.Neutral_Bomb_Game_State = Neutral_Bomb_Game_State;
	params.Player_Controller = Player_Controller;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
