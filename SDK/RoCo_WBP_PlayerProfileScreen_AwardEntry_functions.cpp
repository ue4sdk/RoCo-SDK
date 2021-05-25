// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerProfileScreen_AwardEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWBP_PlayerProfileScreen_AwardEntry_C::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetCompletionTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   CompletionTimer                (CPF_Parm, CPF_OutParm)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetCompletionTime(struct FText* CompletionTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetCompletionTime");

	struct
	{
		struct FText                   CompletionTimer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CompletionTimer != nullptr)
		*CompletionTimer = params.CompletionTimer;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateTitle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateTitle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Percentage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ShowBar                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetProgressPercentage(float* Percentage, bool* ShowBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressPercentage");

	struct
	{
		float                          Percentage;
		bool                           ShowBar;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (ShowBar != nullptr)
		*ShowBar = params.ShowBar;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressDisplayText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetProgressDisplayText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressDisplayText");

	struct
	{
		struct FText                   Text;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.IsFinished
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsFinished                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::IsFinished(bool* IsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.IsFinished");

	struct
	{
		bool                           IsFinished;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsFinished != nullptr)
		*IsFinished = params.IsFinished;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetActiveTier
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FActivityTierStructure  ActivityTier                   (CPF_Parm, CPF_OutParm)
// bool                           IsValid                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetActiveTier(struct FActivityTierStructure* ActivityTier, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetActiveTier");

	struct
	{
		struct FActivityTierStructure  ActivityTier;
		bool                           IsValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ActivityTier != nullptr)
		*ActivityTier = params.ActivityTier;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateDescription
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateDescription");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasReward                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FText                   ItemName                       (CPF_Parm, CPF_OutParm)
// struct FText                   ItemDescription                (CPF_Parm, CPF_OutParm)
// class UKSItem*                 CosmeticItem                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetRewardInfo(bool* HasReward, struct FText* ItemName, struct FText* ItemDescription, class UKSItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo");

	struct
	{
		bool                           HasReward;
		struct FText                   ItemName;
		struct FText                   ItemDescription;
		class UKSItem*                 CosmeticItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasReward != nullptr)
		*HasReward = params.HasReward;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
	if (CosmeticItem != nullptr)
		*CosmeticItem = params.CosmeticItem;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          BarPerc                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateBar(float BarPerc, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar");

	struct
	{
		float                          BarPerc;
		bool                           Visible;
	} params;

	params.BarPerc = BarPerc;
	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnimInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delay                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnim(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim");

	struct
	{
		float                          Delay;
	} params;

	params.Delay = Delay;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPlayerAwardsPanelData  Instance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::SetActivityInstance(const struct FPlayerAwardsPanelData& Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance");

	struct
	{
		struct FPlayerAwardsPanelData  Instance;
	} params;

	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AwardEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerProfileScreen_AwardEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerProfileScreen_AwardEntry_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry");

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
