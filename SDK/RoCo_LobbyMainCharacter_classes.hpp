#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LobbyMainCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C
// 0x00A1 (0x3871 - 0x37D0)
class ALobbyMainCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x37D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TEnumAsByte<ETimelineDirection>                    LobbyProp01_Timeline__Direction_311B7F8B46533A11B70CFAA92E9DA987;// 0x37D8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x37D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LobbyProp01_Timeline;                                     // 0x37E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    LobbyWeapon02_Timeline__Direction_6E3E791441C09FAF955C7099C1934001;// 0x37E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x37E9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LobbyWeapon02_Timeline;                                   // 0x37F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    LobbyWeapon01_Timeline__Direction_A9FF0C36405CB79CE4A5609C33E7F935;// 0x37F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x37F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          LobbyWeapon01_Timeline;                                   // 0x3800(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<struct FName>                               LobbyFidgetKeywordArray;                                  // 0x3808(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x8];                                       // 0x3818(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x3820(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	float                                              Lobby_Anim_total_duration;                                // 0x3850(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x3854(0x0004) MISSED OFFSET
	struct FTimerHandle                                Lobby_Anim_timer;                                         // 0x3858(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               Loop_montage;                                             // 0x3860(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x3];                                       // 0x3861(0x0003) MISSED OFFSET
	int                                                NewVar_1;                                                 // 0x3864(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EKSLobbyCharacterAnimationPose                     Lobby_Character_Animation_Pose;                           // 0x3868(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x3];                                       // 0x3869(0x0003) MISSED OFFSET
	float                                              Lobby_Anim_Starting_Time;                                 // 0x386C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               HasInitializedNameplate;                                  // 0x3870(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C"));
		return ptr;
	}


	void OnGenderChanged();
	void InitializeNameplate(class UNewWBP_LobbyNameplate_C* Nameplate);
	void Randomize_Lobby_Idle_anim_start();
	void Make_Lobby_Fidget_Keyword_Array();
	void Parse_Lobby_Fidget_Animation(TArray<struct FName>* LobbyFidgetKeywordArray, EKSLobbyCharacterAnimationPose* Lobby_Character_Animation_Pose);
	void Get_Montage_Position_of_Lobby_Characater(float* Position);
	void Init_Body_Apparel();
	void LobbyWeapon01_Timeline__FinishedFunc();
	void LobbyWeapon01_Timeline__UpdateFunc();
	void LobbyWeapon02_Timeline__FinishedFunc();
	void LobbyWeapon02_Timeline__UpdateFunc();
	void LobbyProp01_Timeline__FinishedFunc();
	void LobbyProp01_Timeline__UpdateFunc();
	void OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(const struct FName& NotifyName, int MontageInstanceID);
	void StopRightPropEffect();
	void PlayRightPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void StopLeftPropEffect();
	void PlayLeftPropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void StopScenePropEffect();
	void PlayScenePropEffect(float Duration, const struct FName& MaterialParameter, class UCurveFloat* FloatCurve);
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component);
	void PlayLobbyCharacterMontage();
	void StopLobbyCharacterMontage();
	void InitializeLobbyCharacterAnimation();
	void UpdateSilhouette(float DeltaSeconds);
	void ExecuteUbergraph_LobbyMainCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
