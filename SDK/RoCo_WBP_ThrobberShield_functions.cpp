// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ThrobberShield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ThrobberShield_C::ResetThrobberAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ThrobberShield_C::PlayThrobberAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ThrobberShield_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ThrobberShield_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ThrobberShield_C::ExecuteUbergraph_WBP_ThrobberShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield");

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
