// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Dropship_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dropship_Base.Dropship_Base_C.BPI_InitializePlane
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADropship_Base_C::BPI_InitializePlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_Base.Dropship_Base_C.BPI_InitializePlane");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropship_Base.Dropship_Base_C.BPI_SetupDoor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADropship_Base_C::BPI_SetupDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_Base.Dropship_Base_C.BPI_SetupDoor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropship_Base.Dropship_Base_C.BPI_OpenDoor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADropship_Base_C::BPI_OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_Base.Dropship_Base_C.BPI_OpenDoor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Dropship_Base.Dropship_Base_C.ExecuteUbergraph_Dropship_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ADropship_Base_C::ExecuteUbergraph_Dropship_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropship_Base.Dropship_Base_C.ExecuteUbergraph_Dropship_Base");

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
