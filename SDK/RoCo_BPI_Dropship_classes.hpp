#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BPI_Dropship_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Dropship.BPI_Dropship_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Dropship_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BPI_Dropship.BPI_Dropship_C"));
		return ptr;
	}


	void BPI_OpenDoor();
	void BPI_SetupDoor();
	void BPI_InitializePlane();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
