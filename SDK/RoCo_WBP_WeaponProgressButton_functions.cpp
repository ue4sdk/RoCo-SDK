// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WeaponProgressButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetIsMasteredDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::SetIsMasteredDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.SetIsMasteredDisplay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_WeaponProgressButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.NavigateConfirm");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.GamepadUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_WeaponProgressButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayWeapon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponAsset*          DisplayedWeapon                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponProgressButton_C::DisplayWeapon(class UKSWeaponAsset* DisplayedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayWeapon");

	struct
	{
		class UKSWeaponAsset*          DisplayedWeapon;
	} params;

	params.DisplayedWeapon = DisplayedWeapon;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_WeaponProgressButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayCosmetic
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponAttachment*     Cosmetic                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponProgressButton_C::DisplayCosmetic(class UKSWeaponAttachment* Cosmetic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayCosmetic");

	struct
	{
		class UKSWeaponAttachment*     Cosmetic;
	} params;

	params.Cosmetic = Cosmetic;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayMastery
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            MasteryLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponProgressButton_C::DisplayMastery(int MasteryLevel, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.DisplayMastery");

	struct
	{
		int                            MasteryLevel;
		float                          Percent;
	} params;

	params.MasteryLevel = MasteryLevel;
	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.ExecuteUbergraph_WBP_WeaponProgressButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_WeaponProgressButton_C::ExecuteUbergraph_WBP_WeaponProgressButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WeaponProgressButton.WBP_WeaponProgressButton_C.ExecuteUbergraph_WBP_WeaponProgressButton");

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
