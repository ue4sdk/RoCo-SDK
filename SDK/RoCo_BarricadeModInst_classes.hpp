#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarricadeModInst.BarricadeModInst_C
// 0x0008 (0x0548 - 0x0540)
class UBarricadeModInst_C : public UKSModInst_GiveBuildOnActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BarricadeModInst.BarricadeModInst_C");
		return ptr;
	}


	void OnFullyCharged();
	void BuildSpawned(class AKSBuild* SpawnedBuild);
	void BuildDestroyed(class AActor* DestroyedActor);
	void BuildComponentDestroyed(class AKSBuild* Build, class UPrimitiveComponent* DestroyedComponent);
	void ExecuteUbergraph_BarricadeModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
