#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PointOfInterestSelectionRule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterestSelectionRule.PointOfInterestSelectionRule_C
// 0x0048 (0x00F8 - 0x00B0)
class UPointOfInterestSelectionRule_C : public UKSGameRuleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                CurrentIndex;                                             // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                NumObjectives;                                            // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<TScriptInterface<class UKSPointOfInterest>> PointsOfInterest;                                         // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TArray<TScriptInterface<class UKSPointOfInterest>> SelectedPointsOfInterest;                                 // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               bEnableOnSelect;                                          // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bStageOnSelect;                                           // 0x00E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	TArray<TScriptInterface<class UKSPointOfInterest>> OrderedPointsOfInterest;                                  // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PointOfInterestSelectionRule.PointOfInterestSelectionRule_C");
		return ptr;
	}


	void SelectPoints(TArray<TScriptInterface<class UKSPointOfInterest>>* SelectedPOI);
	void GetPOI(TArray<TScriptInterface<class UKSPointOfInterest>>* POI);
	void OrderPointsOfInterest();
	void TryToEnableOnSelect();
	void TryToStageOnSelect();
	void Disable_Selected_POI();
	void Enable_Selected_POI();
	void Stage_Selected_POI();
	void Shuffle_Points_Of_Interest();
	void ReceiveBeginPlay();
	void Restart_Selection();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void On_Activated(class UActorComponent* Component, bool bReset);
	void On_Deactivated(class UActorComponent* Component);
	void ExecuteUbergraph_PointOfInterestSelectionRule(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
