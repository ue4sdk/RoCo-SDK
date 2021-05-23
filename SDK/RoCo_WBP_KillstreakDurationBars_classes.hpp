#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_KillstreakDurationBars_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C
// 0x0029 (0x0539 - 0x0510)
class UWBP_KillstreakDurationBars_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                DurationBarContainer;                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              KSPlayerState;                                            // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class UWBP_DurationBar_C*>                  DurationBars;                                             // 0x0528(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	bool                                               ModsDirty;                                                // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C"));
		return ptr;
	}


	void OnAimStateChanged(EKSCharacterAimMode AimMode);
	void DestroyUnusedDurationBars(TArray<class UKSPlayerModInstance*>* PlayerMods);
	void GetDurationBarForModInstance(class UKSPlayerModInstance* ModInstance, class UWBP_DurationBar_C** Duration_Bar);
	void PostSetPawn();
	void CloseGate_PawnRetry();
	void HandleModsUpdated(class AKSCharacter* KSCharacterRef);
	void HandlePlayerDownedOrEliminated(class AKSPlayerState* KSPlayerState);
	void PreClearPawn();
	void OnKilled(class AKSCharacterBase* KillerCharacter, class AKSCharacterBase* KilledCharacter);
	void HandleOnViewedPawnChanged(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void HandleProjectileFired(float DurationTime, class UKSWeaponAsset* WeaponAsset);
	void CustomEvent_1(class AActor* DestroyedActor);
	void ResetDurationBars();
	void ExecuteUbergraph_WBP_KillstreakDurationBars(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
