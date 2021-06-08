#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MVPLineup_Sub_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MVPLineup_Sub.MVPLineup_Sub_C
// 0x00B0 (0x02D8 - 0x0228)
class AMVPLineup_Sub_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob1;                                              // 0x0230(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob2;                                              // 0x0258(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob3;                                              // 0x0280(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              TimeDilation;                                             // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableTimeWindDynamics;                                   // 0x02AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FName                                       CurrentPhase;                                             // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bNeedCheckRoguesLoading;                                  // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class AWalkInSequenceManager_C*                    MVPLineupSequenceManager_ExecuteUbergraph_MVPLineup_Sub_RefProperty;// 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSExponentialHeightFog*                     ExponentialHeightFog_1_ExecuteUbergraph_MVPLineup_Sub_RefProperty;// 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AWalkInSequenceManager_C*                    MVPLineupSequenceManager_EdGraph_0_RefProperty;           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MVPLineup_Sub.MVPLineup_Sub_C");
		return ptr;
	}


	void SetupWalkOutWidget();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnPhaseChangeDel(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void OnTimerSecondTick(float NewTruncatedSeconds);
	void FillRogues();
	void SetSlomo(bool bEnableSlomo);
	void ExecuteUbergraph_MVPLineup_Sub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
