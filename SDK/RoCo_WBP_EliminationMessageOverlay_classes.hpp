#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_EliminationMessageOverlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C
// 0x0018 (0x0528 - 0x0510)
class UWBP_EliminationMessageOverlay_C : public UKSEliminationMessageWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_KillCardCenter_C*                       WBP_KillCardCenter;                                       // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_KillCardSide_C*                         WBP_KillCardLeft;                                         // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_EliminationMessageOverlay.WBP_EliminationMessageOverlay_C"));
		return ptr;
	}


	void Show_Center_Card(class AKSPlayerState* Victim, bool IsElimination, bool IsAssist);
	void Construct();
	void OnRoundStart(const struct FRoundInitState& RoundInitState);
	void ClearMessages();
	void ShowMessageForAssist(class AKSPlayerState* Victim, bool IsElimination);
	void ShowMessageForTakedown(class AKSPlayerState* Victim, bool IsElimination);
	void ShowMessageForTakenDown(class AKSPlayerState* Instigator, bool IsElimination);
	void ExecuteUbergraph_WBP_EliminationMessageOverlay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
