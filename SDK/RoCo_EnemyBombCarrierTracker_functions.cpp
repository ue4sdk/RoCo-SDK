// Rogue Company (0.6X) SDK

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
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          New_Bomb_Holder                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Try_Create_Tracking(class AKSPlayerState* New_Bomb_Holder)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Create Tracking");

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
	static auto fn = UObject::FindObject<UFunction>("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Try Remove Current Tracking");

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
// class AKSPlayerState*          KSPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Handle_Bomb_State_Changed(class AKSPlayerState* KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Handle Bomb State Changed");

	struct
	{
		class AKSPlayerState*          KSPlayerState;
	} params;

	params.KSPlayerState = KSPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Bind Game And Player
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEnemyBombCarrierTracker_C::Bind_Game_And_Player(class APlayerController* Player_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyBombCarrierTracker.EnemyBombCarrierTracker_C.Bind Game And Player");

	struct
	{
		class APlayerController*       Player_Controller;
	} params;

	params.Player_Controller = Player_Controller;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
