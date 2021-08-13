#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NearMissCurveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NearMissCurveComponent.NearMissCurveComponent_C
// 0x0008 (0x0138 - 0x0130)
class UNearMissCurveComponent_C : public UKSNearMissComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NearMissCurveComponent.NearMissCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_NearMissCurveComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
