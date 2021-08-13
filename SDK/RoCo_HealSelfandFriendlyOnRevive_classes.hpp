#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealSelfandFriendlyOnRevive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HealSelfandFriendlyOnRevive.HealSelfandFriendlyOnRevive_C
// 0x0000 (0x01B9 - 0x01B9)
class UHealSelfandFriendlyOnRevive_C : public UMultiModInstance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass HealSelfandFriendlyOnRevive.HealSelfandFriendlyOnRevive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
