// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_JobGeneralButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ShouldShowNewBadge
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShowNewBadge                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_JobGeneralButton_C::ShouldShowNewBadge(bool* ShowNewBadge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ShouldShowNewBadge"));

	struct
	{
		bool                           ShowNewBadge;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShowNewBadge != nullptr)
		*ShowNewBadge = params.ShowNewBadge;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.IsJobOwned
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           owned                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_JobGeneralButton_C::IsJobOwned(bool* owned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.IsJobOwned"));

	struct
	{
		bool                           owned;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (owned != nullptr)
		*owned = params.owned;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UpdateOwnershipDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::UpdateOwnershipDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UpdateOwnershipDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::DisplayFavoriteStatus()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::PopulateJobButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_JobGeneralButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverFavoriteSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnHoverFavoriteSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverFavoriteSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickFavoriteSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnClickFavoriteSFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickFavoriteSFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_JobGeneralButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnGamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_JobGeneralButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_JobGeneralButton_C::ExecuteUbergraph_WBP_JobGeneralButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnFavorited__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_JobGeneralButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_JobGeneralButton_C::OnHovered__DelegateSignature(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_JobGeneralButton_C::OnClicked__DelegateSignature(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
