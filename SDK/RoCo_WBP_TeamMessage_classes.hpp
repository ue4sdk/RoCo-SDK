#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_TeamMessage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C
// 0x0030 (0x0510 - 0x04E0)
class UWBP_TeamMessage_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                AnnouncementWrapper;                                      // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                CurrentTeamAdvantage;                                     // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class UPUMG_Widget*                                CurrentAnnouncement;                                      // 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        QueuedAnnouncments;                                       // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_TeamMessage.WBP_TeamMessage_C"));
		return ptr;
	}


	void AbortCurrentAnnouncement();
	void ShowAnnouncement(const struct FAnnouncementData& Announcement);
	void HandleOnAnnouncement(const struct FAnnouncementData& Announcement);
	void CheckShouldShow(const struct FAnnouncementData& AnnouncementData, bool* Return);
	void Construct();
	void OnAnnouncementFinished();
	void OnKillCamEnabled(bool bEnabled);
	void HandleRoundSetup(const struct FRoundInitState& RoundInitState);
	void HandleQueuedAnnoucements();
	void ExecuteUbergraph_WBP_TeamMessage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
