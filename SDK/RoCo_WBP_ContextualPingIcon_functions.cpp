// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ContextualPingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ContextualPingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.HandlePingRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ContextualPingIcon_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.HandlePingRemoved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.SetupPingOnReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ContextualPingIcon_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.SetupPingOnReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.ExecuteUbergraph_WBP_ContextualPingIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ContextualPingIcon_C::ExecuteUbergraph_WBP_ContextualPingIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.ExecuteUbergraph_WBP_ContextualPingIcon");

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
