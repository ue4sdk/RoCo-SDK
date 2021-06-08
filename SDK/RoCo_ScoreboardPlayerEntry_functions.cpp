// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ScoreboardPlayerEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AKSPlayerState*          OutPlayerState                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::GetPlayerState(class AKSPlayerState** OutPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.GetPlayerState");

	struct
	{
		class AKSPlayerState*          OutPlayerState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutPlayerState != nullptr)
		*OutPlayerState = params.OutPlayerState;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetColors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetColors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetStatText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetStatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetStatText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetIconsAndIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetIconsAndIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetIconsAndIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UpdateVoiceInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           IsMuted                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           InVoiceChannel                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UScoreboardPlayerEntry_C::UpdateVoiceInfo(bool IsTalking, bool IsMuted, bool InVoiceChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UpdateVoiceInfo");

	struct
	{
		bool                           IsTalking;
		bool                           IsMuted;
		bool                           InVoiceChannel;
	} params;

	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;
	params.InVoiceChannel = InVoiceChannel;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetMercIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::SetMercIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetMercIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PlayerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::Update(class UKSPersistentPlayerData* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Update");

	struct
	{
		class UKSPersistentPlayerData* PlayerData;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoUnhoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::DoUnhoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoUnhoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoHoverState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::DoHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoHoverState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnNeedUpdatePlayerUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::OnNeedUpdatePlayerUI(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnNeedUpdatePlayerUI");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ScheduleUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScoreboardPlayerEntry_C::ScheduleUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ScheduleUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ExecuteUbergraph_ScoreboardPlayerEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::ExecuteUbergraph_ScoreboardPlayerEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ExecuteUbergraph_ScoreboardPlayerEntry");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnPlayerClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* NewPlayerState                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UScoreboardPlayerEntry_C::OnPlayerClicked__DelegateSignature(class UKSPersistentPlayerData* NewPlayerState, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnPlayerClicked__DelegateSignature");

	struct
	{
		class UKSPersistentPlayerData* NewPlayerState;
		class UWidget*                 Widget;
	} params;

	params.NewPlayerState = NewPlayerState;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
