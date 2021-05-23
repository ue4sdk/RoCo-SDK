// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_DurationBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DurationBar.WBP_DurationBar_C.SetDurationBar
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DurationTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RemainingTime                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSItem*                 Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::SetDurationBar(float DurationTime, float RemainingTime, class UKSItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.SetDurationBar"));

	struct
	{
		float                          DurationTime;
		float                          RemainingTime;
		class UKSItem*                 Item;
	} params;

	params.DurationTime = DurationTime;
	params.RemainingTime = RemainingTime;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DurationBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.OpenUpdateGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DurationBar_C::OpenUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.OpenUpdateGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.CloseUpdateGate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DurationBar_C::CloseUpdateGate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.CloseUpdateGate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.HandleModActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Activated                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_DurationBar_C::HandleModActivated(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.HandleModActivated"));

	struct
	{
		bool                           Activated;
	} params;

	params.Activated = Activated;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.UpdateDurationDisplay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DurationBar_C::UpdateDurationDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.UpdateDurationDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.HideDurationBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DurationBar_C::HideDurationBar()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.HideDurationBar"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.HandleProjectileFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSWeaponAsset*          WeaponAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::HandleProjectileFired(float Duration, class UKSWeaponAsset* WeaponAsset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.HandleProjectileFired"));

	struct
	{
		float                          Duration;
		class UKSWeaponAsset*          WeaponAsset;
	} params;

	params.Duration = Duration;
	params.WeaponAsset = WeaponAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.SetupDurationBar
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::SetupDurationBar(class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.SetupDurationBar"));

	struct
	{
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.OnBonusDurationReceived
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    ModInst                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::OnBonusDurationReceived(class UKSModInst_Activated* ModInst)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.OnBonusDurationReceived"));

	struct
	{
		class UKSModInst_Activated*    ModInst;
	} params;

	params.ModInst = ModInst;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DurationBar.WBP_DurationBar_C.ExecuteUbergraph_WBP_DurationBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DurationBar_C::ExecuteUbergraph_WBP_DurationBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DurationBar.WBP_DurationBar_C.ExecuteUbergraph_WBP_DurationBar"));

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
