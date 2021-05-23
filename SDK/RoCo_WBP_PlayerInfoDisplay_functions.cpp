// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerInfoDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateVoiceDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          Font                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameFont(const struct FSlateFontInfo& Font)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont"));

	struct
	{
		struct FSlateFontInfo          Font;
	} params;

	params.Font = Font;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameColor(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor"));

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowLeaderIcon                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::TogglePartyLeaderIcon(bool ShowLeaderIcon)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon"));

	struct
	{
		bool                           ShowLeaderIcon;
	} params;

	params.ShowLeaderIcon = ShowLeaderIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::SetVoiceActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive"));

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Talking                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::SetVoiceTalking(bool Talking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking"));

	struct
	{
		bool                           Talking;
	} params;

	params.Talking = Talking;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Muted                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::SetVoiceMuted(bool Muted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted"));

	struct
	{
		bool                           Muted;
	} params;

	params.Muted = Muted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             StatusColor                    (CPF_Parm, CPF_OutParm)

void UWBP_PlayerInfoDisplay_C::GetStatusColor(struct FSlateColor* StatusColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor"));

	struct
	{
		struct FSlateColor             StatusColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StatusColor != nullptr)
		*StatusColor = params.StatusColor;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdatePlayerInfoIcons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateAvatarDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerInfo*           playerinfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::SetPlayerInfo(class UKSPlayerInfo* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo"));

	struct
	{
		class UKSPlayerInfo*           playerinfo;
	} params;

	params.playerinfo = playerinfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState"));

	struct
	{
		bool                           ShouldShow;
		bool                           IsTalking;
		bool                           IsMuted;
	} params;

	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowStatus                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::ToggleStatusDisplay(bool ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay"));

	struct
	{
		bool                           ShowStatus;
	} params;

	params.ShowStatus = ShowStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerInfoDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::HandleFilteredNameUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerInfoDisplay_C::ExecuteUbergraph_WBP_PlayerInfoDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay"));

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
