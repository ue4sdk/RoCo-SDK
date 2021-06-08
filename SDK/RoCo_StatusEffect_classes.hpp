#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StatusEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C
// 0x0018 (0x0548 - 0x0530)
class UStatusEffect_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  StatusText;                                               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C");
		return ptr;
	}


	void StopHideTimer();
	void StartHideTimer(float Time);
	void Construct();
	void PreClearPawn();
	void PostSetPawn();
	void RevealStatus(bool Revealed, bool Permanent);
	void OnStuck();
	void HideTimeExpired();
	void UpdateRevealStatus(bool IsRevealed);
	void HandleRootChanged(bool Rooted);
	void UpdatePlayerRevealedUI(bool bShow);
	void ExecuteUbergraph_StatusEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
