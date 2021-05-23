// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_QuickPlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_QuickPlay.WBP_QuickPlay_C.OpenRankedOverview
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OpenRankedOverview()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OpenRankedOverview"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.PopulateRankedScreenData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::PopulateRankedScreenData(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.PopulateRankedScreenData"));

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FMapDetail>      MapList                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::SetMapList(TArray<struct FMapDetail>* MapList)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapList"));

	struct
	{
		TArray<struct FMapDetail>      MapList;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MapList != nullptr)
		*MapList = params.MapList;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_QuickPlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown"));

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


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_QuickPlay_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp"));

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


// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        ClientQueueInfo                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_QuickPlay_C::UpdateWarning(const struct FClientQueueInfo& ClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning"));

	struct
	{
		struct FClientQueueInfo        ClientQueueInfo;
	} params;

	params.ClientQueueInfo = ClientQueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FUIMapInfo>      MapRotations                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::SetMapRotation(TArray<struct FUIMapInfo>* MapRotations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation"));

	struct
	{
		TArray<struct FUIMapInfo>      MapRotations;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MapRotations != nullptr)
		*MapRotations = params.MapRotations;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        QueueInfo                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_C::SetTouchActiveState(const struct FClientQueueInfo& QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState"));

	struct
	{
		struct FClientQueueInfo        QueueInfo;
	} params;

	params.QueueInfo = QueueInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::SetQueueButtonNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::GoToQueueScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::ResetDetails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FClientQueueInfo        QueueButton                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_QuickPlay_C::UpdateDetails(const struct FClientQueueInfo& QueueButton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails"));

	struct
	{
		struct FClientQueueInfo        QueueButton;
	} params;

	params.QueueButton = QueueButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::ReconcileGameModeButtonEnabling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_QuickPlay_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputMode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputMode;
	} params;

	params.InputMode = InputMode;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::SetDefaultFocusForQueues()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::ResetQueueSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::SetupQueueButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::ShowQueueTitleFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::ShowQueueTitleAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::HideQueueTitleFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HideQueueTitleAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::ShowQueueSelectionFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::ShowQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::HideQueueSelectionFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HideQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            QueueId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleGameModeSelected(int QueueId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected"));

	struct
	{
		int                            QueueId;
	} params;

	params.QueueId = QueueId;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleGameModeHovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleGameModeUnhovered(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::GoToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanControl                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickPlay_C::OnControlQueuePermissionChanged(bool CanControl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged"));

	struct
	{
		bool                           CanControl;
	} params;

	params.CanControl = CanControl;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanQueue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickPlay_C::OnQueuePermissionChanged(bool CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged"));

	struct
	{
		bool                           CanQueue;
	} params;

	params.CanQueue = CanQueue;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OnBackButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::HandleRegionSelectRequested()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OnRegionSelected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::OnRegionSelectEntriesCreated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ScreenToSwitch                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::SwitchFocusGroupToScreen(class UWidget* ScreenToSwitch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen"));

	struct
	{
		class UWidget*                 ScreenToSwitch;
	} params;

	params.ScreenToSwitch = ScreenToSwitch;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButtons                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleOnQueueSectionPopulated(TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButtons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated"));

	struct
	{
		TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButtons;
	} params;

	params.QueueButtons = QueueButtons;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_QuickPlay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::HandleQueueErrorStateChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::CreateCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSWidget*>       Buttons                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::HandleOnCustomSectionPopulated(TArray<class UKSWidget*> Buttons)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated"));

	struct
	{
		TArray<class UKSWidget*>       Buttons;
	} params;

	params.Buttons = Buttons;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_QuickPlay_C::HandleMapScrollChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature"));

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_QuickPlay_C::ExecuteUbergraph_WBP_QuickPlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay"));

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
