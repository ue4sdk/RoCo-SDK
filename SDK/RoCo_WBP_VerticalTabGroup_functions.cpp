// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VerticalTabGroup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.RevertGamepadSelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroup_C::RevertGamepadSelected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.RevertGamepadSelected"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Display Gamepad Selected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::Display_Gamepad_Selected(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Display Gamepad Selected"));

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.SelectEntryByName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_VerticalTabGroupEntry_C* SelectedTabEntry               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::SelectEntryByName(const struct FName& ViewName, class UWBP_VerticalTabGroupEntry_C** SelectedTabEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.SelectEntryByName"));

	struct
	{
		struct FName                   ViewName;
		class UWBP_VerticalTabGroupEntry_C* SelectedTabEntry;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);

	if (SelectedTabEntry != nullptr)
		*SelectedTabEntry = params.SelectedTabEntry;
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ClearEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroup_C::ClearEntries()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ClearEntries"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.AddEntry
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FOverlayTabViewRow      ViewInfo                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_VerticalTabGroup_C::AddEntry(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.AddEntry"));

	struct
	{
		struct FName                   ViewName;
		struct FOverlayTabViewRow      ViewInfo;
	} params;

	params.ViewName = ViewName;
	params.ViewInfo = ViewInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.GetEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UWBP_VerticalTabGroupEntry_C*> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::GetEntries(TArray<class UWBP_VerticalTabGroupEntry_C*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.GetEntries"));

	struct
	{
		TArray<class UWBP_VerticalTabGroupEntry_C*> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   View_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::Handle_Tab_Selected(const struct FName& View_Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Selected"));

	struct
	{
		struct FName                   View_Name;
	} params;

	params.View_Name = View_Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Gamepad Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   View_Name                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::Handle_Tab_Gamepad_Selected(const struct FName& View_Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.Handle Tab Gamepad Selected"));

	struct
	{
		struct FName                   View_Name;
	} params;

	params.View_Name = View_Name;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ExecuteUbergraph_WBP_VerticalTabGroup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::ExecuteUbergraph_WBP_VerticalTabGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.ExecuteUbergraph_WBP_VerticalTabGroup"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ViewName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VerticalTabGroup_C::OnSubviewChange__DelegateSignature(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewChange__DelegateSignature"));

	struct
	{
		struct FName                   ViewName;
	} params;

	params.ViewName = ViewName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewFocus__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VerticalTabGroup_C::OnSubviewFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VerticalTabGroup.WBP_VerticalTabGroup_C.OnSubviewFocus__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
