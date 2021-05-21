#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RewardsTrackMeter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C
// 0x02C8 (0x07A8 - 0x04E0)
class UWBP_RewardsTrackMeter_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              SegmentContainer;                                         // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USpacer*                                     SpacerL;                                                  // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USpacer*                                     SpacerR;                                                  // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RewardsTrackMeterSegment_C*             WBP_RewardsTrackBarSegment;                               // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RewardsTrackMeterSegment_C*             WBP_RewardsTrackBarSegment_106;                           // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FPlayerProgression                          Progression;                                              // 0x0510(0x0170) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                CurrentTierIndex;                                         // 0x0680(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLevelUpEvent;                                           // 0x0688(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLevelDownEvent;                                         // 0x0698(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FSlateColor                                 BaseColor;                                                // 0x06A8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FSlateColor                                 IncreaseColor;                                            // 0x06D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FSlateColor                                 DecreaseColor;                                            // 0x06F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	class UAkAudioEvent*                               PlayRankProgressionSFX;                                   // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               StopRankProgressionSFX;                                   // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0730(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	float                                              Clamped_Base_Pct;                                         // 0x0758(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Clamped_Delta_Pct;                                        // 0x075C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FSlateColor                                 BonusIncreaseColor;                                       // 0x0760(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnLerpUpdate;                                             // 0x0788(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	float                                              AnimTimeInitial;                                          // 0x0798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	float                                              AnimTimeFinal;                                            // 0x079C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                NumSegments;                                              // 0x07A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	int                                                PageIndex;                                                // 0x07A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C");
		return ptr;
	}


	void Create_Segments();
	void Set_From_Activity_Instance(class UKSActivityInstance* Progression, int Starting_Tier);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_RewardsTrackMeter(int EntryPoint);
	void OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage);
	void OnLevelDownEvent__DelegateSignature(int NewLevel);
	void OnLevelUpEvent__DelegateSignature(int NewLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
