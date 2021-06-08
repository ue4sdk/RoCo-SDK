// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KeyCallout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKeybind
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   KeyBind                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KeyCallout_C::SetKeybind(const struct FName& KeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KeyCallout.WBP_KeyCallout_C.SetKeybind");

	struct
	{
		struct FName                   KeyBind;
	} params;

	params.KeyBind = KeyBind;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_KeyCallout_C::UpdateKeyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_KeyCallout_C::SetKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_KeyCallout_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_KeyCallout_C::ExecuteUbergraph_WBP_KeyCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout");

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
