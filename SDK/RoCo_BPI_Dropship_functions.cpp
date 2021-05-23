// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BPI_Dropship_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Dropship.BPI_Dropship_C.BPI_OpenDoor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_Dropship_C::BPI_OpenDoor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Dropship.BPI_Dropship_C.BPI_OpenDoor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BPI_Dropship.BPI_Dropship_C.BPI_SetupDoor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_Dropship_C::BPI_SetupDoor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Dropship.BPI_Dropship_C.BPI_SetupDoor"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BPI_Dropship.BPI_Dropship_C.BPI_InitializePlane
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_Dropship_C::BPI_InitializePlane()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BPI_Dropship.BPI_Dropship_C.BPI_InitializePlane"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
