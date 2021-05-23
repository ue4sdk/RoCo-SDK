// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PartyModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Social_Snapshot_C*  Primary_Focus                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus"));

	struct
	{
		class UWBP_Social_Snapshot_C*  Primary_Focus;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Primary_Focus != nullptr)
		*Primary_Focus = params.Primary_Focus;
}


// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 VoiceId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class UWBP_player_card_module_C* PlayerCard                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::FindPlayerCardByVoiceId(const struct FString& VoiceId, class UWBP_player_card_module_C** PlayerCard)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId"));

	struct
	{
		struct FString                 VoiceId;
		class UWBP_player_card_module_C* PlayerCard;
	} params;

	params.VoiceId = VoiceId;

	UObject::ProcessEvent(fn, &params);

	if (PlayerCard != nullptr)
		*PlayerCard = params.PlayerCard;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets"));

	struct
	{
		TArray<class UPUMG_Widget*>    Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> Party_Members                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)
// TArray<struct FPUMG_PartyMemberData> Return_Value                   (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members"));

	struct
	{
		TArray<struct FPUMG_PartyMemberData> Party_Members;
		TArray<struct FPUMG_PartyMemberData> Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Party_Members != nullptr)
		*Party_Members = params.Party_Members;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> PartyMembers                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData"));

	struct
	{
		TArray<struct FPUMG_PartyMemberData> PartyMembers;
	} params;

	params.PartyMembers = PartyMembers;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceParticipantAdded(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceParticipantRemoved(const struct FString& AccountId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved"));

	struct
	{
		struct FString                 AccountId;
	} params;

	params.AccountId = AccountId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 AccountId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PartyModule_C::VoiceParticipantUpdated(const struct FString& AccountId, bool IsTalking, bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated"));

	struct
	{
		struct FString                 AccountId;
		bool                           IsTalking;
		bool                           IsMuted;
	} params;

	params.AccountId = AccountId;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSVoiceActivityAudioState     State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceStateChange(EKSVoiceActivityAudioState State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange"));

	struct
	{
		EKSVoiceActivityAudioState     State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Selected_Player_Card           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked"));

	struct
	{
		class UWBP_player_card_module_C* Selected_Player_Card;
	} params;

	params.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModule_C::Handle_Player_Card_Back()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PartyModule_C::HandlePartyLeaveVisibilityChange(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange"));

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::ExecuteUbergraph_WBP_PartyModule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PartyModule_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature"));

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PartyModule_C::OnPlayerCardBackButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Selected_Player_Card           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PartyModule_C::OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature"));

	struct
	{
		class UWBP_player_card_module_C* Selected_Player_Card;
	} params;

	params.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
