#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MultiCosmeticHeatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C
// 0x0066 (0x0178 - 0x0112)
class UMultiCosmeticHeatComponent_C : public UBaseCosmeticHeatComponent_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	TMap<class USceneComponent*, class UParticleSystemComponent*> ParentParticle;                                           // 0x0118(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	TArray<class USceneComponent*>                     ParentList;                                               // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MultiCosmeticHeatComponent.MultiCosmeticHeatComponent_C");
		return ptr;
	}


	void NewEntryHelper(class USceneComponent* Parent);
	void ApplyTempHelper(float Temp, class UParticleSystemComponent* Particle);
	void ReactHelper(class USceneComponent* Parent, class UParticleSystemComponent* Particle);
	void UnregisterAttachComp(class USceneComponent* OldAttach);
	void RegisterAttachComp(class USceneComponent* NewAttach);
	void DeactivateCosmetics();
	void Apply_Temperature(float Applied_Temp);
	void ReactToThermalVisionState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
