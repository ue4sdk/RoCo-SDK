#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_CrosshairColor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_CrosshairColor.SettingsInfo_CrosshairColor_C
// 0x0000 (0x0120 - 0x0120)
class USettingsInfo_CrosshairColor_C : public UKSSettingsInfo_CrosshairColor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_CrosshairColor.SettingsInfo_CrosshairColor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
