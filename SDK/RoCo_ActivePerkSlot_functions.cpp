// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ActivePerkSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivePerkSlot.ActivePerkSlot_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UActivePerkSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UActivePerkSlot_C::HandleOnModTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UActivePerkSlot_C::ExecuteUbergraph_ActivePerkSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot");

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
