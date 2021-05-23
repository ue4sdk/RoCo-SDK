// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NewWeaponInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewWeaponInventory.NewWeaponInventory_C.HandleDeathStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::HandleDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.HandleDeathStateChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.UnbindKSCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::UnbindKSCharacter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.UnbindKSCharacter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.BindKSCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::BindKSCharacter()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.BindKSCharacter"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.AddGameRuleWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Game_Rule_Widget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Parent_Widget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::AddGameRuleWidget(class UUserWidget* Game_Rule_Widget, const struct FString& Parent_Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.AddGameRuleWidget"));

	struct
	{
		class UUserWidget*             Game_Rule_Widget;
		struct FString                 Parent_Widget;
	} params;

	params.Game_Rule_Widget = Game_Rule_Widget;
	params.Parent_Widget = Parent_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.OnInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.OnInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      AddedEquipment                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::EquipmentAdded(class UKSWeaponComponent* AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.EquipmentAdded"));

	struct
	{
		class UKSWeaponComponent*      AddedEquipment;
	} params;

	params.AddedEquipment = AddedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      RemovedEquipment               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::EquipmentRemoved(class UKSWeaponComponent* RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.EquipmentRemoved"));

	struct
	{
		class UKSWeaponComponent*      RemovedEquipment;
	} params;

	params.RemovedEquipment = RemovedEquipment;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::Handle_Swap_Gamepad_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Pressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Released
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewWeaponInventory_C::Handle_Swap_Gamepad_Released()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Released"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.SetKillCamWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ViewPawn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::SetKillCamWeapon(class APawn* ViewPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.SetKillCamWeapon"));

	struct
	{
		class APawn*                   ViewPawn;
	} params;

	params.ViewPawn = ViewPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function NewWeaponInventory.NewWeaponInventory_C.ExecuteUbergraph_NewWeaponInventory
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UNewWeaponInventory_C::ExecuteUbergraph_NewWeaponInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NewWeaponInventory.NewWeaponInventory_C.ExecuteUbergraph_NewWeaponInventory"));

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
