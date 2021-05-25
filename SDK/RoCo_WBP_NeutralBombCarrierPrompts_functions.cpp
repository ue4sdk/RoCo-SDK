// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NeutralBombCarrierPrompts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      AddedEquipment                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::EquipmentAdded(class UKSWeaponComponent* AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentAdded");

	struct
	{
		class UKSWeaponComponent*      AddedEquipment;
	} params;

	params.AddedEquipment = AddedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      RemovedEquipment               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentRemoved");

	struct
	{
		class UKSWeaponComponent*      RemovedEquipment;
	} params;

	params.RemovedEquipment = RemovedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Update Prompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::Update_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Update Prompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact Start
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Interact_Start(class AActor* Target, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact Start");

	struct
	{
		class AActor*                  Target;
		float                          Duration;
	} params;

	params.Target = Target;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact End
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Interact_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact End");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Bomb Hidden Interactable Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Bomb_Hidden_Interactable_Update(class AActor* Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Bomb Hidden Interactable Update");

	struct
	{
		class AActor*                  Interactable;
	} params;

	params.Interactable = Interactable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Tracked Bomb Active Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            EquipmentOwner                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponComponent*      Equipment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Tracked_Bomb_Active_Changed(class AKSCharacter* EquipmentOwner, class UKSWeaponComponent* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Tracked Bomb Active Changed");

	struct
	{
		class AKSCharacter*            EquipmentOwner;
		class UKSWeaponComponent*      Equipment;
	} params;

	params.EquipmentOwner = EquipmentOwner;
	params.Equipment = Equipment;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.OnRoundOver
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSGameState*            GameState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRoundResult            RoundResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void UWBP_NeutralBombCarrierPrompts_C::OnRoundOver(class AKSGameState* GameState, const struct FRoundResult& RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.OnRoundOver");

	struct
	{
		class AKSGameState*            GameState;
		struct FRoundResult            RoundResult;
	} params;

	params.GameState = GameState;
	params.RoundResult = RoundResult;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Clear Current Tracked Bomb
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSkipPromptUpdate              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_NeutralBombCarrierPrompts_C::Clear_Current_Tracked_Bomb(bool bSkipPromptUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Clear Current Tracked Bomb");

	struct
	{
		bool                           bSkipPromptUpdate;
	} params;

	params.bSkipPromptUpdate = bSkipPromptUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.ExecuteUbergraph_WBP_NeutralBombCarrierPrompts
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_NeutralBombCarrierPrompts_C::ExecuteUbergraph_WBP_NeutralBombCarrierPrompts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.ExecuteUbergraph_WBP_NeutralBombCarrierPrompts");

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
