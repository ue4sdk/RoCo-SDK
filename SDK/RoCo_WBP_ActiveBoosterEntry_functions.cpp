// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ActiveBoosterEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.SetDisplayType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ActiveBoosterEntry_C::SetDisplayType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.SetDisplayType");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ActiveBoosterEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ActiveBoosterEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Set Item Properties
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAccountConsumableDetails Item_Details                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_ActiveBoosterEntry_C::Set_Item_Properties(const struct FAccountConsumableDetails& Item_Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Set Item Properties");

	struct
	{
		struct FAccountConsumableDetails Item_Details;
	} params;

	params.Item_Details = Item_Details;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.ExecuteUbergraph_WBP_ActiveBoosterEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveBoosterEntry_C::ExecuteUbergraph_WBP_ActiveBoosterEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.ExecuteUbergraph_WBP_ActiveBoosterEntry");

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
