#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_ToastNotification_Manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
// 0x0029 (0x0569 - 0x0540)
class UWBP_ToastNotification_Manager_C : public UKSToastNotificationWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                ChallengeNotificationContainer;                           // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                NotificationContainer;                                    // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FText>                               LocalizeTexts;                                            // 0x0558(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	bool                                               CanDisplaySocialToasts;                                   // 0x0568(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C");
		return ptr;
	}


	void PushAwardsEarnedInMatch();
	void DisplayChallengeToast(class UWBP_Toast2_C* Toast);
	void DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast);
	void OnToastNotificationReceived(const struct FToastData& ToastData);
	void HandleToastNotificationRemove(class UKSWidget* ToastNotification);
	void OnToastIntroAnimFinished();
	void Construct();
	void HandleChallengeToastNotificationRemove(class UKSWidget* ToastNotification);
	void ExecuteUbergraph_WBP_ToastNotification_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
