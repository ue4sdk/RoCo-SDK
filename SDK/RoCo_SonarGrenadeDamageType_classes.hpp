#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SonarGrenadeDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SonarGrenadeDamageType.SonarGrenadeDamageType_C
// 0x0000 (0x0140 - 0x0140)
class USonarGrenadeDamageType_C : public UKSDamageTypeSonar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SonarGrenadeDamageType.SonarGrenadeDamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
