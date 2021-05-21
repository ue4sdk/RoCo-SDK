#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ChallengeView_DailyContracts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C
// 0x0060 (0x0550 - 0x04F0)
class UWBP_ChallengeView_DailyContracts_C : public UKSDailyChallengeViewBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image_191;                                                // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_362;                                                // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  TimeRemaining;                                            // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             TimerSwitcher;                                            // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card;                                  // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card_2;                                // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Card_C*                  WBP_ChallengeEntry_Card_3;                                // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Weekly_C*                WBP_ChallengeEntry_Weekly;                                // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                CachedTimeRemainingSecs;                                  // 0x0538(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	TArray<int>                                        CachedContractIds;                                        // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C");
		return ptr;
	}


	TArray<class UKSActivityInstance*> GetDisplayingChallenges();
	void Get_Daily_Challenge_Cards(TArray<class UWBP_ChallengeEntry_Card_C*>* Return_Value);
	void InitializeWidgetNavigation();
	void InitializeChallengeDisplays();
	void DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish);
	void DisplayChallengeTimeRemaining(int TimeRemainingSeconds);
	void ExecuteUbergraph_WBP_ChallengeView_DailyContracts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
