#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DirectReviveDroneModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C
// 0x006C (0x05C4 - 0x0558)
class UDirectReviveDroneModInst_C : public UKSModInst_ReviveDrone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    OnTargetDeath;                                            // 0x0560(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0560(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnTargetRevive;                                           // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0570(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnDroneDestroy;                                           // 0x0580(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0580(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnReviveBegin;                                            // 0x0590(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0590(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnReviveComplete;                                         // 0x05A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x05A0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptMulticastDelegate                    OnDroneAborted;                                           // 0x05B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x05B0(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                GameDisplayInfoHandle;                                    // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnActivation();
	void OnReviveDroneEvent(EKSReviveDroneEvent KSReviveDroneEvent);
	void PlayAbilityVO();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_DirectReviveDroneModInst(int EntryPoint);
	void OnDroneAborted__DelegateSignature();
	void OnReviveComplete__DelegateSignature();
	void OnReviveBegin__DelegateSignature();
	void OnDroneDestroy__DelegateSignature();
	void OnTargetRevive__DelegateSignature();
	void OnTargetDeath__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
