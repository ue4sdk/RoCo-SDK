#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AUD_ExplosionWithEcho_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AUD_ExplosionWithEcho_Grenade.AUD_ExplosionWithEcho_Grenade_C
// 0x0000 (0x00F4 - 0x00F4)
class UAUD_ExplosionWithEcho_Grenade_C : public UAUD_ExplosionWithEcho_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AUD_ExplosionWithEcho_Grenade.AUD_ExplosionWithEcho_Grenade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
