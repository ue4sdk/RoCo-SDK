#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VehicleDiagram_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleDiagram.VehicleDiagram_C
// 0x0000 (0x0028 - 0x0028)
class UVehicleDiagram_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass VehicleDiagram.VehicleDiagram_C");
		return ptr;
	}


	void SetSeating(int Seat_Index, class AKSCharacter* Occupant);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
