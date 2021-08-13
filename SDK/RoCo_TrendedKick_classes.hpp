#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TrendedKick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrendedKick.TrendedKick_C
// 0x0014 (0x003C - 0x0028)
class UTrendedKick_C : public UKickbackModule
{
public:
	TArray<struct FKickTrendProfile>                   KickTrendProfiles;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                TrendRepeatIndex;                                         // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TrendedKick.TrendedKick_C");
		return ptr;
	}


	float GetMaximumHorizontalKick();
	float GetMaximumVerticalKick();
	void GetCurrentTrendProfile(int ShotIndex, struct FKickTrendProfile* TrendProfile);
	struct FInterpCurveVector2D MakeKickbackInstance(int ShotIndex, float AbsoluteMaxDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
