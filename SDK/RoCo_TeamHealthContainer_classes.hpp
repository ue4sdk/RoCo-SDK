#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TeamHealthContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TeamHealthContainer.TeamHealthContainer_C
// 0x0010 (0x0248 - 0x0238)
class UTeamHealthContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                TeammateHealths;                                          // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass TeamHealthContainer.TeamHealthContainer_C");
		return ptr;
	}


	void Construct();
	void UpdateTeammateHealthBars();
	void HandlePlayerSpawn(class AKSCharacterBase* NewCharacter);
	void HandlePhaseChnage(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void HandleSetupStart();
	void ExecuteUbergraph_TeamHealthContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
