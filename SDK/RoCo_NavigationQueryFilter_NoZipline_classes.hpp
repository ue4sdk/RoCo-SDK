#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NavigationQueryFilter_NoZipline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NavigationQueryFilter_NoZipline.NavigationQueryFilter_NoZipline_C
// 0x0000 (0x0048 - 0x0048)
class UNavigationQueryFilter_NoZipline_C : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NavigationQueryFilter_NoZipline.NavigationQueryFilter_NoZipline_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
