// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ActiveBoosterShelf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.RefreshActiveBoosts
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ActiveBoosterShelf_C::RefreshActiveBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.RefreshActiveBoosts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ActiveBoosterShelf_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ActiveBoosterShelf_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveBoosterShelf_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.OnAcquisition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSAcquisition*          Acquisition                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveBoosterShelf_C::OnAcquisition(class UKSAcquisition* Acquisition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.OnAcquisition");

	struct
	{
		class UKSAcquisition*          Acquisition;
	} params;

	params.Acquisition = Acquisition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ActiveBoosterShelf_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWBP_ActiveBoosterShelf_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.ExecuteUbergraph_WBP_ActiveBoosterShelf
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ActiveBoosterShelf_C::ExecuteUbergraph_WBP_ActiveBoosterShelf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ActiveBoosterShelf.WBP_ActiveBoosterShelf_C.ExecuteUbergraph_WBP_ActiveBoosterShelf");

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
