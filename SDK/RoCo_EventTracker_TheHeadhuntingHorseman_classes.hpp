#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_TheHeadhuntingHorseman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_TheHeadhuntingHorseman.EventTracker_TheHeadhuntingHorseman_C
// 0x000C (0x01FC - 0x01F0)
class UEventTracker_TheHeadhuntingHorseman_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Headshots;                                                // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_TheHeadhuntingHorseman.EventTracker_TheHeadhuntingHorseman_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void EventHandleCombatEvent(const struct FCombatEventInfo& DamageInfo);
	void ExecuteUbergraph_EventTracker_TheHeadhuntingHorseman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif