#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeTutorialRedirector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FirstTimeTutorialRedirector.FirstTimeTutorialRedirector_C
// 0x0000 (0x0030 - 0x0030)
class UFirstTimeTutorialRedirector_C : public UKSViewRedirector_LocalSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FirstTimeTutorialRedirector.FirstTimeTutorialRedirector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
