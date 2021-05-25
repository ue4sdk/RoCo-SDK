#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_GlobalQuality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C
// 0x0018 (0x0138 - 0x0120)
class USettingsInfo_GlobalQuality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0120(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FString>                             QualityNames;                                             // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_GlobalQuality(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
