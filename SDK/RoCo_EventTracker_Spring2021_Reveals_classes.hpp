#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Spring2021_Reveals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C
// 0x0020 (0x0210 - 0x01F0)
class UEventTracker_Spring2021_Reveals_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                EventCount;                                               // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ValidRevealClasses;                                       // 0x0200(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Spring2021_Reveals.EventTracker_Spring2021_Reveals_C");
		return ptr;
	}


	void IsValidAndSeparateTeam(const struct FKSRevealInfo& RevealInfo, bool* Valid);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHasEnded_Event();
	void OnServerRevealAdded(const struct FKSRevealInfo& AddedRevealInfo);
	void ExecuteUbergraph_EventTracker_Spring2021_Reveals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
