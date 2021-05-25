#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ObjectiveMilestoneMessageQueue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C
// 0x0019 (0x0529 - 0x0510)
class UWBP_ObjectiveMilestoneMessageQueue_C : public UKSAnnouncementQueueWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                AnnouncementWrapper;                                      // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_TeamMessageObjective_C*                 CurrentAnnoucement;                                       // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsKindOfBusy;                                             // 0x0528(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ObjectiveMilestoneMessageQueue.WBP_ObjectiveMilestoneMessageQueue_C");
		return ptr;
	}


	void WrapUpCurrentMessages();
	void Construct();
	void OnAnnouncementReady();
	void SetToNotBusy();
	void OnKillCamEnabled(bool bEnabled);
	void HandleRoundSetup(const struct FRoundInitState& RoundInitState);
	void OnRoundOverDel_Event_1(class AKSGameState* GameState, const struct FRoundResult& RoundResult);
	void ResetDisplay();
	void ExecuteUbergraph_WBP_ObjectiveMilestoneMessageQueue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
