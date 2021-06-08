// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_HeadstrongPerkActive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.SetDisabledState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HeadstrongPerkActive_C::SetDisabledState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.SetDisabledState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.SetActiveState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_HeadstrongPerkActive_C::SetActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.SetActiveState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnRepairableArmorEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEquiped                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HeadstrongPerkActive_C::OnRepairableArmorEquipped(bool bEquiped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnRepairableArmorEquipped");

	struct
	{
		bool                           bEquiped;
	} params;

	params.bEquiped = bEquiped;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnArmorInteractAvailable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bAvailable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_HeadstrongPerkActive_C::OnArmorInteractAvailable(bool bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnArmorInteractAvailable");

	struct
	{
		bool                           bAvailable;
	} params;

	params.bAvailable = bAvailable;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnPawnSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   OwningPawn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HeadstrongPerkActive_C::OnPawnSet(class APawn* OwningPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnPawnSet");

	struct
	{
		class APawn*                   OwningPawn;
	} params;

	params.OwningPawn = OwningPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.Initialize Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HeadstrongPerkActive_C::Initialize_Widget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.Initialize Widget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnPawnCleared
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Old_Pawn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HeadstrongPerkActive_C::OnPawnCleared(class APawn* Old_Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.OnPawnCleared");

	struct
	{
		class APawn*                   Old_Pawn;
	} params;

	params.Old_Pawn = Old_Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.ExecuteUbergraph_WBP_HeadstrongPerkActive
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_HeadstrongPerkActive_C::ExecuteUbergraph_WBP_HeadstrongPerkActive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C.ExecuteUbergraph_WBP_HeadstrongPerkActive");

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
