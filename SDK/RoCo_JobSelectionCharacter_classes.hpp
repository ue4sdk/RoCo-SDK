#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelectionCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JobSelectionCharacter.JobSelectionCharacter_C
// 0x0048 (0x3D68 - 0x3D20)
class AJobSelectionCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3D20(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3D28(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x3D30(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FName                                       CurrentPhaseName;                                         // 0x3D60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass JobSelectionCharacter.JobSelectionCharacter_C");
		return ptr;
	}


	void Init_Body_Apperal();
	void HandleAnimInitialized();
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component);
	void InitRogueSelectAnimInst(const struct FName& InitialPhaseName);
	void OnPhaseChanged(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void ExecuteUbergraph_JobSelectionCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
