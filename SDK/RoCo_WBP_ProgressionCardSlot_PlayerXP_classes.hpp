#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ProgressionCardSlot_PlayerXP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C
// 0x01C1 (0x03F9 - 0x0238)
class UWBP_ProgressionCardSlot_PlayerXP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            LevelUpAnim;                                              // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  Category;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  PlayerLevelText;                                          // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  PointsEarned;                                             // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ProgressionTally_C*                     ProgressionTally;                                         // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      TextGlow01;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ProgressEarnedBar_C*                    XPProgressEarnedBar;                                      // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FPlayerProgression                          PlayerProgress;                                           // 0x0278(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlayerLevelUp;                                          // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               ShouldShowXPBar;                                          // 0x03F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C");
		return ptr;
	}


	void ShowXPBar(bool ShowXPBar);
	void ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Event_On_Level_Up(int NewLevel);
	void ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP(int EntryPoint);
	void OnPlayerLevelUp__DelegateSignature(const struct FActivityTier& NewTier, class UKSActivityInstance* ActivityInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
