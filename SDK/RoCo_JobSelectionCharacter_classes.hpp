#pragma once

// Rogue Company (0.60) SDK

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
// 0x0048 (0x3828 - 0x37E0)
class AJobSelectionCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x37E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x37E8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x37F0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FName                                       CurrentPhaseName;                                         // 0x3820(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass JobSelectionCharacter.JobSelectionCharacter_C");
		return ptr;
	}


	void Init_Body_Apperal();
	void HandleAnimInitialized();
	void OnPhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName);
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component);
	void InitRogueSelectAnimInst(const struct FName& InitialPhaseName);
	void ExecuteUbergraph_JobSelectionCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
