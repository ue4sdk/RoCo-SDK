#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BaseCosmeticHeatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C
// 0x0012 (0x0112 - 0x0100)
class UBaseCosmeticHeatComponent_C : public UKSHeatSourceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystem*                             ThermalVisionExtraParticlesPS;                            // 0x0108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HeatEnabled;                                              // 0x0110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	EModViewModeState                                  CurrentThermalVisionState;                                // 0x0111(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BaseCosmeticHeatComponent.BaseCosmeticHeatComponent_C");
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
	void ExecuteUbergraph_BaseCosmeticHeatComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
