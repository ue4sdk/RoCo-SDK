// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_AccountLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Perc                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AccountLevel_C::UpdateProgressBar(float Perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar");

	struct
	{
		float                          Perc;
	} params;

	params.Perc = Perc;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AccountLevel_C::RefreshStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLoaded                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AccountLevel_C::OnActivityInstanceChanged__DelegateSignature(bool IsLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature");

	struct
	{
		bool                           IsLoaded;
	} params;

	params.IsLoaded = IsLoaded;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
