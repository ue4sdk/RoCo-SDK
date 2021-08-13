// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LocalPlayerModBarElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LocalPlayerModBarElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.ExecuteUbergraph_WBP_LocalPlayerModBarElement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LocalPlayerModBarElement_C::ExecuteUbergraph_WBP_LocalPlayerModBarElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.ExecuteUbergraph_WBP_LocalPlayerModBarElement");

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
