// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DirectReviveDroneModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnActivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnActivation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnActivation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveDroneEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EKSReviveDroneEvent            KSReviveDroneEvent             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDirectReviveDroneModInst_C::OnReviveDroneEvent(EKSReviveDroneEvent KSReviveDroneEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveDroneEvent"));

	struct
	{
		EKSReviveDroneEvent            KSReviveDroneEvent;
	} params;

	params.KSReviveDroneEvent = KSReviveDroneEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.PlayAbilityVO
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::PlayAbilityVO()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.PlayAbilityVO"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDirectReviveDroneModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ExecuteUbergraph_DirectReviveDroneModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDirectReviveDroneModInst_C::ExecuteUbergraph_DirectReviveDroneModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ExecuteUbergraph_DirectReviveDroneModInst"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneAborted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnDroneAborted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneAborted__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveComplete__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnReviveComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveComplete__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveBegin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnReviveBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveBegin__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneDestroy__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnDroneDestroy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneDestroy__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetRevive__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnTargetRevive__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetRevive__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetDeath__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDirectReviveDroneModInst_C::OnTargetDeath__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetDeath__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
