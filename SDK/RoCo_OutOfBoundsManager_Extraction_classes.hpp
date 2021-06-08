#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_OutOfBoundsManager_Extraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OutOfBoundsManager_Extraction.OutOfBoundsManager_Extraction_C
// 0x0000 (0x0148 - 0x0148)
class UOutOfBoundsManager_Extraction_C : public UKSOutOfBoundsManager_RoundGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OutOfBoundsManager_Extraction.OutOfBoundsManager_Extraction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
