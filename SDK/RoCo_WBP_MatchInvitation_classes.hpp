#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_MatchInvitation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_MatchInvitation.WBP_MatchInvitation_C
// 0x0050 (0x0548 - 0x04F8)
class UWBP_MatchInvitation_C : public UKSMatchInvitationModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                     // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BlockerBkg;                                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  Confirm;                                                  // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  Decline;                                                  // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                InvitationState;                                          // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  InviteMessage;                                            // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                MainWrapper;                                              // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ModalPopupContainer_C*                  WBP_ModalPopupContainer;                                  // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowMatchInvitationSFX;                                   // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_MatchInvitation.WBP_MatchInvitation_C");
		return ptr;
	}


	void BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget);
	void ShowInvitation(class UKSPlayerInfo* playerinfo, const struct FClientQueueInfo& QueueInfo);
	void ShowError(const struct FText& ErrorMessage);
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void InitializeWidgetNavigation();
	void OnHideAnimFinished();
	void ExecuteUbergraph_WBP_MatchInvitation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
