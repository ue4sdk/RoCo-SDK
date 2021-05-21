#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerAccolades_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlayerAccolades.WBP_PlayerAccolades_C
// 0x0070 (0x05A0 - 0x0530)
class UWBP_PlayerAccolades_C : public UKSAccoladeQueueWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                AccoladesWrapper;                                         // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AccoladeMedal_C*                        WBP_AccoladeMedal;                                        // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AccoladeMedal_C*                        WBP_AccoladeMedal_1;                                      // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AccoladeMedal_C*                        WBP_AccoladeMedal_2;                                      // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              DelayTimer;                                               // 0x0558(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<class UWBP_AccoladeMedal_C*>                AccoladesArray;                                           // 0x0560(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	float                                              OffsetAmount;                                             // 0x0570(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CurrentPresentationSpeed;                                 // 0x0574(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TargetPresentationSpeed;                                  // 0x0578(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	TArray<class UWBP_AccoladeMedal_C*>                CreatedAccoladeQueue;                                     // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UWBP_AccoladeMedal_C*>                AccoladeWidgetPool;                                       // 0x0590(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_PlayerAccolades.WBP_PlayerAccolades_C");
		return ptr;
	}


	void GetAccolateWidget(const struct FAccoladeDisplayInfo& AccoladeInfo, class UWBP_AccoladeMedal_C** Widget);
	void InitAccoladePool();
	void SetPresentationSpeed();
	void TickPresentationSpeed(float TimeDelta);
	void CalculatePresentationSpeed();
	void MoveAccolades();
	void QueueAccolade();
	void AllowOtherAccolades();
	void RemoveAccolade(class UWidget* Widget);
	void HandleAccoladeRecieved(TArray<struct FAccoladeEventEntry> AccoladeEvents);
	void HandleMultiplier(const struct FAccoladeDisplayInfo& AccoladeDisplayInfo);
	void CreateAccolade(const struct FAccoladeDisplayInfo& AccoladeInfo);
	void Construct();
	void HandleKillCamEnabled(bool IsEnabled);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_PlayerAccolades(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
