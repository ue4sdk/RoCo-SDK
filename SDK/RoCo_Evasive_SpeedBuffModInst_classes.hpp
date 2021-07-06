#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Evasive_SpeedBuffModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C
// 0x0018 (0x01C0 - 0x01A8)
class UEvasive_SpeedBuffModInst_C : public UTemporaryEffectModInst_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              EvasiveSpeedBuffMaxDuration;                              // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x01B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Evasive_SpeedBuffModInst.Evasive_SpeedBuffModInst_C");
		return ptr;
	}


	void GetDuration(float* Duration, float* RemainingTime, bool* UsesDuration);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnModInitialized();
	void OnTimerEnded();
	void ExecuteUbergraph_Evasive_SpeedBuffModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
