// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HomeScreen_v2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.GetChallengePanel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSWidget*               Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::GetChallengePanel(class UKSWidget** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.GetChallengePanel"));

	struct
	{
		class UKSWidget*               Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_HomeScreen_v2_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_HomeScreen_v2_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnKeyUp"));

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


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bAllowFous                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeScreen_v2_C::CanFocus(bool* bAllowFous)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus"));

	struct
	{
		bool                           bAllowFous;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bAllowFous != nullptr)
		*bAllowFous = params.bAllowFous;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::UpdateContextPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   AnimName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::StopConflictingAnimation(const struct FName& AnimName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation"));

	struct
	{
		struct FName                   AnimName;
	} params;

	params.AnimName = AnimName;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_HomeScreen_v2_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus              NewStatus                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HandleQueueStatusChange(EPUMG_MatchStatus NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange"));

	struct
	{
		EPUMG_MatchStatus              NewStatus;
	} params;

	params.NewStatus = NewStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandlePreMatchAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::UnbindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::BindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeContentWidgets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::ShowQuickPlayFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::ShowQuickPlayAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::HideQuickPlayFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ElapsedTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ElapsedAlpha                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HideQuickPlayAnim(float ElapsedTime, float ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim"));

	struct
	{
		float                          ElapsedTime;
		float                          ElapsedAlpha;
	} params;

	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleJoinQueue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnCrossplayChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::UpdateCrossplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::LoginState(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState"));

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::Update_Region()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C* Selected_Player_Card           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::Handle_Party_Player_Card_Selected(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected"));

	struct
	{
		class UWBP_player_card_module_C* Selected_Player_Card;
	} params;

	params.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
// class UWidget*                 Default_Widget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Navigation(class UWidget* Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation"));

	struct
	{
		TArray<class UWidget*>         NavWidgets;
		class UWidget*                 Default_Widget;
	} params;

	params.Default_Widget = Default_Widget;

	UObject::ProcessEvent(fn, &params);

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Hidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HandleContextMenuShown(class UWidget* FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown"));

	struct
	{
		class UWidget*                 FocusWidget;
	} params;

	params.FocusWidget = FocusWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeScreen_v2_C::NewsPanelVisibilityChanged(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged"));

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::OnEOMButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::HandleViewSocial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateDownFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateUpFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure"));

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::Handle_Player_Card_Back_Button()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeScreen_v2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnSetQueueInputState(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnpartyLeaveVisibilityChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HomeScreen_v2_C::OnpartyLeaveVisibilityChange(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnpartyLeaveVisibilityChange"));

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Member Left
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::Handle_Party_Member_Left()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Member Left"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Boosts Context Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::On_Boosts_Context_Button()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Boosts Context Button"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Emote Context Button
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HomeScreen_v2_C::On_Emote_Context_Button()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Emote Context Button"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::ExecuteUbergraph_WBP_HomeScreen_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2"));

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
