#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Walkin_Sub_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Walkin_Sub.Walkin_Sub_C
// 0x0138 (0x0360 - 0x0228)
class AWalkin_Sub_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob1;                                              // 0x0230(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob2;                                              // 0x0258(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSJobItem>                   PreviewJob3;                                              // 0x0280(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSSkinBundle>                PreviewSkin1;                                             // 0x02A8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSSkinBundle>                PreviewSkin2;                                             // 0x02D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UKSSkinBundle>                PreviewSkin3;                                             // 0x02F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              TimeDilation;                                             // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableTimeWindDynamics;                                   // 0x0324(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FName                                       CurrentPhase;                                             // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bNeedCheckRoguesLoading;                                  // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FTimerHandle                                WalkinLoadTimer;                                          // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AWalkInSequenceManager_C*                    WalkInSequenceManager_2_ExecuteUbergraph_Walkin_Sub_RefProperty;// 0x0340(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSExponentialHeightFog*                     ExponentialHeightFog_1_ExecuteUbergraph_Walkin_Sub_RefProperty;// 0x0348(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class ALevelSequenceActor*                         WalkinSequenceActor_ExecuteUbergraph_Walkin_Sub_RefProperty;// 0x0350(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AWalkInSequenceManager_C*                    WalkInSequenceManager_2_EdGraph_0_RefProperty;            // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Walkin_Sub.Walkin_Sub_C");
		return ptr;
	}


	void SetupWalkInWidget();
	void ReceiveBeginPlay();
	void OnPhaseChangeDel(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void OnTimerSecondTick(float NewTruncatedSeconds);
	void FillRogues();
	void SetSlomo(bool bEnableSlomo);
	void ReceiveTick(float DeltaSeconds);
	void WalkinLoadTimeout();
	void PlayWalkinSequence();
	void OnCinematicSubLevelDisabled(const struct FString& CinematicSubLevelName);
	void ExecuteUbergraph_Walkin_Sub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
