// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoggedInProcessRewards_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoggedInProcessRewards.LoggedInProcessRewards_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoggedInProcessRewards_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoggedInProcessRewards.LoggedInProcessRewards_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoggedInProcessRewards.LoggedInProcessRewards_C.ExecuteUbergraph_LoggedInProcessRewards
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoggedInProcessRewards_C::ExecuteUbergraph_LoggedInProcessRewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LoggedInProcessRewards.LoggedInProcessRewards_C.ExecuteUbergraph_LoggedInProcessRewards"));

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
