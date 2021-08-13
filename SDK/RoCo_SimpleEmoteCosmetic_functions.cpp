// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SimpleEmoteCosmetic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.BlueprintPlayEmote
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USimpleEmoteCosmetic_C::BlueprintPlayEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.BlueprintPlayEmote");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.BlueprintInterruptEmote
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EKSRadialMenuItemInterruptReason Reason                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USimpleEmoteCosmetic_C::BlueprintInterruptEmote(EKSRadialMenuItemInterruptReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.BlueprintInterruptEmote");

	struct
	{
		EKSRadialMenuItemInterruptReason Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.ExecuteUbergraph_SimpleEmoteCosmetic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USimpleEmoteCosmetic_C::ExecuteUbergraph_SimpleEmoteCosmetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleEmoteCosmetic.SimpleEmoteCosmetic_C.ExecuteUbergraph_SimpleEmoteCosmetic");

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
