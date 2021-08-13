#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AreaDamageGrenadeWithCookTimeTargeting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AreaDamageGrenadeWithCookTimeTargeting.AreaDamageGrenadeWithCookTimeTargeting_C
// 0x0000 (0x03F0 - 0x03F0)
class UAreaDamageGrenadeWithCookTimeTargeting_C : public UAreaDamageGrenadeTargeting_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AreaDamageGrenadeWithCookTimeTargeting.AreaDamageGrenadeWithCookTimeTargeting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
