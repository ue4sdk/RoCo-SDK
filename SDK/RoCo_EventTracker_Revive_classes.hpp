#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Revive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Revive.EventTracker_Revive_C
// 0x0008 (0x0210 - 0x0208)
class UEventTracker_Revive_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Revive.EventTracker_Revive_C");
		return ptr;
	}


	void OnPlayerRevive_Event_1(class AKSPlayerState* Revivee, class AKSPlayerState* Reviver, int ExpBonus);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void ExecuteUbergraph_EventTracker_Revive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
