// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BattlepassTransitionBanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_2"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent__ENTRYPOINTWBP_BattlepassTransitionBanner_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.DisplayAcquiredTier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::DisplayAcquiredTier(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.DisplayAcquiredTier"));

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_PremiumUnlocked
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::PlayAnimation_PremiumUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_PremiumUnlocked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierPremium
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::PlayAnimation_NewTierPremium()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierPremium"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierFree
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::PlayAnimation_NewTierFree()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PlayAnimation_NewTierFree"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Premium
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::UpdateColors_Premium()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Premium"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Free
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::UpdateColors_Free()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.UpdateColors_Free"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BattlepassTransitionBanner_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsPremium
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::MakeColorsPremium()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsPremium"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_NewTier
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::SetBannerText_NewTier()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_NewTier"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_PremiumUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::SetBannerText_PremiumUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SetBannerText_PremiumUnlocked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsFree
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::MakeColorsFree()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.MakeColorsFree"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationFinished"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.OnAnimationStarted"));

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.SequenceEvent_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.ExecuteUbergraph_WBP_BattlepassTransitionBanner
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BattlepassTransitionBanner_C::ExecuteUbergraph_WBP_BattlepassTransitionBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.ExecuteUbergraph_WBP_BattlepassTransitionBanner"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.TransitionFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BattlepassTransitionBanner_C::TransitionFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_BattlepassTransitionBanner.WBP_BattlepassTransitionBanner_C.TransitionFinished__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
