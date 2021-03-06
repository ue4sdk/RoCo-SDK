#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Daily_Challenge_Timer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C
// 0x0020 (0x0500 - 0x04E0)
class UWBP_Daily_Challenge_Timer_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  ContractTimer;                                            // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWidgetSwitcher*                             NextChallengeSwitcher;                                    // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              CachedSecondsRemaining;                                   // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CachedRealTimeSeconds;                                    // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C");
		return ptr;
	}


	float GetCurrentSecondsRemaining();
	void CheckForNewChallenge();
	void UpdateContractTimer();
	void SetRemainingTime();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_Daily_Challenge_Timer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
