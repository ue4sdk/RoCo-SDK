// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIdentity_Title_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSTitle*                Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Title_C::SetTitle(class UKSTitle* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle");

	struct
	{
		class UKSTitle*                Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerIdentity_Title_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.ExecuteUbergraph_WBP_PlayerIdentity_Title
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIdentity_Title_C::ExecuteUbergraph_WBP_PlayerIdentity_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.ExecuteUbergraph_WBP_PlayerIdentity_Title");

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
