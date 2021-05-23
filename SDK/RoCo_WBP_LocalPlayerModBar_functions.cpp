// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LocalPlayerModBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_LocalPlayerModBar_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PostSetPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_LocalPlayerModBar_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.PreClearPawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.Handle Mods Updated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LocalPlayerModBar_C::Handle_Mods_Updated(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.Handle Mods Updated"));

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.ExecuteUbergraph_WBP_LocalPlayerModBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LocalPlayerModBar_C::ExecuteUbergraph_WBP_LocalPlayerModBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LocalPlayerModBar.WBP_LocalPlayerModBar_C.ExecuteUbergraph_WBP_LocalPlayerModBar"));

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
