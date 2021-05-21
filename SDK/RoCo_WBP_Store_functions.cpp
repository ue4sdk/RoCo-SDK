// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Store.WBP_Store_C.ConvertStoreTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Time                           (CPF_Parm, CPF_OutParm)

void UWBP_Store_C::ConvertStoreTime(struct FText* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.ConvertStoreTime");

	struct
	{
		struct FText                   Time;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function WBP_Store.WBP_Store_C.UpdateStoreTimer
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::UpdateStoreTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.UpdateStoreTimer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UKSStoreItemHelper*      StoreItemHelper                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::GetKSStoreItemHelper(class UKSStoreItemHelper** StoreItemHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper");

	struct
	{
		class UKSStoreItemHelper*      StoreItemHelper;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StoreItemHelper != nullptr)
		*StoreItemHelper = params.StoreItemHelper;
}


// Function WBP_Store.WBP_Store_C.Set Initial Scroll Position
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::Set_Initial_Scroll_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.Set Initial Scroll Position");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_Store_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnKeyDown");

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


// Function WBP_Store.WBP_Store_C.OnPrevSection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::OnPrevSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnPrevSection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnNextSection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::OnNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnNextSection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::OnStoreSectionSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnStoreSectionSelected");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.AddSectionsToStore
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UKSStoreSection*> StoreSection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Store_C::AddSectionsToStore(TArray<class UKSStoreSection*>* StoreSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.AddSectionsToStore");

	struct
	{
		TArray<class UKSStoreSection*> StoreSection;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (StoreSection != nullptr)
		*StoreSection = params.StoreSection;
}


// Function WBP_Store.WBP_Store_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_Store_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.NavigateBack");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_Store.WBP_Store_C.PopulateStore
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::PopulateStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.PopulateStore");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnVendorsReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// int                            GroupId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<int>                    VendorIds                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_Store_C::OnVendorsReceived(int GroupId, TArray<int> VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnVendorsReceived");

	struct
	{
		int                            GroupId;
		TArray<int>                    VendorIds;
	} params;

	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnBackPrompt");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Store_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Store_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Store_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Store_C::OnOpenCodeRedeem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            FocusGroup                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure");

	struct
	{
		int                            FocusGroup;
	} params;

	params.FocusGroup = FocusGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnPortalOffersReceived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Store_C::OnPortalOffersReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnPortalOffersReceived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.OnPricePointsReveived
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Store_C::OnPricePointsReveived()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.OnPricePointsReveived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Store_C::ExecuteUbergraph_WBP_Store(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store");

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
