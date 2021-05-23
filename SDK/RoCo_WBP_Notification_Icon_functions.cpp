// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Notification_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Icon_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Notification_Icon_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Icon_C::HandleShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Notification_Icon_C::HandleHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Notification_Icon_C::ExecuteUbergraph_WBP_Notification_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon"));

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
