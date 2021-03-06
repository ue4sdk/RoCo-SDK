#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_Quality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C
// 0x0008 (0x0120 - 0x0118)
class USettingsInfo_Quality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_Quality(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
