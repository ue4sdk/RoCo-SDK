#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeGlassEjectionModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C
// 0x0008 (0x0470 - 0x0468)
class UBarricadeGlassEjectionModInst_C : public UKSModInst_Activated
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BarricadeGlassEjectionModInst.BarricadeGlassEjectionModInst_C");
		return ptr;
	}


	bool CanActivateNow(EKSAbilityUsageFailureType* OutAbilityFailureType);
	void OnActivation();
	void OnSetupActive(bool bIsTimerActive);
	void ExecuteUbergraph_BarricadeGlassEjectionModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
