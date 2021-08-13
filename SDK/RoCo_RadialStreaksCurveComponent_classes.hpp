#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RadialStreaksCurveComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RadialStreaksCurveComponent.RadialStreaksCurveComponent_C
// 0x0008 (0x0138 - 0x0130)
class URadialStreaksCurveComponent_C : public UKSFXCurveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RadialStreaksCurveComponent.RadialStreaksCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_RadialStreaksCurveComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
