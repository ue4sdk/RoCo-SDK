// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_GameHUDNew_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameHUDNew.BP_GameHUDNew_C.AddHudWidgetToScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ZOrder                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::AddHudWidgetToScreen(class UUserWidget* Widget, int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.AddHudWidgetToScreen");

	struct
	{
		class UUserWidget*             Widget;
		int                            ZOrder;
	} params;

	params.Widget = Widget;
	params.ZOrder = ZOrder;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.FocusFirstFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    PUMG_Widgets                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::FocusFirstFocusableWidget(TArray<class UPUMG_Widget*>* PUMG_Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.FocusFirstFocusableWidget");

	struct
	{
		TArray<class UPUMG_Widget*>    PUMG_Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PUMG_Widgets != nullptr)
		*PUMG_Widgets = params.PUMG_Widgets;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetFocusableWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    FocusableWidgets               (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::GetFocusableWidgets(TArray<class UPUMG_Widget*>* FocusableWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetFocusableWidgets");

	struct
	{
		TArray<class UPUMG_Widget*>    FocusableWidgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FocusableWidgets != nullptr)
		*FocusableWidgets = params.FocusableWidgets;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetContextBarWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSContextBarWidget* ABP_GameHUDNew_C::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetContextBarWidget");

	struct
	{
		class UKSContextBarWidget*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ToggleWatermarkDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GameHUDNew_C::ToggleWatermarkDisplay(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ToggleWatermarkDisplay");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetAsyncWidgetsForString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 String                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TArray<class UUserWidget*>     UserWidgets                    (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::GetAsyncWidgetsForString(const struct FString& String, TArray<class UUserWidget*>* UserWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetAsyncWidgetsForString");

	struct
	{
		struct FString                 String;
		TArray<class UUserWidget*>     UserWidgets;
	} params;

	params.String = String;

	UObject::ProcessEvent(fn, &params);

	if (UserWidgets != nullptr)
		*UserWidgets = params.UserWidgets;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetupJobSelectionManager
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::SetupJobSelectionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetupJobSelectionManager");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetPopupManager
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPUMG_PopupManager* ABP_GameHUDNew_C::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetPopupManager");

	struct
	{
		class UPUMG_PopupManager*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD");

	struct
	{
		class UClass*                  Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnShowHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::OnShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnShowHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnHideHUD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::OnHideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnHideHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.Spawn Tutorial Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::Spawn_Tutorial_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.Spawn Tutorial Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleHUD
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::OnToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleHUD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleTopBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GameHUDNew_C::OnToggleTopBar(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleTopBar");

	struct
	{
		bool                           ShouldShow;
	} params;

	params.ShouldShow = ShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetHUDVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bVisible                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GameHUDNew_C::SetHUDVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetHUDVisible");

	struct
	{
		bool                           bVisible;
	} params;

	params.bVisible = bVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.CreateGameRuleWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSWidgetInfoParams     WidgetInfoParams               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_GameHUDNew_C::CreateGameRuleWidget(const struct FKSWidgetInfoParams& WidgetInfoParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.CreateGameRuleWidget");

	struct
	{
		struct FKSWidgetInfoParams     WidgetInfoParams;
	} params;

	params.WidgetInfoParams = WidgetInfoParams;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.BroadcastWidgetMessage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::BroadcastWidgetMessage(const struct FName& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.BroadcastWidgetMessage");

	struct
	{
		struct FName                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.BindEventToWidgetMessages
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NoDestructor)

void ABP_GameHUDNew_C::BindEventToWidgetMessages(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.BindEventToWidgetMessages");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;

	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOpenTextChat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GameHUDNew_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOpenTextChat");

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.DisplayWatermark
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::DisplayWatermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.DisplayWatermark");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnAsyncWidgetInfoLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  LoadedClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 ParentWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// class AKSWidgetInfoActor*      WidgetInfoActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::OnAsyncWidgetInfoLoaded(class UClass* LoadedClass, const struct FString& ParentWidget, class AKSWidgetInfoActor* WidgetInfoActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnAsyncWidgetInfoLoaded");

	struct
	{
		class UClass*                  LoadedClass;
		struct FString                 ParentWidget;
		class AKSWidgetInfoActor*      WidgetInfoActor;
	} params;

	params.LoadedClass = LoadedClass;
	params.ParentWidget = ParentWidget;
	params.WidgetInfoActor = WidgetInfoActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OpenTextChatToPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OpenTextChatToPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ApplySafeFrameScale
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          SafeFrameScale                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::ApplySafeFrameScale(float SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ApplySafeFrameScale");

	struct
	{
		float                          SafeFrameScale;
	} params;

	params.SafeFrameScale = SafeFrameScale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.NetworkLagStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UNetDriver*              NetDriver                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ENetworkLagState>  LagType                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::NetworkLagStateChanged(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkLagState> LagType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.NetworkLagStateChanged");

	struct
	{
		class UWorld*                  World;
		class UNetDriver*              NetDriver;
		TEnumAsByte<ENetworkLagState>  LagType;
	} params;

	params.World = World;
	params.NetDriver = NetDriver;
	params.LagType = LagType;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetUIFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetUIFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.Play Cinematic Nameplate Anim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NumWalking                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::Play_Cinematic_Nameplate_Anim(int Index, int NumWalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.Play Cinematic Nameplate Anim");

	struct
	{
		int                            Index;
		int                            NumWalking;
	} params;

	params.Index = Index;
	params.NumWalking = NumWalking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.Set Cinematic Nameplate Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* Player_Data                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* Player_Data, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.Set Cinematic Nameplate Data");

	struct
	{
		class UKSPersistentPlayerData* Player_Data;
		int                            Index;
	} params;

	params.Player_Data = Player_Data;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.EvaluateFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::EvaluateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.EvaluateFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.Init WalkIn Widget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class AKSJobSelectPreviewActor*> Players                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::Init_WalkIn_Widget(TArray<class AKSJobSelectPreviewActor*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.Init WalkIn Widget");

	struct
	{
		TArray<class AKSJobSelectPreviewActor*> Players;
	} params;

	params.Players = Players;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnPhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FMatchPhase             CurrentPhase                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// struct FMatchPhase             PreviousPhase                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ABP_GameHUDNew_C::OnPhaseChanged(const struct FMatchPhase& CurrentPhase, const struct FMatchPhase& PreviousPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnPhaseChanged");

	struct
	{
		struct FMatchPhase             CurrentPhase;
		struct FMatchPhase             PreviousPhase;
	} params;

	params.CurrentPhase = CurrentPhase;
	params.PreviousPhase = PreviousPhase;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ExecuteUbergraph_BP_GameHUDNew
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::ExecuteUbergraph_BP_GameHUDNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ExecuteUbergraph_BP_GameHUDNew");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnHUDReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_GameHUDNew_C::OnHUDReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnHUDReady__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnRuleWidgetCreated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Placement                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::OnRuleWidgetCreated__DelegateSignature(class UUserWidget* UserWidget, const struct FString& Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnRuleWidgetCreated__DelegateSignature");

	struct
	{
		class UUserWidget*             UserWidget;
		struct FString                 Placement;
	} params;

	params.UserWidget = UserWidget;
	params.Placement = Placement;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HUDMessage__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_GameHUDNew_C::HUDMessage__DelegateSignature(const struct FName& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HUDMessage__DelegateSignature");

	struct
	{
		struct FName                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnSwimmingChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSwimming                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_GameHUDNew_C::OnSwimmingChanged__DelegateSignature(bool IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnSwimmingChanged__DelegateSignature");

	struct
	{
		bool                           IsSwimming;
	} params;

	params.IsSwimming = IsSwimming;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
