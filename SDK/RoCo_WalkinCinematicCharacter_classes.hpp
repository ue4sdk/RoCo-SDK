#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WalkinCinematicCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C
// 0x0048 (0x3DB8 - 0x3D70)
class AWalkinCinematicCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3D70(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3D78(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x3D80(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	class UKSPersistentPlayerData*                     PersistentPlayerData;                                     // 0x3DB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C");
		return ptr;
	}


	float GetSkeletalPropMontageStartTime();
	void GetJobMasteryLevel(int* JobMasteryLevel);
	void GetJob(class UKSJobItem** JobItem);
	void GetJobName(struct FText* JobName);
	void GetPlayerName(struct FString* PlayerName);
	void SetPersistentPlayerData(class UKSPersistentPlayerData* PersistentPlayerData);
	void InitBodyApperal();
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent);
	void InitializeSkeletalPropAnimation(class UAnimInstance* PropAnimInstance);
	void ExecuteUbergraph_WalkinCinematicCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
