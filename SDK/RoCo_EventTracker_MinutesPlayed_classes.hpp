#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_MinutesPlayed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_MinutesPlayed.EventTracker_MinutesPlayed_C
// 0x0008 (0x0210 - 0x0208)
class UEventTracker_MinutesPlayed_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_MinutesPlayed.EventTracker_MinutesPlayed_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void ExecuteUbergraph_EventTracker_MinutesPlayed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
