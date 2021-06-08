#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AreaDamageGrenadeTargeting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AreaDamageGrenadeTargeting.AreaDamageGrenadeTargeting_C
// 0x0000 (0x03F0 - 0x03F0)
class UAreaDamageGrenadeTargeting_C : public USimpleGrenadeTargeting_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AreaDamageGrenadeTargeting.AreaDamageGrenadeTargeting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
