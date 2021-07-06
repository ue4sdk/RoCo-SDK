#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainCharacter.MainCharacter_C
// 0x1810 (0x53E0 - 0x3BD0)
class AMainCharacter_C : public AKSCharacter
{
public:
	class UParticleSystemComponent*                    FX_Blinded;                                               // 0x3BD0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCharacterHeatSourceComponent_C*             CharacterHeatSourceComponent;                             // 0x3BD8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterSocketComponent*                 PerformanceAimOrigin;                                     // 0x3BE0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCharacterEmotionComponent_C*                CharacterEmotionComponent;                                // 0x3BE8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USpringArmComponent*                         SkyDiveCameraBoom;                                        // 0x3BF0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UWidgetComponent*                            Nameplate;                                                // 0x3BF8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMainCharacterThreatComponent_C*             MainCharacterThreatComponent;                             // 0x3C00(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSTabletMeshComponent*                      NewTablet;                                                // 0x3C08(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMainEnvironmentTracker_C*                   MainEnvironmentTracker;                                   // 0x3C10(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSAimAssistAnchorComponent*                 BodyAimAssistAnchor;                                      // 0x3C18(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSAimAssistAnchorComponent*                 HeadAimAssistAnchor;                                      // 0x3C20(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    Free_Fall_Particle_Component;                             // 0x3C28(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UCameraComponent*                            SkyDiveCamera;                                            // 0x3C30(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EnterFreeFallFOVTimeline_FOV_214483C64B8EF94ABEE010ACC0C82B47;// 0x3C38(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    EnterFreeFallFOVTimeline__Direction_214483C64B8EF94ABEE010ACC0C82B47;// 0x3C3C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3C3D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnterFreeFallFOVTimeline;                                 // 0x3C40(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              NoseDiveFOVTimeline_FOV_B4B28FE84FD9F70D4702AD94CD02429F; // 0x3C48(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    NoseDiveFOVTimeline__Direction_B4B28FE84FD9F70D4702AD94CD02429F;// 0x3C4C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x3C4D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          NoseDiveFOVTimeline;                                      // 0x3C50(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Offset_2353812C44E84070E58EA28AC0C39A7A;// 0x3C58(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Rotation_2353812C44E84070E58EA28AC0C39A7A;// 0x3C64(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Front__Direction_2353812C44E84070E58EA28AC0C39A7A;// 0x3C70(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x3C71(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Target_Front;                              // 0x3C78(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Offset_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3C80(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Rotation_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3C8C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Back__Direction_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3C98(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x3C99(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Target_Back;                               // 0x3CA0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Offset_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3CA8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Rotation_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3CB4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Front__Direction_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3CC0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x3CC1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Instigator_Front;                          // 0x3CC8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Offset_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x3CD0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Rotation_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x3CDC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Back__Direction_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x3CE8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x3CE9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Instigator_Back;                           // 0x3CF0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CameraDodgeRoll_Relative_Position_4B7EB20A461034BB0B80418AE71BD9F4;// 0x3CF8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CameraDodgeRoll_Camera_Boom_Length_4B7EB20A461034BB0B80418AE71BD9F4;// 0x3D04(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    CameraDodgeRoll__Direction_4B7EB20A461034BB0B80418AE71BD9F4;// 0x3D08(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x7];                                       // 0x3D09(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CameraDodgeRoll;                                          // 0x3D10(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SprintFOVTimeline_FOVAlpha_F9A879E74FD1B4D844684CBEE4230863;// 0x3D18(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    SprintFOVTimeline__Direction_F9A879E74FD1B4D844684CBEE4230863;// 0x3D1C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x3D1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SprintFOVTimeline;                                        // 0x3D20(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              EndImmunity_Invulnerable_4A69979040C00E80AB6D5687355E98EA;// 0x3D28(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    EndImmunity__Direction_4A69979040C00E80AB6D5687355E98EA;  // 0x3D2C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x3D2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EndImmunity;                                              // 0x3D30(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              StartImmunity_Invulnerable_F2F49BA44D30D2903638919AFE6C1704;// 0x3D38(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    StartImmunity__Direction_F2F49BA44D30D2903638919AFE6C1704;// 0x3D3C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x3D3D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StartImmunity;                                            // 0x3D40(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Reverse_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3D48(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Forward_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3D4C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Camera_Boom_Timeline_FOV_Weight_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3D50(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Camera_Boom_Timeline_Camera_Boom_Length_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3D54(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ETimelineDirection>                    Camera_Boom_Timeline__Direction_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3D58(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x7];                                       // 0x3D59(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Camera_Boom_Timeline;                                     // 0x3D60(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Elapsed;                                                  // 0x3D68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               StopwatchOn;                                              // 0x3D6C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x3];                                       // 0x3D6D(0x0003) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x3D70(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x3D7C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Successful_Hit_AkEvent;                                   // 0x3D80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ADS_Test;                                                 // 0x3D88(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x3D89(0x0003) MISSED OFFSET
	float                                              Camera_Boom_Arm_Max;                                      // 0x3D8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Cached_1p_Field_of_View;                                  // 0x3D90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Test_Alpha;                                               // 0x3D94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               InFreeFall;                                               // 0x3D98(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Right;                                               // 0x3D99(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Turn_Left;                                                // 0x3D9A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x1];                                       // 0x3D9B(0x0001) MISSED OFFSET
	float                                              Pitch;                                                    // 0x3D9C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             Friendly_Free_Fall;                                       // 0x3DA0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             Enemy_Free_Fall;                                          // 0x3DA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Yaw;                                                      // 0x3DB0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Main_Camera_Cached_FOV;                                   // 0x3DB4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                HitDirs;                                                  // 0x3DB8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           HitEnum;                                                  // 0x3DBC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x3];                                       // 0x3DBD(0x0003) MISSED OFFSET
	struct FKSSpecialEffect                            DownedPPEffect;                                           // 0x3DC0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	float                                              Downed_PP_Transition_Duration;                            // 0x3E10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               IsTrailActive;                                            // 0x3E14(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x3];                                       // 0x3E15(0x0003) MISSED OFFSET
	class UMaterialInterface*                          FlashBang_PP_Material;                                    // 0x3E18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    FlashBang_PP_Material_Instance;                           // 0x3E20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass*>                              SFX_Grenade_Damage_Type;                                  // 0x3E28(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class UClass*>                              SFX_Blade_Damage_Type;                                    // 0x3E38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      SFX_Damage_Target;                                        // 0x3E48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     LeftTempLoc;                                              // 0x3E50(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              AffectRange;                                              // 0x3E5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RightTempLoc;                                             // 0x3E60(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x4];                                       // 0x3E6C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Out_Of_Bounds_PP_Material;                                // 0x3E70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Out_Of_Bounds_PP_Material_Instance;                       // 0x3E78(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CachedFOV;                                                // 0x3E80(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x4];                                       // 0x3E84(0x0004) MISSED OFFSET
	struct FLastHitImpulse                             LastHitInfo;                                              // 0x3E88(0x0040) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    KnockbackRotation;                                        // 0x3EC8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                // 0x3ED4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsRagdoll;                                               // 0x3ED8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsLaunchedOnDown;                                        // 0x3ED9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSnapshotPoseFacingUp;                                    // 0x3EDA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x5];                                       // 0x3EDB(0x0005) MISSED OFFSET
	class UAnimMontage*                                GetUpMontage;                                             // 0x3EE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsRagdollOnGround;                                       // 0x3EE8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x3];                                       // 0x3EE9(0x0003) MISSED OFFSET
	struct FVector                                     RagdollPelvisLocation;                                    // 0x3EEC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     RagdollCapsuleLocation;                                   // 0x3EF8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              TimeInRagdoll;                                            // 0x3F04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MaxTimeInRagdoll;                                         // 0x3F08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x4];                                       // 0x3F0C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    FireParticle;                                             // 0x3F10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    GrenadeImpactPointMID;                                    // 0x3F18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ZiplineActive1;                                           // 0x3F20(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x3];                                       // 0x3F21(0x0003) MISSED OFFSET
	float                                              SprintFov;                                                // 0x3F24(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SprintFOVChangeDuration;                                  // 0x3F28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ZiplineFov;                                               // 0x3F2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              PreviousFov;                                              // 0x3F30(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x4];                                       // 0x3F34(0x0004) MISSED OFFSET
	struct FDebugFloatHistory                          InterpLengthHist;                                         // 0x3F38(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UKSFXCurveComponent*                         AppliedDownedCurveComponent;                              // 0x3F58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDamageEffect                               Effect;                                                   // 0x3F60(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKSSpecialEffect                            BloodPPEffect;                                            // 0x3FB0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UMaterial*                                   HealthPostProcess;                                        // 0x4000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    Health_PP_MID;                                            // 0x4008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              HealthPPInterpSpeed;                                      // 0x4010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x4];                                       // 0x4014(0x0004) MISSED OFFSET
	struct FKSSpecialEffect                            SonarPPEffect;                                            // 0x4018(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	struct FKSSpecialEffect                            EMPPPEffect;                                              // 0x4068(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableDirectionalDowns;                                  // 0x40B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bEnableComplexDirectionalDowns;                           // 0x40B9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData25[0x2];                                       // 0x40BA(0x0002) MISSED OFFSET
	float                                              FreeFallParticleDetachTime;                               // 0x40BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSSpecialEffect                            OutOfBoundsPPEffect;                                      // 0x40C0(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UKSFXCurveComponent*                         OutOfBoundsEffectCurve;                                   // 0x4110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSSpecialEffect                            ConfirmHitPPEffect;                                       // 0x4118(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	int                                                Active_Index;                                             // 0x4168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData26[0x4];                                       // 0x416C(0x0004) MISSED OFFSET
	struct FKSSpecialEffect                            FirePostProcess;                                          // 0x4170(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	TArray<struct FDamageEffect>                       QueuedDamageEffects;                                      // 0x41C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               InLowTreshold;                                            // 0x41D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData27[0x3];                                       // 0x41D1(0x0003) MISSED OFFSET
	float                                              LowHealthTreshold;                                        // 0x41D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSSpecialEffect                            PP_SkyDive;                                               // 0x41D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               GadgetSwapSound;                                          // 0x4228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               ConfirmHitPPEffectEnabled;                                // 0x4230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData28[0x7];                                       // 0x4231(0x0007) MISSED OFFSET
	struct FKSSpecialEffect                            ConfirmPickupPPEffect;                                    // 0x4238(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	int                                                StopLoopingReviveSFX;                                     // 0x4288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                StopLoopingArmorSFX;                                      // 0x428C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                     // 0x4290(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x42A0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData29[0x6];                                       // 0x42A0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                   // 0x42B0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x42C0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData30[0x6];                                       // 0x42C0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_3;                                   // 0x42D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x42E0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData31[0x6];                                       // 0x42E0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       Temp_name_Variable;                                       // 0x42F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDamageEffect                               K2Node_CustomEvent_Effect_3;                              // 0x42F8(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base;             // 0x4348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_ClassDynamicCast_bSuccess;                         // 0x4350(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData32[0x3];                                       // 0x4351(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x4354(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData33[0x6];                                       // 0x4351(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData34[0x4];                                       // 0x4364(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_4;                                   // 0x4368(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_2;                                     // 0x4378(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_3;                                     // 0x4380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_4;                                     // 0x4388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_Damage;                                      // 0x4390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData35[0x4];                                       // 0x4394(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_Event_DamageTypeClass_2;                           // 0x4398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DamageImpulse;                               // 0x43A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_RelativeImpactLocation;                      // 0x43A4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_BoneName;                                    // 0x43B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_DamageCauser_2;                              // 0x43B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_5;                                     // 0x43C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x43C8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetRagdollFacingDirection_IsUp;                  // 0x43C9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData36[0x2];                                       // 0x43CA(0x0002) MISSED OFFSET
	struct FName                                       Temp_name_Variable_6;                                     // 0x43CC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsGrounded;                            // 0x43D4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData37[0x3];                                       // 0x43D5(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable_7;                                     // 0x43D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  CallFunc_K2_SetWorldLocation_SweepHitResult;              // 0x43E0(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_8;                                     // 0x4468(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_9;                                     // 0x4470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_10;                                    // 0x4478(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_GetPhysicsLinearVelocity_ReturnValue;            // 0x4480(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_5;                                 // 0x448C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData38[0x6];                                       // 0x448C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData39[0x4];                                       // 0x449C(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_5;                                   // 0x44A0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_6;                                 // 0x44B0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData40[0x6];                                       // 0x44B0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_6;                                   // 0x44C0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x44D0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData41[0x6];                                       // 0x44D0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x44E0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData42[0x6];                                       // 0x44E0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             Temp_delegate_Variable_7;                                 // 0x44F0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData43[0x6];                                       // 0x44F0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_7;                                   // 0x4500(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_8;                                 // 0x4510(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData44[0x6];                                       // 0x4510(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x4520(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_ShouldLastHitLaunchIntoRagdoll_bShouldRagdoll;   // 0x4521(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData45[0x6];                                       // 0x4522(0x0006) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_8;                                   // 0x4528(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_9;                                 // 0x4538(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData46[0x6];                                       // 0x4538(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_9;                                   // 0x4548(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_CustomEvent_DeltaSeconds;                          // 0x4558(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x455C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData47[0x3];                                       // 0x455D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable_10;                                // 0x4560(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData48[0x6];                                       // 0x455D(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation;      // 0x4570(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal;        // 0x457C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource;     // 0x4588(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection;          // 0x4594(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData49[0x3];                                       // 0x4595(0x0003) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_10;                                  // 0x4598(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_Event_SequenceName;                                // 0x45A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x45B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData50[0x3];                                       // 0x45B1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Camera_Rotation;                       // 0x45B4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_Uses_Rotation;                         // 0x45C0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData51[0x3];                                       // 0x45C1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Camera_Offset;                         // 0x45C4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X;                                   // 0x45D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y;                                   // 0x45D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z;                                   // 0x45D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X_2;                                 // 0x45DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y_2;                                 // 0x45E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z_2;                                 // 0x45E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_11;                                // 0x45E8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData52[0x6];                                       // 0x45E8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_11;                                  // 0x45F8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  CallFunc_K2_SetRelativeRotation_SweepHitResult;           // 0x4608(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult;           // 0x4690(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_12;                                // 0x4718(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData53[0x6];                                       // 0x4718(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_12;                                  // 0x4728(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class USkinnableSkeletalMeshComponent*             K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component;   // 0x4738(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x4740(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData54[0x7];                                       // 0x4741(0x0007) MISSED OFFSET
	class USkinnableSkeletalMeshComponent*             K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component_2; // 0x4748(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x4750(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bVisible;                                    // 0x4751(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x4752(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData55[0x1];                                       // 0x4753(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x4754(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData56[0x6];                                       // 0x4753(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x4764(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData57[0x3];                                       // 0x4765(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x4768(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData58[0x6];                                       // 0x4765(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FDamageEffect                               K2Node_CustomEvent_Effect_2;                              // 0x4778(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_11;                                    // 0x47C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_2;           // 0x47D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_ClassDynamicCast_bSuccess_2;                       // 0x47D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData59[0x3];                                       // 0x47D9(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable_12;                                    // 0x47DC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData60[0x4];                                       // 0x47E4(0x0004) MISSED OFFSET
	class UKSBloodSplatterComponent*                   K2Node_DynamicCast_AsKSBlood_Splatter_Component;          // 0x47E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x47F0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_3;                      // 0x47F1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_GetLocalSettingAsBool_OutBool;                   // 0x47F2(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData61[0x5];                                       // 0x47F3(0x0005) MISSED OFFSET
	struct FDamageEffect                               K2Node_CustomEvent_Effect;                                // 0x47F8(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_3;           // 0x4848(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_ClassDynamicCast_bSuccess_3;                       // 0x4850(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData62[0x7];                                       // 0x4851(0x0007) MISSED OFFSET
	struct FCombatEventInfo                            K2Node_Event_DamageInfo_2;                                // 0x4858(0x0060) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DamageAmount;                                // 0x48B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData63[0x4];                                       // 0x48BC(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_Event_DamageTypeClass;                             // 0x48C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x48C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_DamageOrigin;                                // 0x48D0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData64[0x4];                                       // 0x48DC(0x0004) MISSED OFFSET
	struct FCombatEventInfo                            K2Node_Event_DamageInfo;                                  // 0x48E0(0x0060) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_13;                                // 0x4940(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData65[0x6];                                       // 0x4940(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_13;                                  // 0x4950(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_14;                                // 0x4960(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData66[0x6];                                       // 0x4960(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UParticleSystem*                             CallFunc_GetHitPawnEffectOverride_ParticleSystem;         // 0x4970(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_14;                                  // 0x4978(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_15;                                // 0x4988(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData67[0x6];                                       // 0x4988(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FDamageEffect                               K2Node_Event_Effect_2;                                    // 0x4998(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FDamageEffect                               K2Node_Event_Effect;                                      // 0x49E8(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation_2;    // 0x4A38(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal_2;      // 0x4A44(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource_2;   // 0x4A50(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection_2;        // 0x4A5C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData68[0x3];                                       // 0x4A5D(0x0003) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base_4;           // 0x4A60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_ClassDynamicCast_bSuccess_4;                       // 0x4A68(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData69[0x7];                                       // 0x4A69(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_15;                                  // 0x4A70(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character_3;                           // 0x4A80(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_16;                                // 0x4A88(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData70[0x6];                                       // 0x4A88(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_IsClosed_Variable_3;                            // 0x4A98(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData71[0x7];                                       // 0x4A99(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_16;                                  // 0x4AA0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_17;                                // 0x4AB0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData72[0x6];                                       // 0x4AB0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_17;                                  // 0x4AC0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_18;                                // 0x4AD0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData73[0x6];                                       // 0x4AD0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_18;                                  // 0x4AE0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_19;                                // 0x4AF0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData74[0x6];                                       // 0x4AF0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_19;                                  // 0x4B00(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_20;                                // 0x4B10(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData75[0x6];                                       // 0x4B10(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_20;                                  // 0x4B20(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_21;                                // 0x4B30(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData76[0x6];                                       // 0x4B30(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_21;                                  // 0x4B40(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_22;                                // 0x4B50(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData77[0x6];                                       // 0x4B50(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class APlayerState*                                K2Node_CustomEvent_Player;                                // 0x4B60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget;                   // 0x4B68(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x4B78(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData78[0x7];                                       // 0x4B79(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_22;                                  // 0x4B80(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_23;                                // 0x4B90(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData79[0x6];                                       // 0x4B90(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget_2;                 // 0x4BA0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_5;                            // 0x4BB0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData80[0x3];                                       // 0x4BB1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_ExtraTime;                                   // 0x4BB4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget_3;                 // 0x4BB8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_6;                            // 0x4BC8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x4BC9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         K2Node_Event_PrevMovementMode;                            // 0x4BCA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         K2Node_Event_NewMovementMode;                             // 0x4BCB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      K2Node_Event_PrevCustomMode;                              // 0x4BCC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      K2Node_Event_NewCustomMode;                               // 0x4BCD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData81[0x2];                                       // 0x4BCE(0x0002) MISSED OFFSET
	class UKSCharacterMovementComponent*               K2Node_DynamicCast_AsKSCharacter_Movement_Component;      // 0x4BD0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_7;                            // 0x4BD8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData82[0x7];                                       // 0x4BD9(0x0007) MISSED OFFSET
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo_2;                           // 0x4BE0(0x0060) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_ExpBonus_2;                            // 0x4C40(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData83[0x4];                                       // 0x4C44(0x0004) MISSED OFFSET
	class AKSPlayerState*                              K2Node_CustomEvent_Revivee;                               // 0x4C48(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSPlayerState*                              K2Node_CustomEvent_Reviver;                               // 0x4C50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_ExpBonus;                              // 0x4C58(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData84[0x4];                                       // 0x4C5C(0x0004) MISSED OFFSET
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State;                      // 0x4C60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_8;                            // 0x4C68(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData85[0x7];                                       // 0x4C69(0x0007) MISSED OFFSET
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_2;                    // 0x4C70(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_9;                            // 0x4C78(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData86[0x7];                                       // 0x4C79(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_23;                                  // 0x4C80(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_24;                                // 0x4C90(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData87[0x6];                                       // 0x4C90(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_24;                                  // 0x4CA0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo;                             // 0x4CB0(0x0060) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_3;                    // 0x4D10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_10;                           // 0x4D18(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData88[0x7];                                       // 0x4D19(0x0007) MISSED OFFSET
	class AKSPlayerState*                              K2Node_DynamicCast_AsKSPlayer_State_4;                    // 0x4D20(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_11;                           // 0x4D28(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;// 0x4D29(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;// 0x4D2A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_Enabled;                                     // 0x4D2B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x4D2C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData89[0x6];                                       // 0x4D2C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_Has_Been_Initd_Variable_4;                      // 0x4D3C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData90[0x3];                                       // 0x4D3D(0x0003) MISSED OFFSET
	class AKSCharacter*                                K2Node_Event_Reviver_3;                                   // 0x4D40(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_ReviveTime;                                  // 0x4D48(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_Remote;                                      // 0x4D4C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData91[0x3];                                       // 0x4D4D(0x0003) MISSED OFFSET
	class AKSCharacter*                                K2Node_Event_Reviver_2;                                   // 0x4D50(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_Event_Reviver;                                     // 0x4D58(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4;// 0x4D60(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData92[0x3];                                       // 0x4D61(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x4D64(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData93[0x6];                                       // 0x4D61(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               K2Node_CustomEvent_IsSprinting;                           // 0x4D74(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsDodgeRolling_2;                      // 0x4D75(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_4;                            // 0x4D76(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData94[0x1];                                       // 0x4D77(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_KeepActionCameraAboveWater_OutBoomPosition;      // 0x4D78(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2;         // 0x4D84(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_25;                                // 0x4E0C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData95[0x6];                                       // 0x4E0C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x4E1C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData96[0x6];                                       // 0x4E1C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              K2Node_Event_DeltaSeconds;                                // 0x4E2C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_25;                                  // 0x4E30(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x4E40(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData97[0x6];                                       // 0x4E40(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x4E50(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData98[0x6];                                       // 0x4E50(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector                                     K2Node_Event_BreakingLocation;                            // 0x4E60(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_BreakingDirection;                           // 0x4E6C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     K2Node_Event_BreakingNormal;                              // 0x4E78(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsPowerSliding;                        // 0x4E84(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData99[0x3];                                       // 0x4E85(0x0003) MISSED OFFSET
	float                                              CallFunc_GetTargetFov_TargetFov;                          // 0x4E88(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsZiplining;                           // 0x4E8C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData100[0x3];                                      // 0x4E8D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x4E90(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData101[0x6];                                      // 0x4E8D(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_11;                  // 0x4EA0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData102[0x6];                                      // 0x4EA0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               K2Node_Event_bEnterNoseDive;                              // 0x4EB0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData103[0x3];                                      // 0x4EB1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_AnimLength;                                  // 0x4EB4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     K2Node_Event_SwingMontageSectionName;                     // 0x4EB8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component;             // 0x4EC8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_12;                           // 0x4ED0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData104[0x3];                                      // 0x4ED1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_12;                  // 0x4ED4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData105[0x6];                                      // 0x4ED1(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_13;                  // 0x4EE4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData106[0x6];                                      // 0x4EE4(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData107[0x4];                                      // 0x4EF4(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_Event_PC_2;                                        // 0x4EF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class APlayerController*                           K2Node_Event_PC;                                          // 0x4F00(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKey                                        K2Node_InputKeyEvent_Key;                                 // 0x4F08(0x0018) (CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_UpdateTargetRotation;                        // 0x4F20(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_AffectCapsule;                               // 0x4F21(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData108[0x2];                                      // 0x4F22(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_DetermineKnockbackFacing_ActorRotation;          // 0x4F24(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             Temp_object_Variable;                                     // 0x4F30(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x4F38(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_5;                      // 0x4F39(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData109[0x2];                                      // 0x4F3A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable_26;                                // 0x4F3C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData110[0x6];                                      // 0x4F3A(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData111[0x4];                                      // 0x4F4C(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_26;                                  // 0x4F50(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FHitResult                                  K2Node_Event_Hit;                                         // 0x4F60(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_27;                                // 0x4FE8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData112[0x6];                                      // 0x4FE8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_27;                                  // 0x4FF8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable;                                       // 0x5008(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData113[0x3];                                      // 0x5009(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_14;                  // 0x500C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData114[0x6];                                      // 0x5009(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EHitEnum                                           Temp_byte_Variable_2;                                     // 0x501C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable_3;                                     // 0x501D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable_4;                                     // 0x501E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               Temp_byte_Variable_5;                                     // 0x501F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           K2Node_Select_Default;                                    // 0x5020(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsDodgeRolling;                        // 0x5021(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData115[0x2];                                      // 0x5022(0x0002) MISSED OFFSET
	struct FVector                                     Temp_struct_Variable_28;                                  // 0x5024(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x5030(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x5031(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData116[0x2];                                      // 0x5032(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_Select_Default_2;                                  // 0x5034(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             K2Node_Select_Default_3;                                  // 0x5040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UParticleSystem*                             K2Node_Select_Default_4;                                  // 0x5048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSCharacter*                                K2Node_CustomEvent_Character_2;                           // 0x5050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_5;                            // 0x5058(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData117[0x7];                                      // 0x5059(0x0007) MISSED OFFSET
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component_2;           // 0x5060(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_13;                           // 0x5068(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData118[0x7];                                      // 0x5069(0x0007) MISSED OFFSET
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component_3;           // 0x5070(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_14;                           // 0x5078(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData119[0x3];                                      // 0x5079(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_15;                  // 0x507C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData120[0x6];                                      // 0x5079(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSettingDelegateStruct                      K2Node_MakeStruct_SettingDelegateStruct;                  // 0x508C(0x0020) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_16;                  // 0x50AC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData121[0x6];                                      // 0x50AC(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             Temp_delegate_Variable_28;                                // 0x50BC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData122[0x6];                                      // 0x50BC(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData123[0x4];                                      // 0x50CC(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_29;                                  // 0x50D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_29;                                // 0x50E0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData124[0x6];                                      // 0x50E0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_30;                                  // 0x50F0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_30;                                // 0x5100(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData125[0x6];                                      // 0x5100(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_31;                                  // 0x5110(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_31;                                // 0x5120(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData126[0x6];                                      // 0x5120(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_32;                                  // 0x5130(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_32;                                // 0x5140(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData127[0x6];                                      // 0x5140(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_33;                                  // 0x5150(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bFullyHealed;                                // 0x5160(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_6;                      // 0x5161(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData128[0x2];                                      // 0x5162(0x0002) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable_33;                                // 0x5164(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData129[0x6];                                      // 0x5162(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData130[0x4];                                      // 0x5174(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_34;                                  // 0x5178(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_34;                                // 0x5188(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData131[0x6];                                      // 0x5188(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_35;                                  // 0x5198(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_35;                                // 0x51A8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData132[0x6];                                      // 0x51A8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_36;                                  // 0x51B8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_36;                                // 0x51C8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData133[0x6];                                      // 0x51C8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               Temp_bool_Has_Been_Initd_Variable_7;                      // 0x51D8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData134[0x7];                                      // 0x51D9(0x0007) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_37;                                  // 0x51E0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_37;                                // 0x51F0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData135[0x6];                                      // 0x51F0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_38;                                  // 0x5200(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component;            // 0x5210(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_15;                           // 0x5218(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData136[0x7];                                      // 0x5219(0x0007) MISSED OFFSET
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_2;          // 0x5220(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_16;                           // 0x5228(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData137[0x3];                                      // 0x5229(0x0003) MISSED OFFSET
	float                                              K2Node_InputAxisKeyEvent_AxisValue_2;                     // 0x522C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_InputAxisKeyEvent_AxisValue;                       // 0x5230(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_17;                  // 0x5234(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData138[0x6];                                      // 0x5234(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EHitEnum                                           Temp_byte_Variable_6;                                     // 0x5244(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_6;                            // 0x5245(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_7;                            // 0x5246(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData139[0x1];                                      // 0x5247(0x0001) MISSED OFFSET
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_3;          // 0x5248(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_17;                           // 0x5250(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData140[0x7];                                      // 0x5251(0x0007) MISSED OFFSET
	class UKSZiplineMeshComponent*                     K2Node_DynamicCast_AsKSZipline_Mesh_Component_4;          // 0x5258(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_18;                           // 0x5260(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData141[0x7];                                      // 0x5261(0x0007) MISSED OFFSET
	class AKSCharacter*                                K2Node_CustomEvent_Character;                             // 0x5268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSItemDrop*                                 K2Node_CustomEvent_ItemDrop;                              // 0x5270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSItem*                                     K2Node_CustomEvent_Item;                                  // 0x5278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable_7;                                     // 0x5280(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable_8;                                     // 0x5281(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData142[0x2];                                      // 0x5282(0x0002) MISSED OFFSET
	float                                              K2Node_Event_InteractTime;                                // 0x5284(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_X_3;                                 // 0x5288(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Y_3;                                 // 0x528C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_BreakVector_Z_3;                                 // 0x5290(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData143[0x4];                                      // 0x5294(0x0004) MISSED OFFSET
	class AKSPlayerController*                         K2Node_DynamicCast_AsKSPlayer_Controller;                 // 0x5298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_19;                           // 0x52A0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData144[0x3];                                      // 0x52A1(0x0003) MISSED OFFSET
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult_3;         // 0x52A4(0x0088) (CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x532C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData145[0x3];                                      // 0x532D(0x0003) MISSED OFFSET
	class AKSPlayerController*                         K2Node_DynamicCast_AsKSPlayer_Controller_2;               // 0x5330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_20;                           // 0x5338(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData146[0x7];                                      // 0x5339(0x0007) MISSED OFFSET
	class AKSPlayerController*                         K2Node_DynamicCast_AsKSPlayer_Controller_3;               // 0x5340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_21;                           // 0x5348(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                           // 0x5349(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           Temp_byte_Variable_9;                                     // 0x534A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_3;                           // 0x534B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x534C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EFlashBangIntensity                                K2Node_Event_Intensity;                                   // 0x534D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_4;                           // 0x534E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_8;                      // 0x534F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UBlendableInterface>        CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;// 0x5350(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	TScriptInterface<class UBlendableInterface>        CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_2;// 0x5360(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
	EKSMovementDirection                               Temp_byte_Variable_10;                                    // 0x5370(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EHitEnum                                           K2Node_Select_Default_5;                                  // 0x5371(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData147[0x6];                                      // 0x5372(0x0006) MISSED OFFSET
	class UAnimMontage*                                Temp_object_Variable_2;                                   // 0x5378(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                Temp_object_Variable_3;                                   // 0x5380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_8;                            // 0x5388(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_5;                                     // 0x5389(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData148[0x6];                                      // 0x538A(0x0006) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_Default_6;                                  // 0x5390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLastHitImpulse                             K2Node_MakeStruct_LastHitImpulse;                         // 0x5398(0x0040) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData149[0x8];                                      // 0x53D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MainCharacter.MainCharacter_C");
		return ptr;
	}


	void Zipline_Pulley_Unhide();
	void Zipline_Pulley_Hide();
	void WasLastHitHeadshot(bool* bpp__bHeadshot__pf);
	void VerifyLastHitDamageType(class UClass* bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf);
	void VerifyLastHitBone(const struct FName& bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf);
	void UserConstructionScript();
	void Update_Flash_Bang_PP();
	void Update_Action_Camera(const struct FVector& bpp__CameraxRotation__pfT, bool bpp__UsesxRotation__pfT, const struct FVector& bpp__CameraxOffset__pfT);
	void UpdateRagdollOnGround(bool bpp__IsGrounded__pf);
	void UpdateRagdollMeshLocation();
	void UpdateRagdoll(float bpp__DeltaSeconds__pf);
	void UpdatePlayerState(class APlayerState* bpp__Player__pf);
	void UpdateHealthPP();
	void UpdateDebugHealthVisibility();
	void UnhideZiplinePulley();
	void UnhideUplineDevice();
	void TurnOffCapsulePhysics_Server();
	void TurnOffCapsulePhysics();
	void Transition_To_Main_Camera();
	void Transition_To_ADS_Camera();
	void SwitchToSnapshotPose();
	void StopReviveSFX();
	void StopLowHealthSFX();
	void Start_Viewed_Down_Hit();
	void StartImmunity__UpdateFunc();
	void StartImmunity__FinishedFunc();
	void StartHacking();
	void SprintFOVTimeline__UpdateFunc();
	void SprintFOVTimeline__FinishedFunc();
	void ShowDebugLocation(bool bpp__bVisible__pf);
	void ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf);
	void SFXStateChangeReset();
	void SFXStateChangeMax();
	void SFXStateChangeHalf();
	void SFXRingHalfSTOP();
	void SFXRingHalfPlay();
	void SFXRingFullSTOP();
	void SFXRingFullPlay();
	void Set_up_ADS_Blur_Dynamic_Material();
	void Set_Health_SFX_RTPC();
	void Setup_Debug_Info_Widget();
	void SetPostProcessHealthValue(float bpp__Health__pf);
	void SetHitTargetArmorLevelRTPC(class AActor* bpp__HitxTarget__pfT, class AActor* bpp__RTPCxActor__pfT);
	void RestoreNormalCamera();
	void ReevaluateDebugWidgetAttachment();
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void ReceiveBeginPlay();
	void Play_Viewed_Sonar_Hit(const struct FDamageEffect& bpp__Effect__pf);
	void Play_Viewed_EMP_Hit(const struct FDamageEffect& bpp__Effect__pf);
	void Play_Viewed_Blood_Hit(const struct FDamageEffect& bpp__Effect__pf);
	void Play_Martial_Artist_Target_Front();
	void Play_Martial_Artist_Target_Back();
	void Play_Martial_Artist_Instigator_Front();
	void Play_Martial_Artist_Instigator_Back();
	void PlayReviveSFX();
	void PlayPickupFX(class AActor* bpp__ItemActor__pf);
	void PlayHitMarkerSFX(const struct FCombatEventInfo& bpp__CombatEventInfo__pf);
	void PlayHitFromRadialDamage(const struct FDamageEffect& bpp__Effect__pf__const);
	void PlayHitFromPointDamage(const struct FDamageEffect& bpp__Effect__pf__const);
	void PlayHitBySFX(const struct FDamageEffect& bpp__DamageEffect__pf);
	void PlayerRevived(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf);
	void PlayerDown(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf);
	void PlayerDeath(const struct FCombatEventInfo& bpp__EventInfo__pf);
	void PlayDownPPOnce();
	void PlayActionCameraSequence(const struct FName& bpp__SequenceName__pf);
	void OnZiplineChangeForFov(bool bpp__IsZiplining__pf);
	void On_Shoulder_Swap_Changed_Event(class AKSCharacter* bpp__Character__pf);
	void On_Anim_Initialized();
	void OnUnhovered(float bpp__ExtraTime__pf);
	void OnStartSkydive();
	void OnSprintChangedCallback(bool bpp__IsSprinting__pf);
	void OnReviveStart(class AKSCharacter* bpp__Reviver__pf, float bpp__ReviveTime__pf, bool bpp__Remote__pf);
	void OnReviveInterrupt(class AKSCharacter* bpp__Reviver__pf);
	void OnReviveComplete(class AKSCharacter* bpp__Reviver__pf);
	void OnPowerSlideChangedCallback(bool bpp__IsPowerSliding__pf);
	void OnLanded(const struct FHitResult& bpp__Hit__pf__const);
	void OnItemPickedUp_Event_1(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf);
	void OnImmuneStart();
	void OnImmuneEnd();
	void OnHovered();
	void OnHealthChanged(class AKSCharacterBase* bpp__Character__pf__const);
	void OnGenderChanged();
	void OnGadgetSwapped();
	void OnFlashEffectStarted();
	void OnFlashEffectEnded();
	void OnFlashBangHit(EFlashBangIntensity bpp__Intensity__pf);
	void OnFieldOfViewModChange();
	void OnEndZiplineRagdoll();
	void OnEndSkydive();
	void OnEndPowerSlide(EKSPowerSlideEndReason bpp__EndReason__pf);
	void OnEndOutOfBounds();
	void OnDodgeRollChangedEvent(bool bpp__IsDodgeRolling__pf);
	void OnBeginZiplineRagdoll();
	void OnBeginPowerSlide();
	void OnBeginOutOfBounds();
	void OnArmorInteractStart(float bpp__InteractTime__pf);
	void OnArmorInteractInterrupt();
	void OnArmorInteractComplete();
	void OnADSBlurSettingChanged();
	void NoseDiveFOVTimeline__UpdateFunc();
	void NoseDiveFOVTimeline__FinishedFunc();
	void NoseDiveCameraTransition(bool bpp__bEnterNoseDive__pf, float bpp__AnimLength__pf);
	void Martial_Artist_Target_Front__UpdateFunc();
	void Martial_Artist_Target_Front__FinishedFunc();
	void Martial_Artist_Target_Back__UpdateFunc();
	void Martial_Artist_Target_Back__FinishedFunc();
	void Martial_Artist_Instigator_Front__UpdateFunc();
	void Martial_Artist_Instigator_Front__FinishedFunc();
	void Martial_Artist_Instigator_Back__UpdateFunc();
	void Martial_Artist_Instigator_Back__FinishedFunc();
	void LandingRollEvent(bool bpp__IsDodgeRolling__pf);
	void KeepActionCameraAboveWater(const struct FVector& bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> bpp__PrevMovementMode__pf, TEnumAsByte<EMovementMode> bpp__NewMovementMode__pf, unsigned char bpp__PrevCustomMode__pf, unsigned char bpp__NewCustomMode__pf);
	void K2_OnEndViewTarget(class APlayerController* bpp__PC__pf);
	void K2_OnBecomeViewTarget(class APlayerController* bpp__PC__pf);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float bpp__AxisValue__pf);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2(float bpp__AxisValue__pf);
	void InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& bpp__Key__pf);
	void InitializeHealthPP();
	void HideZiplinePulley();
	void HideUplineDevice();
	void HealthRegenerationStopped(bool bpp__bFullyHealed__pf);
	void HealthRegenerationStarted();
	void Handle_Downed_Ragdoll();
	void Get_ADS_Camera_By_Tag(const struct FName& bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT);
	void Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT);
	void GetTargetFov(float* bpp__TargetFov__pf);
	void GetTargetArmorLevel(class AActor* bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT);
	void GetRagdollFacingDirection(bool* bpp__IsUp__pf);
	void GetLastHitDistance(float* bpp__OutDistance__pf);
	void GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf);
	void GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf);
	void FreeFall_Camera_Burst();
	void Finish_Action_Camera_Update();
	void FinishHacking();
	void ExitDownedRagdoll();
	void ExecuteUbergraph_MainCharacter_8(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_67(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_60(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_46(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_32(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_134(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_133(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_14(int bpp__EntryPoint__pf);
	void EventSetupCamerasForSpectator(bool bpp__Enabled__pf);
	void EnterFreeFallFOVTimeline__UpdateFunc();
	void EnterFreeFallFOVTimeline__FinishedFunc();
	void EnterDownedRagdoll();
	void End_Down_PP();
	void EndImmunity__UpdateFunc();
	void EndImmunity__FinishedFunc();
	void DoSetOnFire();
	void DoExtinguishFire();
	void DoBindZiplineEvents();
	void DoBindSprintEvents();
	void DoBindDodgeRollEvents();
	void DetermineKnockbackFacing(const struct FVector& bpp__HitDirection__pf, EHitEnum bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf);
	void DetachSkydiveParticle();
	void DestructibleSpeedGateOverlappedEvent(const struct FVector& bpp__BreakingLocation__pf, const struct FVector& bpp__BreakingDirection__pf, const struct FVector& bpp__BreakingNormal__pf);
	void DeathStateChange();
	void Check_Low_Health();
	void CheckFlashBangOnViewTargetChange();
	void Camera_Boom_Timeline__UpdateFunc();
	void Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc();
	void Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc();
	void Camera_Boom_Timeline__FinishedFunc();
	void CameraDodgeRoll__UpdateFunc();
	void CameraDodgeRoll__FinishedFunc();
	void CacheRagdollPelvisLocation();
	void BlueprintOnStopSwimming();
	void BlueprintOnStartSwimming();
	bool BlueprintHandleDeath();
	void BindADSBlurSetting();
	void Audio_Init();
	void ApplyLastHitImpulse(bool bpp__UpdateTargetRotation__pf, bool bpp__AffectCapsule__pf);
	void PlayerReviveDelegate__DelegateSignature(class AKSPlayerState* bpp__Revivee__pf, class AKSPlayerState* bpp__Reviver__pf, int bpp__ExpBonus__pf);
	void PlayerDownInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf, int bpp__ExpBonus__pf);
	void PlayerDeathInfo__DelegateSignature(const struct FCombatEventInfo& bpp__EventInfo__pf);
	void OnSprintChanged__DelegateSignature(bool bpp__IsSprinting__pf);
	void OnShoulderSwapChanged__DelegateSignature(class AKSCharacter* bpp__Character__pf);
	void OnPowerSlideChanged__DelegateSignature(bool bpp__IsPowerSliding__pf);
	void OnPlayerStateChanged__DelegateSignature(class APlayerState* bpp__PlayerState__pf);
	void OnItemPickedUp__DelegateSignature(class AKSCharacter* bpp__Character__pf, class AKSItemDrop* bpp__ItemDrop__pf, class UKSItem* bpp__Item__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf);
	void OnGoDown__DelegateSignature();
	void OnEndZipline__DelegateSignature();
	void OnDodgeRollChanged__DelegateSignature(bool bpp__IsDodgeRolling__pf);
	void OnDeathStateChanged__DelegateSignature();
	void OnBeginZipline__DelegateSignature();
	void OnAnimInitialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
