// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CountdownVersusMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CountdownVersusMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.OnAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CountdownVersusMessage_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.OnAnimFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CountdownVersusMessage_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.ExecuteUbergraph_WBP_CountdownVersusMessage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CountdownVersusMessage_C::ExecuteUbergraph_WBP_CountdownVersusMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.ExecuteUbergraph_WBP_CountdownVersusMessage");

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
