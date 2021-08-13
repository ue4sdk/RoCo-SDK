#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamMod_Master.CamMod_Master_C
// 0x0020 (0x0068 - 0x0048)
class UCamMod_Master_C : public UCameraModifier
{
public:
	bool                                               bIsActive;                                                // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     AddViewLocation;                                          // 0x004C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    AddViewRotation;                                          // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              AddFOV;                                                   // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CamMod_Master.CamMod_Master_C");
		return ptr;
	}


	void OnCamModFinished();
	void PlayTimeline();
	void ShouldModifyCamera(bool* bSuccess);
	void UpdateValues(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV);
	void GetKSCharacterData(bool* Success, class AKSCharacter** KSCharacter, class UKSCharacterMovementComponent** MovementComponent, class AKSCameraManager_C** Camera_Manager);
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
