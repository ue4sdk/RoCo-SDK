// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueDetails_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              KSJobItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueDetails_C::SetJobCharacter(class UKSJobItem* KSJobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter"));

	struct
	{
		class UKSJobItem*              KSJobItem;
	} params;

	params.KSJobItem = KSJobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnPurchaseRogue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::SetContextBar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::InitializeOverViewButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_RogueDetails_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::BindOverViewButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueDetails_C::PopulatedJobOverview(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview"));

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueDetails_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnCombatLoadout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnCustomizeLoadout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnRogueMastery()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::SetDisableButtons()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RogueDetails_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueDetails_C::ExecuteUbergraph_WBP_RogueDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails"));

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
