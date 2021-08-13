#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelection_Sub_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JobSelection_Sub.JobSelection_Sub_C
// 0x0038 (0x0260 - 0x0228)
class AJobSelection_Sub_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              TimeDilation;                                             // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               EnableTimeWindDynamics;                                   // 0x0234(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	struct FName                                       CurrentPhase;                                             // 0x0238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bNeedCheckRoguesLoading;                                  // 0x0240(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Enable_Pose_Rogue_Time_Dilation;                          // 0x0241(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class AKSLobbyCameraActor*                         KSLobbyCameraActor1_ExecuteUbergraph_JobSelection_Sub_RefProperty;// 0x0248(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AInGameJobSelectionPreviewActor_C*           PreviewActor1_ExecuteUbergraph_JobSelection_Sub_RefProperty;// 0x0250(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AWalkInSequenceManager_C*                    WalkInSequenceManager_2_ExecuteUbergraph_JobSelection_Sub_RefProperty;// 0x0258(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass JobSelection_Sub.JobSelection_Sub_C");
		return ptr;
	}


	void SetSlomo(bool bEnableSlomo);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnTimerSecondTick(float NewTruncatedSeconds);
	void Time_Dilation_for__Posed_Rogues();
	void On_Player_Rogue_Preview_Changed(class AKSJobSelectPreviewActor* PreviewActor, EKSJobSelectPreviewLoadState PreviousState);
	void On_Rogue_Preview_Fully_Loaded();
	void OnPhaseChangeDel(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void ExecuteUbergraph_JobSelection_Sub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
