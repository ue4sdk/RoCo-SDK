// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_QueueTypeHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_QueueTypeHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickPlay_QueueTypeHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   QueueType                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_QueueTypeHeader_C::SetHeaderText(const struct FText& QueueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText");

	struct
	{
		struct FText                   QueueType;
	} params;

	params.QueueType = QueueType;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_QueueTypeHeader_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader");

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
