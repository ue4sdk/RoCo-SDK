#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ConfigurableThreatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass ConfigurableThreatComponent.ConfigurableThreatComponent_C
// 0x0000 (0x0198 - 0x0198)
class UConfigurableThreatComponent_C : public UKSThreatComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass ConfigurableThreatComponent.ConfigurableThreatComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
