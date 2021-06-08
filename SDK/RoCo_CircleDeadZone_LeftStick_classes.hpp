#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CircleDeadZone_LeftStick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CircleDeadZone_LeftStick.CircleDeadZone_LeftStick_C
// 0x0000 (0x0040 - 0x0040)
class UCircleDeadZone_LeftStick_C : public UKSCircleDeadZoneFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CircleDeadZone_LeftStick.CircleDeadZone_LeftStick_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
