#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GameTimer.GameTimer_C
// 0x008A (0x058A - 0x0500)
class UGameTimer_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UInvalidationBox*                            InvalidationBox_1;                                        // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Timer;                                                    // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UBorder*                                     TimerWrapper;                                             // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               Colors_Set;                                               // 0x0520(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Timer_Only;                                               // 0x0521(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0522(0x0006) MISSED OFFSET
	TMap<int, int>                                     TeamAliveCount;                                           // 0x0528(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               IsDisplayDirty;                                           // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	float                                              SecondTimeout;                                            // 0x057C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentSecond;                                            // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CountdownMax;                                             // 0x0584(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ActiveBomb;                                               // 0x0588(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               UseCustomTimer;                                           // 0x0589(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass GameTimer.GameTimer_C");
		return ptr;
	}


	void ConvertSecondToTime(float Second, struct FText* TimeText);
	void SetLocalTimer(float DeltaTime);
	void SetUseCustomTimer(bool bUseCustomTimer);
	void ShouldPlayCountdownSound(bool* ShouldPlay);
	void PlayFinalCountdownSound();
	void DebugIssues(const struct FString& Message);
	void SetRoundTimerSize(int NewSize);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenRetryGameStateBind();
	void CloseRetryGameStateBind();
	void RetryGameStateBind();
	void OnUIRelevantPlayerStateChanged(class AKSPlayerState* PlayerState);
	void OnGameTimerUpdate(float NewTruncatedSeconds);
	void InitializeTimer();
	void HandleKillCamEnabled(bool bEnabled);
	void Unbind_OnGameTimerUpdate();
	void HandleKillCamViewPawn(class APawn* ViewedPawn);
	void HandleObjectiveTimerTick(float Seconds);
	void ExecuteUbergraph_GameTimer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
