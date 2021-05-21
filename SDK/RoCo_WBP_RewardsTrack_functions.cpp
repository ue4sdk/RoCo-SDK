// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RewardsTrack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetCurrentPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URewardsTrackSavedPosition_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class URewardsTrackSavedPosition_C* UWBP_RewardsTrack_C::GetCurrentPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetCurrentPosition");

	struct
	{
		class URewardsTrackSavedPosition_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnInputStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnInputStateChanged");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.NavigatePageWithDirection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DidNavigate                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RewardsTrack_C::NavigatePageWithDirection(int Direction, bool* DidNavigate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.NavigatePageWithDirection");

	struct
	{
		int                            Direction;
		bool                           DidNavigate;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);

	if (DidNavigate != nullptr)
		*DidNavigate = params.DidNavigate;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.DisplayPage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Page                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::DisplayPage(int Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.DisplayPage");

	struct
	{
		int                            Page;
	} params;

	params.Page = Page;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetNavigationWidgets
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UWBP_RewardListEntry_C*> Widgets                        (CPF_Parm, CPF_OutParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::GetNavigationWidgets(TArray<class UWBP_RewardListEntry_C*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetNavigationWidgets");

	struct
	{
		TArray<class UWBP_RewardListEntry_C*> Widgets;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSActivityInstance*     ActivityInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::InitializeWithActivityInstance(class UKSActivityInstance* ActivityInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance");

	struct
	{
		class UKSActivityInstance*     ActivityInstance;
	} params;

	params.ActivityInstance = ActivityInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithStoreItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UPUMG_StoreItem*> StoreItems                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::InitializeWithStoreItems(TArray<class UPUMG_StoreItem*>* StoreItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithStoreItems");

	struct
	{
		TArray<class UPUMG_StoreItem*> StoreItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StoreItems != nullptr)
		*StoreItems = params.StoreItems;
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithAcquisition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::InitializeWithAcquisition(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithAcquisition");

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnEntryClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_RewardListEntry_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FCosmeticSlotDetails    RewardSlotDetails              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPUMG_StoreItem*         StoreItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::OnEntryClicked(class UWBP_RewardListEntry_C* Widget, const struct FCosmeticSlotDetails& RewardSlotDetails, class UPUMG_StoreItem* StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnEntryClicked");

	struct
	{
		class UWBP_RewardListEntry_C*  Widget;
		struct FCosmeticSlotDetails    RewardSlotDetails;
		class UPUMG_StoreItem*         StoreItem;
	} params;

	params.Widget = Widget;
	params.RewardSlotDetails = RewardSlotDetails;
	params.StoreItem = StoreItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RewardsTrack_C::OnClickedPageLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageLeft");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RewardsTrack_C::OnClickedPageRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageRight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RewardsTrack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::ExecuteUbergraph_WBP_RewardsTrack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnPageNavigated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RewardsTrack_C::OnPageNavigated__DelegateSignature(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnPageNavigated__DelegateSignature");

	struct
	{
		int                            Direction;
	} params;

	params.Direction = Direction;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
