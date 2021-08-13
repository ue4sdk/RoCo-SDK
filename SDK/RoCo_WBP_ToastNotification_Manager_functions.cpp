// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ToastNotification_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotification_Manager_C::PushAwardsEarnedInMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Toast2_C*           Toast                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::DisplayChallengeToast(class UWBP_Toast2_C* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast");

	struct
	{
		class UWBP_Toast2_C*           Toast;
	} params;

	params.Toast = Toast;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToastNotifcation_Entry_C* Toast                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast");

	struct
	{
		class UWBP_ToastNotifcation_Entry_C* Toast;
	} params;

	params.Toast = Toast;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FToastData              ToastData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_ToastNotification_Manager_C::OnToastNotificationReceived(const struct FToastData& ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived");

	struct
	{
		struct FToastData              ToastData;
	} params;

	params.ToastData = ToastData;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ToastNotification              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::HandleToastNotificationRemove(class UKSWidget* ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove");

	struct
	{
		class UKSWidget*               ToastNotification;
	} params;

	params.ToastNotification = ToastNotification;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ToastNotification_Manager_C::OnToastIntroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ToastNotification_Manager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ToastNotification              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::HandleChallengeToastNotificationRemove(class UKSWidget* ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove");

	struct
	{
		class UKSWidget*               ToastNotification;
	} params;

	params.ToastNotification = ToastNotification;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::ExecuteUbergraph_WBP_ToastNotification_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager");

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
