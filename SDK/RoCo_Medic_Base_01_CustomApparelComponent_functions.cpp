// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Medic_Base_01_CustomApparelComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Get Tablet Material Index
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::Get_Tablet_Material_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Get Tablet Material Index");

	struct
	{
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Index != nullptr)
		*Index = params.Index;
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Get Tablet Material Reference
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::Get_Tablet_Material_Reference(class UMaterialInterface** Material, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Get Tablet Material Reference");

	struct
	{
		class UMaterialInterface*      Material;
		int                            Index;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Material != nullptr)
		*Material = params.Material;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Screen On Off
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           WantsScreenOn                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          New_ShutoffScale               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::Screen_On_Off(float DeltaTime, bool* WantsScreenOn, float* New_ShutoffScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.Screen On Off");

	struct
	{
		float                          DeltaTime;
		bool                           WantsScreenOn;
		float                          New_ShutoffScale;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);

	if (WantsScreenOn != nullptr)
		*WantsScreenOn = params.WantsScreenOn;
	if (New_ShutoffScale != nullptr)
		*New_ShutoffScale = params.New_ShutoffScale;
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.UpdateBGColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSReviveDroneAbilityState     DroneStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::UpdateBGColor(EKSReviveDroneAbilityState DroneStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.UpdateBGColor");

	struct
	{
		EKSReviveDroneAbilityState     DroneStatus;
	} params;

	params.DroneStatus = DroneStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.FindAndBindModInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::FindAndBindModInstance(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.FindAndBindModInstance");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.On Drone Destroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMedic_Base_01_CustomApparelComponent_C::On_Drone_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.On Drone Destroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.AnimNotify_JumpEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMedic_Base_01_CustomApparelComponent_C::AnimNotify_JumpEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.AnimNotify_JumpEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReviveDroneAbilityStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EKSReviveDroneAbilityState     ReviveDroneState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::ReviveDroneAbilityStateChanged(EKSReviveDroneAbilityState ReviveDroneState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReviveDroneAbilityStateChanged");

	struct
	{
		EKSReviveDroneAbilityState     ReviveDroneState;
	} params;

	params.ReviveDroneState = ReviveDroneState;

	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMedic_Base_01_CustomApparelComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Medic_Base_01_CustomApparelComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMedic_Base_01_CustomApparelComponent_C::ExecuteUbergraph_Medic_Base_01_CustomApparelComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Medic_Base_01_CustomApparelComponent.Medic_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Medic_Base_01_CustomApparelComponent");

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
