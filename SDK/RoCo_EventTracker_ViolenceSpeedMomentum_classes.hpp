#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_ViolenceSpeedMomentum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_ViolenceSpeedMomentum.EventTracker_ViolenceSpeedMomentum_C
// 0x0009 (0x0211 - 0x0208)
class UEventTracker_ViolenceSpeedMomentum_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               MultiDownAchieved;                                        // 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_ViolenceSpeedMomentum.EventTracker_ViolenceSpeedMomentum_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHAsEnded_Event();
	void OnMultiDown_Event(int DownCount);
	void ExecuteUbergraph_EventTracker_ViolenceSpeedMomentum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
