// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_BrightLobbyHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Show Lobby Radial Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::Show_Lobby_Radial_Select()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Show Lobby Radial Select"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetDefaultPlayerAccountItem
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPlayerAccountSlot             ItemSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSItem* ABP_BrightLobbyHUD_C::GetDefaultPlayerAccountItem(EPlayerAccountSlot ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetDefaultPlayerAccountItem"));

	struct
	{
		EPlayerAccountSlot             ItemSlot;
		class UKSItem*                 ReturnValue;
	} params;

	params.ItemSlot = ItemSlot;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::SetupQueueEvents()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute"));

	struct
	{
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RouteName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ClearRouteStack                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute"));

	struct
	{
		struct FName                   RouteName;
		bool                           ClearRouteStack;
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::SafeFrameSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::BindSettingCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RouteName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ClearRouteStack                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UObject*                 Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::InternalAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute"));

	struct
	{
		struct FName                   RouteName;
		bool                           ClearRouteStack;
		bool                           ForceTransition;
		class UObject*                 Data;
		bool                           ViewChanged;
	} params;

	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::OnAcquisition(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition"));

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSContextBarWidget* ABP_BrightLobbyHUD_C::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget"));

	struct
	{
		class UKSContextBarWidget*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RouteName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   SwapTargetRoute                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute"));

	struct
	{
		struct FName                   RouteName;
		struct FName                   SwapTargetRoute;
		bool                           ForceTransition;
	} params;

	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route"));

	struct
	{
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RouteName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ClearRouteStack                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::Add_View_Route(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route"));

	struct
	{
		struct FName                   RouteName;
		bool                           ClearRouteStack;
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::HandeEOMResults(bool ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults"));

	struct
	{
		bool                           ForceTransition;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Current_Route                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::GetCurrentTransitionRoute(struct FName* Current_Route)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute"));

	struct
	{
		struct FName                   Current_Route;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSLobbyWidget*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UKSLobbyWidget* ABP_BrightLobbyHUD_C::GetLobbyWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget"));

	struct
	{
		class UKSLobbyWidget*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::Focus_Home_Screen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Current_Route                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Get_Current_View_Route(struct FName* Current_Route)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route"));

	struct
	{
		struct FName                   Current_Route;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Current_Route != nullptr)
		*Current_Route = params.Current_Route;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::Focus_Sticky_Loadout_Panel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  Current_Loadout_Slot           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot"));

	struct
	{
		unsigned char                  Current_Loadout_Slot;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Current_Loadout_Slot != nullptr)
		*Current_Loadout_Slot = params.Current_Loadout_Slot;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Loadout_Slot_Edit              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Cache_Current_Loadout_Slot(unsigned char Loadout_Slot_Edit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot"));

	struct
	{
		unsigned char                  Loadout_Slot_Edit;
	} params;

	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::InitialLobbyAnimStatesBinding()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::TempBootstrapFunctionality()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::FallbackLogoutCleanup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UPanelWidget*>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

TArray<class UPanelWidget*> ABP_BrightLobbyHUD_C::GetFocusableWidgetContainers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers"));

	struct
	{
		TArray<class UPanelWidget*>    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               Login_State                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Handle_Login_State_Change(EPUMG_LoginState Login_State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change"));

	struct
	{
		EPUMG_LoginState               Login_State;
	} params;

	params.Login_State = Login_State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UPUMG_PopupManager* ABP_BrightLobbyHUD_C::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager"));

	struct
	{
		class UPUMG_PopupManager*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleEndPlayingPreMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleBeginPlayingPreMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleEndPlayingPostMatch()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleLoginCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleMainLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Inviter                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Handle_Party_Invite_Received(class UPUMG_PlayerInfo* Inviter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received"));

	struct
	{
		class UPUMG_PlayerInfo*        Inviter;
	} params;

	params.Inviter = Inviter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::HandleSettingsKeybind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           BeginChatCommand               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUD_C::HandleOpenTextChat(bool BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat"));

	struct
	{
		bool                           BeginChatCommand;
	} params;

	params.BeginChatCommand = BeginChatCommand;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer"));

	struct
	{
		class UPUMG_PlayerInfo*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          SafeFrameScale                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ApplySafeFrameScale(float SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale"));

	struct
	{
		float                          SafeFrameScale;
	} params;

	params.SafeFrameScale = SafeFrameScale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::OnCustomQueueJoin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BrightLobbyHUD_C::EvaluateFocus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerRewardsSummary   PlayerRewardsSummary           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FScoreboardStats        ScoreboardStats                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_BrightLobbyHUD_C::HandleRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived"));

	struct
	{
		struct FPlayerRewardsSummary   PlayerRewardsSummary;
		struct FScoreboardStats        ScoreboardStats;
	} params;

	params.PlayerRewardsSummary = PlayerRewardsSummary;
	params.ScoreboardStats = ScoreboardStats;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ExecuteUbergraph_BP_BrightLobbyHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  Loadout_Slot_Edit              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Loadout_Slot_Change__DelegateSignature(unsigned char Loadout_Slot_Edit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature"));

	struct
	{
		unsigned char                  Loadout_Slot_Edit;
	} params;

	params.Loadout_Slot_Edit = Loadout_Slot_Edit;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
