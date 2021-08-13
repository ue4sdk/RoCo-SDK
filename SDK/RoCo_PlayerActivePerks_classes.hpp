#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerActivePerks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C
// 0x0028 (0x0558 - 0x0530)
class UPlayerActivePerks_C : public UKSViewedPawnWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              PerkSlotWrapper;                                          // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              BoundPlayerState;                                         // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsDirty;                                                  // 0x0548(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class AKSCharacter*                                BoundPawn;                                                // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass PlayerActivePerks.PlayerActivePerks_C");
		return ptr;
	}


	void PostSetPawn();
	void PreClearPawn();
	void HandleModsUpdated(class AKSCharacter* KSCharacter);
	void HandleDownedElim(class AKSPlayerState* KSPlayerState);
	void Bind_Callbacks_to_Player_State(class AKSPlayerState* In_Player_State);
	void Unbind_Callbacks_to_Player_State();
	void Bind_Callbacks_to_Pawn(class AKSCharacter* In_Pawn);
	void Unbind_Callbacks_to_Pawn();
	void PreClearPlayerState();
	void PostSetPlayerState();
	void SetPlayerStateUIRelevanceChanged();
	void Try_To_Show_On_UI_Relevant();
	void ExecuteUbergraph_PlayerActivePerks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
