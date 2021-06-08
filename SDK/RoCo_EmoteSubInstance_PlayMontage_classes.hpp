#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EmoteSubInstance_PlayMontage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmoteSubInstance_PlayMontage.EmoteSubInstance_PlayMontage_C
// 0x0018 (0x0050 - 0x0038)
class UEmoteSubInstance_PlayMontage_C : public UKSEmoteCosmeticSubInstance_Play
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Active_Montage_Instance_ID;                               // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	bool                                               Stop_Emote_If_No_Montage;                                 // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FTimerHandle                                Single_Play_Timer;                                        // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EmoteSubInstance_PlayMontage.EmoteSubInstance_PlayMontage_C");
		return ptr;
	}


	void OnNotifyEnd_501015524C4DCB4E2723BBAF526FE09A(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_501015524C4DCB4E2723BBAF526FE09A(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_501015524C4DCB4E2723BBAF526FE09A(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_501015524C4DCB4E2723BBAF526FE09A(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_501015524C4DCB4E2723BBAF526FE09A(const struct FName& NotifyName, int MontageInstanceID);
	void BlueprintPlayEmote();
	void BlueprintStopped();
	void Do_Stop(EKSRadialMenuItemInterruptReason Interrupt_Reason);
	void BlueprintInterrupt(EKSRadialMenuItemInterruptReason Reason);
	void On_Single_Play_Timer_Elapsed();
	void ExecuteUbergraph_EmoteSubInstance_PlayMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
