// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_AbilityDurationBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetDurationBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 KSItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityDurationBar_C::SetDurationBar(float Duration, class UKSItem* KSItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetDurationBar"));

	struct
	{
		float                          Duration;
		class UKSItem*                 KSItem;
	} params;

	params.Duration = Duration;
	params.KSItem = KSItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityDurationBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.OpenUpdateGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AbilityDurationBar_C::OpenUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.OpenUpdateGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.CloseUpdateGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AbilityDurationBar_C::CloseUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.CloseUpdateGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.UpdateDurationDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AbilityDurationBar_C::UpdateDurationDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.UpdateDurationDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HideDurationBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_AbilityDurationBar_C::HideDurationBar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HideDurationBar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HandleModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activated                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_AbilityDurationBar_C::HandleModActivated(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HandleModActivated"));

	struct
	{
		bool                           Activated;
	} params;

	params.Activated = Activated;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetupDurationBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityDurationBar_C::SetupDurationBar(class UKSModInst_Activated* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetupDurationBar"));

	struct
	{
		class UKSModInst_Activated*    ModInstance;
	} params;

	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.ExecuteUbergraph_WBP_AbilityDurationBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_AbilityDurationBar_C::ExecuteUbergraph_WBP_AbilityDurationBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.ExecuteUbergraph_WBP_AbilityDurationBar"));

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
