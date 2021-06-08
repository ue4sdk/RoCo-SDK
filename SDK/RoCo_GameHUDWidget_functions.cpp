// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameHUDWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameHUDWidget.GameHUDWidget_C.HandleTouchModeChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTouchMode                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::HandleTouchModeChange(bool IsTouchMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HandleTouchModeChange");

	struct
	{
		bool                           IsTouchMode;
	} params;

	params.IsTouchMode = IsTouchMode;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeTouchWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeTouchWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeTouchWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ShouldVoteBlockMenu
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldBlock                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::ShouldVoteBlockMenu(bool* ShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ShouldVoteBlockMenu");

	struct
	{
		bool                           ShouldBlock;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShouldBlock != nullptr)
		*ShouldBlock = params.ShouldBlock;
}


// Function GameHUDWidget.GameHUDWidget_C.FlushVoteInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::FlushVoteInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.FlushVoteInput");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ReleasePlayerInputs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputReleaseType              ReleaseType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::ReleasePlayerInputs(EInputReleaseType ReleaseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ReleasePlayerInputs");

	struct
	{
		EInputReleaseType              ReleaseType;
	} params;

	params.ReleaseType = ReleaseType;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.GetFocusableWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    OutWIdgets                     (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::GetFocusableWidgets(TArray<class UPUMG_Widget*>* OutWIdgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.GetFocusableWidgets");

	struct
	{
		TArray<class UPUMG_Widget*>    OutWIdgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutWIdgets != nullptr)
		*OutWIdgets = params.OutWIdgets;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeHUDContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeHUDContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeHUDContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.SetSafeFrame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::SetSafeFrame(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.SetSafeFrame");

	struct
	{
		float                          Scale;
	} params;

	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Add Game Rule Widget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Game_Rule_Widget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Parent_Widget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::Add_Game_Rule_Widget(class UUserWidget* Game_Rule_Widget, const struct FString& Parent_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Add Game Rule Widget");

	struct
	{
		class UUserWidget*             Game_Rule_Widget;
		struct FString                 Parent_Widget;
	} params;

	params.Game_Rule_Widget = Game_Rule_Widget;
	params.Parent_Widget = Parent_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeKillCam
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeKillCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeKillCam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeHudWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeHudWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeHudWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeMapWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeMapWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeMapWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Map
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Map");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InputListeners
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InputListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InputListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Menu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.SetListenersActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::SetListenersActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.SetListenersActive");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.HandleKillCamEnabled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::HandleKillCamEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HandleKillCamEnabled");

	struct
	{
		bool                           IsEnabled;
	} params;

	params.IsEnabled = IsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ShowHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ShowHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.HideHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HideHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ToggleTopBarHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::ToggleTopBarHUD(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ToggleTopBarHUD");

	struct
	{
		bool                           ShouldShow;
	} params;

	params.ShouldShow = ShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeJobSelectionManager
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::InitializeJobSelectionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeJobSelectionManager");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.HandleOpenTextChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameHUDWidget_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HandleOpenTextChat");

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.OpenTextChatToPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OpenTextChatToPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.Handle Viewport Size Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FIntPoint               ViewportSize                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::Handle_Viewport_Size_Changed(const struct FIntPoint& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Handle Viewport Size Changed");

	struct
	{
		struct FIntPoint               ViewportSize;
	} params;

	params.ViewportSize = ViewportSize;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ToggleTabScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::ToggleTabScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ToggleTabScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.DebugOnePress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::DebugOnePress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugOnePress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.DebugOneRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::DebugOneRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugOneRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.DebugTwoPress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::DebugTwoPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugTwoPress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.DebugTwoRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGameHUDWidget_C::DebugTwoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugTwoRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.OnChangedInput
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::OnChangedInput(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OnChangedInput");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameHUDWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.ExecuteUbergraph_GameHUDWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::ExecuteUbergraph_GameHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ExecuteUbergraph_GameHUDWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function GameHUDWidget.GameHUDWidget_C.OnGameModeWidgetSet__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             GameModeWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameHUDWidget_C::OnGameModeWidgetSet__DelegateSignature(class UUserWidget* GameModeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OnGameModeWidgetSet__DelegateSignature");

	struct
	{
		class UUserWidget*             GameModeWidget;
	} params;

	params.GameModeWidget = GameModeWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
