// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CreateCustomGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Handle Input State Changed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Handle Input State Changed");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CreateCustomGame_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyUp");

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


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              QueueImage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::GetQueueImageById(int QueueId, class UTexture2D** QueueImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById");

	struct
	{
		int                            QueueId;
		class UTexture2D*              QueueImage;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        ClientQueueInfo                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_CreateCustomGame_C::SetupQueueInfoPanel(const struct FClientQueueInfo& ClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel");

	struct
	{
		struct FClientQueueInfo        ClientQueueInfo;
	} params;

	params.ClientQueueInfo = ClientQueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::OnLobbyCreated(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated");

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnLobbyCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::SetupConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            MapId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::ShowConfirmation(int QueueId, int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation");

	struct
	{
		int                            QueueId;
		int                            MapId;
	} params;

	params.QueueId = QueueId;
	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::BindConfirmationNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::GoToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CreateCustomGame_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_CreateCustomGame_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown");

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


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnPreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnNextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumColumns                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::SetNavigation(int NumColumns)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation");

	struct
	{
		int                            NumColumns;
	} params;

	params.NumColumns = NumColumns;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::ResetMapSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MapId                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::OnMapSelected(int MapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected");

	struct
	{
		int                            MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::OnTabSelected(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected");

	struct
	{
		int                            ButtonIndex;
	} params;

	params.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::Setup_Custom_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus              MatchStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::CheckIsInCustomMatch(EPUMG_MatchStatus MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch");

	struct
	{
		EPUMG_MatchStatus              MatchStatus;
	} params;

	params.MatchStatus = MatchStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnButtonsCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CreateCustomGame_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.HandleMapScrollChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CreateCustomGame_C::HandleMapScrollChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.HandleMapScrollChange");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CreateCustomGame_C::ExecuteUbergraph_WBP_CreateCustomGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame");

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
