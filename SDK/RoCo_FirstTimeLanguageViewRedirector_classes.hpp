#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeLanguageViewRedirector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FirstTimeLanguageViewRedirector.FirstTimeLanguageViewRedirector_C
// 0x0000 (0x0030 - 0x0030)
class UFirstTimeLanguageViewRedirector_C : public UKSViewRedirector_LocalSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FirstTimeLanguageViewRedirector.FirstTimeLanguageViewRedirector_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
