// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ContextualPingMapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.HandlePingRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.HandlePingRemoved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.SetupPingOnReady
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.SetupPingOnReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.ExecuteUbergraph_WBP_ContextualPingMapIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ContextualPingMapIcon_C::ExecuteUbergraph_WBP_ContextualPingMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.ExecuteUbergraph_WBP_ContextualPingMapIcon");

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
