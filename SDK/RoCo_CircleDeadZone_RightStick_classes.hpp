#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CircleDeadZone_RightStick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CircleDeadZone_RightStick.CircleDeadZone_RightStick_C
// 0x0000 (0x0040 - 0x0040)
class UCircleDeadZone_RightStick_C : public UKSCircleDeadZoneFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CircleDeadZone_RightStick.CircleDeadZone_RightStick_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif