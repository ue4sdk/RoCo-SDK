// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BrightLobbyWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBrightLobbyWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBrightLobbyWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::SetErrorMessageDT()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            Container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::UninitializeSubWidgets(class UPanelWidget* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets");

	struct
	{
		class UPanelWidget*            Container;
	} params;

	params.Container = Container;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            Container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::InitializeSubWidgets(class UPanelWidget* Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets");

	struct
	{
		class UPanelWidget*            Container;
	} params;

	params.Container = Container;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::HidePersistentWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::HandleMainLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::HandlePreMatchAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::UnbindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::BindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::UninitializeKSWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::InitializeKSWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::CreateStickyWidgetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::Set_Safe_Frame(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame");

	struct
	{
		float                          Scale;
	} params;

	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   LastRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::HandleSpecialRouteCases(const struct FName& CurrentRoute, const struct FName& LastRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   LastRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.LastRoute = LastRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FIntPoint               ViewportSize                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::Handle_Viewport_Size_Changed(const struct FIntPoint& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed");

	struct
	{
		struct FIntPoint               ViewportSize;
	} params;

	params.ViewportSize = ViewportSize;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBrightLobbyWidget_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat");

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::HandleOpenTextChatForCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::HandleOpenTextChatForChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer");

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NextRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::HandleViewStateChangeStarted(const struct FName& CurrentRoute, const struct FName& NextRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted");

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   NextRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::DebugOnePress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::DebugOneRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::DebugTwoPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::DebugTwoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyWidget_C::ExecuteUbergraph_BrightLobbyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyWidget_C::BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
