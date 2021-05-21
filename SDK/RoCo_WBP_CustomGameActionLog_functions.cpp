// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CustomGameActionLog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameActionLog_C::ClearLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_CustomGameActionLog_C::AddLog(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CustomGameActionLog_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CustomGameActionLog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CustomGameActionLog_C::HandleScrollBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameActionLog_C::BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	struct
	{
		float                          CurrentOffset;
	} params;

	params.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CustomGameActionLog_C::ExecuteUbergraph_WBP_CustomGameActionLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog");

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
