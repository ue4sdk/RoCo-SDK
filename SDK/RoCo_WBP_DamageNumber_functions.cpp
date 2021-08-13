// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_DamageNumber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DamageNumber.WBP_DamageNumber_C.PlayerIsBlinded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_DamageNumber_C::PlayerIsBlinded()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.PlayerIsBlinded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.ClearAnimationsPlaying
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::ClearAnimationsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.ClearAnimationsPlaying");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.UpdateVisuals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWBP_DamageNumber_C::UpdateVisuals(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.UpdateVisuals");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Gadget Type
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Gadget_Type()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Gadget Type");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Shielded Modifier
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Shielded_Modifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Shielded Modifier");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Immune Modifier
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Immune_Modifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Immune Modifier");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Lethal Flourish
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Lethal_Flourish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Lethal Flourish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Headshot Flourish
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Headshot_Flourish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Headshot Flourish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Lethal Base
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Lethal_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Lethal Base");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Armored Base
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Armored_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Armored Base");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Add Normal Base
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Add_Normal_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Add Normal Base");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Damage Amount
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::Handle_Damage_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.Handle Damage Amount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplayInformationReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::OnDisplayInformationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplayInformationReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplaySpecialDamageInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentDamageAmount            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSpecialDamageColors    DamageColors                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)
// bool                           bChangePosition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_DamageNumber_C::OnDisplaySpecialDamageInfo(float CurrentDamageAmount, const struct FSpecialDamageColors& DamageColors, bool bChangePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.OnDisplaySpecialDamageInfo");

	struct
	{
		float                          CurrentDamageAmount;
		struct FSpecialDamageColors    DamageColors;
		bool                           bChangePosition;
	} params;

	params.CurrentDamageAmount = CurrentDamageAmount;
	params.DamageColors = DamageColors;
	params.bChangePosition = bChangePosition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.HandleNumberAnimationFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::HandleNumberAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.HandleNumberAnimationFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.SetContentVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_DamageNumber_C::SetContentVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.SetContentVisibility");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.PlayNumberAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DamageNumber_C::PlayNumberAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.PlayNumberAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DamageNumber_C::ExecuteUbergraph_WBP_DamageNumber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumber.WBP_DamageNumber_C.ExecuteUbergraph_WBP_DamageNumber");

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
