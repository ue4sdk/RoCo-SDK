#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BPI_SetSlomo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_SetSlomo.BPI_SetSlomo_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_SetSlomo_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPI_SetSlomo.BPI_SetSlomo_C");
		return ptr;
	}


	void SetSlomo(bool bEnableSlomo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
