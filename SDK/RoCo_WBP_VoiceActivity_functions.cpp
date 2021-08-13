// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoiceActivity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.GetNameForMctsId
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int64_t                        MctsId                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Name                           (CPF_Parm, CPF_OutParm)

void UWBP_VoiceActivity_C::GetNameForMctsId(int64_t MctsId, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.GetNameForMctsId");

	struct
	{
		int64_t                        MctsId;
		struct FText                   Name;
	} params;

	params.MctsId = MctsId;

	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.Voice Participant Updated
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Account                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoiceActivity_C::Voice_Participant_Updated(const struct FString& Account, bool IsTalking, bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.Voice Participant Updated");

	struct
	{
		struct FString                 Account;
		bool                           IsTalking;
		bool                           IsMuted;
	} params;

	params.Account = Account;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.AddVoiceParticipant
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Account                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::AddVoiceParticipant(const struct FString& Account)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.AddVoiceParticipant");

	struct
	{
		struct FString                 Account;
	} params;

	params.Account = Account;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.RemoveVoiceParticipant
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Account                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::RemoveVoiceParticipant(const struct FString& Account)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.RemoveVoiceParticipant");

	struct
	{
		struct FString                 Account;
	} params;

	params.Account = Account;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantRemoved
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::OnVoiceParticipantRemoved(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantRemoved");

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantAdded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::OnVoiceParticipantAdded(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantAdded");

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           bIsTalking                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bIsMuted                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VoiceActivity_C::OnVoiceParticipantUpdated(const struct FString& AccountId, bool bIsTalking, bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantUpdated");

	struct
	{
		struct FString                 AccountId;
		bool                           bIsTalking;
		bool                           bIsMuted;
	} params;

	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_VoiceActivity.WBP_VoiceActivity_C.ExecuteUbergraph_WBP_VoiceActivity
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VoiceActivity_C::ExecuteUbergraph_WBP_VoiceActivity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceActivity.WBP_VoiceActivity_C.ExecuteUbergraph_WBP_VoiceActivity");

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
