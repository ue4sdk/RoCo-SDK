#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SwapParticleHeatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SwapParticleHeatComponent.SwapParticleHeatComponent_C
// 0x0020 (0x0120 - 0x0100)
class USwapParticleHeatComponent_C : public UKSHeatSourceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               HeatEnabled;                                              // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EModViewModeState                                  CurrentThermalVisionState;                                // 0x0109(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x6];                                       // 0x010A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    HotPSComp;                                                // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    NormalPSComp;                                             // 0x0118(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SwapParticleHeatComponent.SwapParticleHeatComponent_C");
		return ptr;
	}


	void DeactivateCosmetics();
	void ReactToThermalVisionState();
	void EnableHeat(bool Enabled);
	void Apply_Temperature(float Applied_Temp);
	void OnThermalVisionStateChanged(EModViewModeState NewState);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void OnTemperatureChanged_Event(class UKSHeatSourceComponent* HeatSource, float NewTemperature);
	void ExecuteUbergraph_SwapParticleHeatComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
