// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LoggingInStatusTempClone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.SetWaitQueueMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLoginQueueInfo         LoginQueueInfo                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ULoggingInStatusTempClone_C::SetWaitQueueMessage(const struct FLoginQueueInfo& LoginQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.SetWaitQueueMessage");

	struct
	{
		struct FLoginQueueInfo         LoginQueueInfo;
	} params;

	params.LoginQueueInfo = LoginQueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoggingInStatusTempClone_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULoggingInStatusTempClone_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoggingInStatusTempClone_C::BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.ExecuteUbergraph_LoggingInStatusTempClone
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULoggingInStatusTempClone_C::ExecuteUbergraph_LoggingInStatusTempClone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.ExecuteUbergraph_LoggingInStatusTempClone");

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
