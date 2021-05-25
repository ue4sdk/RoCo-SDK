#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PartyModule_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// 0x0080 (0x0570 - 0x04F0)
class UWBP_PartyModule_C : public UKSPartyManagerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_LeaveParty_C*                           LeaveParty;                                               // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotA;                                                    // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotB;                                                    // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotC;                                                    // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*                  SlotD;                                                    // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header3_C*                              WBP_Header3_C;                                            // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ModuleHeader_C*                         WBP_ModuleHeader;                                         // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Social_Snapshot_C*                      WBP_Social_Snapshot;                                      // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               WBP_VoiceActivityContainer;                               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerCardSelected;                                     // 0x0540(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayerCardBackButton;                                   // 0x0550(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnpartyLeaveVisibilityChange;                             // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C");
		return ptr;
	}


	void GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus);
	void FindPlayerCardByVoiceId(const struct FString& VoiceId, class UWBP_player_card_module_C** PlayerCard);
	void Get_Navigation_Widgets(TArray<class UPUMG_Widget*>* Return_Value);
	void Get_Other_Party_Members(TArray<struct FPUMG_PartyMemberData>* Party_Members, TArray<struct FPUMG_PartyMemberData>* Return_Value);
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData> PartyMembers);
	void InitializeWidget(class APUMG_HUD* HUD);
	void VoiceParticipantAdded(const struct FString& AccountId);
	void VoiceParticipantRemoved(const struct FString& AccountId);
	void VoiceParticipantUpdated(const struct FString& AccountId, bool IsTalking, bool IsMuted);
	void VoiceStateChange(EKSVoiceActivityAudioState State);
	void Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void Handle_Player_Card_Back();
	void HandlePartyLeaveVisibilityChange(bool Visible);
	void ExecuteUbergraph_WBP_PartyModule(int EntryPoint);
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible);
	void OnPlayerCardBackButton__DelegateSignature();
	void OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
