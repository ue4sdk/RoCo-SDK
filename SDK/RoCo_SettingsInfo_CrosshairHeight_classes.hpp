#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_CrosshairHeight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_CrosshairHeight.SettingsInfo_CrosshairHeight_C
// 0x0000 (0x0118 - 0x0118)
class USettingsInfo_CrosshairHeight_C : public UKSSettingsInfo_Generic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_CrosshairHeight.SettingsInfo_CrosshairHeight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
