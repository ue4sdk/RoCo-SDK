#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ranked_level_tracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ranked_level_tracker.WBP_ranked_level_tracker_C
// 0x01E4 (0x06C4 - 0x04E0)
class UWBP_ranked_level_tracker_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  CurrentProgress;                                          // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RankedIcon_C*                           RankBadgeEnd;                                             // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RankedIcon_C*                           RankBadgeStart;                                           // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  TotalProgress;                                            // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ProgressEarnedBar_C*                    XPBar;                                                    // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              XPEarnedWrapper;                                          // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FPlayerProgression                          Progression;                                              // 0x0518(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               PlayLevelUpRewardSFX;                                     // 0x0688(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               PlayLevelProgressionSFX;                                  // 0x0690(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               StopLevelProgressionSFX;                                  // 0x0698(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLevelUpEvent;                                           // 0x06A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLevelDownEvent;                                         // 0x06B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	int                                                CurrentLevel;                                             // 0x06C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ranked_level_tracker.WBP_ranked_level_tracker_C");
		return ptr;
	}


	void SetProgressColorByTier(TEnumAsByte<E_RankedTiers> RankedTier);
	void SetCurrentLevel(int Tier);
	void OnLerpUpdate(float CurrentLerpPercantage);
	void OnLevelDown(int NewLevel);
	void OnLevelUp(int NewLevel);
	void UpdateLevelDisplay();
	int GetXPRequiredForLevel();
	int GetNextLevel();
	int GetCurrentLevel();
	void ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_ranked_level_tracker(int EntryPoint);
	void OnLevelDownEvent__DelegateSignature(int NewLevel);
	void OnLevelUpEvent__DelegateSignature(int NewLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
