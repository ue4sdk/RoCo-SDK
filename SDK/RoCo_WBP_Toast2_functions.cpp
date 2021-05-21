// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Toast2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Toast2.WBP_Toast2_C.DisplayEventMissionToast
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayEventMissionToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayEventMissionToast");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayPlayerLevelUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayPlayerLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayPlayerLevelUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayBoostActivation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayBoostActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayBoostActivation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayBattlePassUnlock
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayBattlePassUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayBattlePassUnlock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayAwardUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayItemUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayMercMasteryLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::DisplayChallengeAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::OnWaitingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            RarityBase                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            RarityHighlight                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Toast2_C::SetRarityTint(const struct FLinearColor& RarityBase, const struct FLinearColor& RarityHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.SetRarityTint");

	struct
	{
		struct FLinearColor            RarityBase;
		struct FLinearColor            RarityHighlight;
	} params;

	params.RarityBase = RarityBase;
	params.RarityHighlight = RarityHighlight;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Toast2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Toast2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Toast2_C::ExecuteUbergraph_WBP_Toast2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Toast2_C::FinishedOutroAnimation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWidget*               ToastWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Toast2_C::OnRemoveToastNotification__DelegateSignature(class UKSWidget* ToastWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature");

	struct
	{
		class UKSWidget*               ToastWidget;
	} params;

	params.ToastWidget = ToastWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
