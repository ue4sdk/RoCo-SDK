// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoiceParticipantElement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ShowActivity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoiceParticipantElement_C::ShowActivity(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ShowActivity"));

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.SetName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_VoiceParticipantElement_C::SetName(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.SetName"));

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VoiceParticipantElement_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoiceParticipantElement_C::HandleAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationComplete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VoiceParticipantElement_C::HandleAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ExecuteUbergraph_WBP_VoiceParticipantElement
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceParticipantElement_C::ExecuteUbergraph_WBP_VoiceParticipantElement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ExecuteUbergraph_WBP_VoiceParticipantElement"));

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
