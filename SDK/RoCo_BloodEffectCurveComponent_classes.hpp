#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BloodEffectCurveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C
// 0x0008 (0x0140 - 0x0138)
class UBloodEffectCurveComponent_C : public UKSBloodSplatterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_BloodEffectCurveComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
