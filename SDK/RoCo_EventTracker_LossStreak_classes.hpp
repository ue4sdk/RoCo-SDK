#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_LossStreak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_LossStreak.EventTracker_LossStreak_C
// 0x0008 (0x0210 - 0x0208)
class UEventTracker_LossStreak_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_LossStreak.EventTracker_LossStreak_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHAsEnded_Event();
	void ExecuteUbergraph_EventTracker_LossStreak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
