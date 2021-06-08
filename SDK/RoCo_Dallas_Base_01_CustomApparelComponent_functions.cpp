// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Dallas_Base_01_CustomApparelComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.Find and Bind Mod Instance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDallas_Base_01_CustomApparelComponent_C::Find_and_Bind_Mod_Instance(class AKSCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.Find and Bind Mod Instance");

	struct
	{
		class AKSCharacter*            Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDallas_Base_01_CustomApparelComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Dallas_Base_01_CustomApparelComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDallas_Base_01_CustomApparelComponent_C::ExecuteUbergraph_Dallas_Base_01_CustomApparelComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dallas_Base_01_CustomApparelComponent.Dallas_Base_01_CustomApparelComponent_C.ExecuteUbergraph_Dallas_Base_01_CustomApparelComponent");

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
