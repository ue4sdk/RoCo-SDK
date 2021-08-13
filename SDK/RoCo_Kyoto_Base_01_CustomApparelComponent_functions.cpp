// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Kyoto_Base_01_CustomApparelComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.FindAndBindModInstance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKyoto_Base_01_CustomApparelComponent_C::FindAndBindModInstance(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.FindAndBindModInstance");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UKyoto_Base_01_CustomApparelComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKyoto_Base_01_CustomApparelComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ChargeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSModInst_Activated*    ChargingModInstance            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKyoto_Base_01_CustomApparelComponent_C::ChargeChanged(class UKSModInst_Activated* ChargingModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ChargeChanged");

	struct
	{
		class UKSModInst_Activated*    ChargingModInstance;
	} params;

	params.ChargingModInstance = ChargingModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.Inventory Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UKyoto_Base_01_CustomApparelComponent_C::Inventory_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.Inventory Change");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Kyoto_Base_01_CustomApparelComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKyoto_Base_01_CustomApparelComponent_C::ExecuteUbergraph_Kyoto_Base_01_CustomApparelComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kyoto_Base_01_CustomApparelComponent.Kyoto_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Kyoto_Base_01_CustomApparelComponent");

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
