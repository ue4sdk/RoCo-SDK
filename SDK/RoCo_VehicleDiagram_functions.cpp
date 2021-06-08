// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VehicleDiagram_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleDiagram.VehicleDiagram_C.SetSeating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seat_Index                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSCharacter*            Occupant                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UVehicleDiagram_C::SetSeating(int Seat_Index, class AKSCharacter* Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDiagram.VehicleDiagram_C.SetSeating");

	struct
	{
		int                            Seat_Index;
		class AKSCharacter*            Occupant;
	} params;

	params.Seat_Index = Seat_Index;
	params.Occupant = Occupant;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
