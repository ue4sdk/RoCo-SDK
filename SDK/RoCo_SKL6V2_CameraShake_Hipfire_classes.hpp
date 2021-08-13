#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SKL6V2_CameraShake_Hipfire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SKL6V2_CameraShake_Hipfire.SKL6V2_CameraShake_Hipfire_C
// 0x0000 (0x0160 - 0x0160)
class USKL6V2_CameraShake_Hipfire_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SKL6V2_CameraShake_Hipfire.SKL6V2_CameraShake_Hipfire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
