// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_PlayerLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_PlayerLevel_C::SetThrobber()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewLevel                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_PlayerLevel_C::SetPlayerLevelExplicit(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit"));

	struct
	{
		int                            NewLevel;
	} params;

	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
