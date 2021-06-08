// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AbilityTouchButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.OnEquipmentChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    KSModInst                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityTouchButton_C::OnEquipmentChange(class UKSModInst_Activated* KSModInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.OnEquipmentChange");

	struct
	{
		class UKSModInst_Activated*    KSModInst;
	} params;

	params.KSModInst = KSModInst;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AbilityTouchButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_AbilityTouchButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.ExecuteUbergraph_WBP_AbilityTouchButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityTouchButton_C::ExecuteUbergraph_WBP_AbilityTouchButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AbilityTouchButton.WBP_AbilityTouchButton_C.ExecuteUbergraph_WBP_AbilityTouchButton");

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
