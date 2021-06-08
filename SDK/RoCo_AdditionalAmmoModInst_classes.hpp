#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AdditionalAmmoModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AdditionalAmmoModInst.AdditionalAmmoModInst_C
// 0x0058 (0x01F0 - 0x0198)
class UAdditionalAmmoModInst_C : public UKSPlayerModInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TMap<EAmmoType, int>                               Ammo_Amount;                                              // 0x01A0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AdditionalAmmoModInst.AdditionalAmmoModInst_C");
		return ptr;
	}


	void OnNewCharacter();
	void ExecuteUbergraph_AdditionalAmmoModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
