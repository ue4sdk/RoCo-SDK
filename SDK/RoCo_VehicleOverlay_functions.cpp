// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VehicleOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleOverlay.VehicleOverlay_C.UpdateRevealConeReticle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleOverlay_C::UpdateRevealConeReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.UpdateRevealConeReticle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.SetVehicle
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSVehicle*              Vehicle                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::SetVehicle(class AKSVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.SetVehicle");

	struct
	{
		class AKSVehicle*              Vehicle;
	} params;

	params.Vehicle = Vehicle;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.UnsetVehicle
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleOverlay_C::UnsetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.UnsetVehicle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.ModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.ModeChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UVehicleOverlay_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UVehicleOverlay_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.Handle Vehicle State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleOverlay_C::Handle_Vehicle_State_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Handle Vehicle State Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::HandleVehicleHealthChanged(float CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.HandleVehicleHealthChanged");

	struct
	{
		float                          CurrentHealth;
	} params;

	params.CurrentHealth = CurrentHealth;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.HandleVehicleSeatingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVehicleOverlay_C::HandleVehicleSeatingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.HandleVehicleSeatingChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.ExecuteUbergraph_VehicleOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleOverlay_C::ExecuteUbergraph_VehicleOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.ExecuteUbergraph_VehicleOverlay");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function VehicleOverlay.VehicleOverlay_C.Vehicle State Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InVehicle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UVehicleOverlay_C::Vehicle_State_Changed__DelegateSignature(bool InVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleOverlay.VehicleOverlay_C.Vehicle State Changed__DelegateSignature");

	struct
	{
		bool                           InVehicle;
	} params;

	params.InVehicle = InVehicle;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
