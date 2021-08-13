#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AdrenalineEffectCurveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AdrenalineEffectCurveComponent.AdrenalineEffectCurveComponent_C
// 0x0010 (0x0140 - 0x0130)
class UAdrenalineEffectCurveComponent_C : public UKSFXCurveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              MinSpeedToStartBlending;                                  // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              SpeedToReachMaxBlend;                                     // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AdrenalineEffectCurveComponent.AdrenalineEffectCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_AdrenalineEffectCurveComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
