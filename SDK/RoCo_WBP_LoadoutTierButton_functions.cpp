// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoadoutTierButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowPrice                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           SetActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutTierButton_C::SetIsActive(bool ShowPrice, bool SetActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive"));

	struct
	{
		bool                           ShowPrice;
		bool                           SetActive;
	} params;

	params.ShowPrice = ShowPrice;
	params.SetActive = SetActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   PriceText                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_LoadoutTierButton_C::SetTierPrice(const struct FText& PriceText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice"));

	struct
	{
		struct FText                   PriceText;
	} params;

	params.PriceText = PriceText;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_LoadoutTierButton_C::Set_Button_Text(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutTierButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoadoutTierButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_LoadoutTierButton_C::BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutTierButton_C::ExecuteUbergraph_WBP_LoadoutTierButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TierIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutTierButton_C::OnClick__DelegateSignature(int TierIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature"));

	struct
	{
		int                            TierIndex;
	} params;

	params.TierIndex = TierIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TierIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutTierButton_C::OnHover__DelegateSignature(int TierIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature"));

	struct
	{
		int                            TierIndex;
	} params;

	params.TierIndex = TierIndex;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
