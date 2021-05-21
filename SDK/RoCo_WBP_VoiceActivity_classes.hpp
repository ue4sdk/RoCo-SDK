#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VoiceActivity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C
// 0x0060 (0x05B0 - 0x0550)
class UWBP_VoiceActivity_C : public UKSVoiceActivityWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                VoiceBox;                                                 // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TMap<struct FString, class UWBP_VoiceParticipantElement_C*> AccountWidgetMap;                                         // 0x0560(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_VoiceActivity.WBP_VoiceActivity_C");
		return ptr;
	}


	void GetNameForMctsId(int64_t MctsId, struct FText* Name);
	void Voice_Participant_Updated(const struct FString& Account, bool IsTalking, bool IsMuted);
	void AddVoiceParticipant(const struct FString& Account);
	void RemoveVoiceParticipant(const struct FString& Account);
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnVoiceParticipantRemoved(const struct FString& AccountId);
	void OnVoiceParticipantAdded(const struct FString& AccountId);
	void OnVoiceParticipantUpdated(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void ExecuteUbergraph_WBP_VoiceActivity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
