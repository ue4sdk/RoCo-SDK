#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StatusEffectPermant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C
// 0x0011 (0x0541 - 0x0530)
class UStatusEffectPermant_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  StatusText;                                               // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	bool                                               IsSpectating;                                             // 0x0540(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C");
		return ptr;
	}


	void PostSetPawn();
	void Construct();
	void PreClearPawn();
	void CustomEvent_2(bool IsSpectating);
	void CustomEvent_1(class AKSPlayerController* Controller, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void ExecuteUbergraph_StatusEffectPermant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
