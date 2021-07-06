#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterWeapon_ABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C
// 0x32E0 (0x36C0 - 0x03E0)
class UMasterWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03E0(0x0038) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                              // 0x0418(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                    // 0x0530(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                     // 0x0560(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                         // 0x05B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x05F0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5;                             // 0x0628(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7;                          // 0x0650(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                          // 0x07B0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_6;                          // 0x0860(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                             // 0x09C0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_5;                          // 0x09E8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                              // 0x0B48(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                             // 0x0B88(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_4;                          // 0x0BB0(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                              // 0x0D10(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                             // 0x0D50(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                           // 0x0E10(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                              // 0x0ED8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                              // 0x0FF0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                              // 0x1108(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                              // 0x1220(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                              // 0x1338(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                          // 0x1450(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                    // 0x1500(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                           // 0x1530(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                    // 0x15F8(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                           // 0x1628(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                    // 0x1660(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                           // 0x1690(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_3;                          // 0x16C8(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                             // 0x1828(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_2;                          // 0x1850(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x19B0(0x0040) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x19F0(0x00C0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                          // 0x1AB0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                              // 0x1B60(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                              // 0x1C78(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                               // 0x1D90(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                           // 0x1EA8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x1EE0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                          // 0x1F10(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x1FC0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                            // 0x1FF0(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                               // 0x2028(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned;                            // 0x2140(0x0160) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                           // 0x22A0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                            // 0x2368(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x23A0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                            // 0x2450(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive;                     // 0x2488(0x00E0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                               // 0x2568(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                               // 0x2590(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x26A8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x27C0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x28D8(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x29F0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x2AA0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x2AD0(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                           // 0x2B00(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                            // 0x2BC8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x2C00(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                            // 0x2C30(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x2C68(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x2D80(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                           // 0x2DB0(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                            // 0x2E78(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x2EB0(0x00B0) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                       // 0x2F60(0x0058) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                           // 0x2FB8(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                            // 0x3080(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                            // 0x30B8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x30F0(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x3208(0x0118) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x3320(0x00C8) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x33E8(0x0038) (CPF_NativeAccessSpecifierPublic)
	struct FKSAnimNode_Mirror                          KSAnimGraphNode_Mirror;                                   // 0x3420(0x0120) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x3540(0x0030) (CPF_NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x3570(0x0030) (CPF_NativeAccessSpecifierPublic)
	float                                              HideMagazineAlpha;                                        // 0x35A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x35A4(0x0004) MISSED OFFSET
	class UAnimSequence*                               Weapon_ABP_Idle;                                          // 0x35A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimSequence*                               Weapon_ABP_Holster;                                       // 0x35B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Shell_Housing_Spin;                                       // 0x35B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	int                                                Missing_Shell_Count;                                      // 0x35C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Shell_Loading;                                            // 0x35C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x35C9(0x0003) MISSED OFFSET
	struct FRotator                                    Target_Shell_Housing_Spin;                                // 0x35CC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               ShellE_Hidden;                                            // 0x35D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x35D9(0x0003) MISSED OFFSET
	int                                                Revolver_Index;                                           // 0x35DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Turn_Directional_Amount;                                  // 0x35E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Scope_Scale_Alpha;                                        // 0x35E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_Revolver;                                              // 0x35E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_Multi_Stage_Reload;                                    // 0x35E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x35EA(0x0002) MISSED OFFSET
	float                                              Multi_Stage_Reload_Alpha;                                 // 0x35EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_Holstered;                                             // 0x35F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x35F1(0x0003) MISSED OFFSET
	struct FRotator                                    Revolver_Chamber;                                         // 0x35F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Prevent_Scope_Scaling_Override;                           // 0x3600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x3601(0x0003) MISSED OFFSET
	float                                              Alt_Scope_Scale_Alpha;                                    // 0x3604(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaA;                                       // 0x3608(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaB;                                       // 0x360C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaC;                                       // 0x3610(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaD;                                       // 0x3614(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaE;                                       // 0x3618(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              UnspentShellAlphaF;                                       // 0x361C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaA;                                         // 0x3620(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaB;                                         // 0x3624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaC;                                         // 0x3628(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaD;                                         // 0x362C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaE;                                         // 0x3630(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              SpentShellAlphaF;                                         // 0x3634(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Is_in_Lobby_Viewer_;                                      // 0x3638(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x3639(0x0003) MISSED OFFSET
	float                                              Is_Stock_Folded;                                          // 0x363C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Stock_Rotation_Target;                                    // 0x3640(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    Stock_Alt_Rotation_Target;                                // 0x364C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     ADS_ScopeLocationModifier;                                // 0x3658(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseAdditive;                                              // 0x3664(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable;                                       // 0x3665(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_2;                                     // 0x3666(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_3;                                     // 0x3667(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_4;                                     // 0x3668(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_5;                                     // 0x3669(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_6;                                     // 0x366A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_7;                                     // 0x366B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_8;                                     // 0x366C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x3];                                       // 0x366D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_NewAlpha_2;                                  // 0x3670(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsRevolver;                                 // 0x3674(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsMultiStageReload;                         // 0x3675(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_NewWeaponState;                              // 0x3676(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bIsStockFolded;                              // 0x3677(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_Event_StockRotationTarget;                         // 0x3678(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_Event_StockAltRotationTarget;                      // 0x3684(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bUseAdditive;                                // 0x3690(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x3];                                       // 0x3691(0x0003) MISSED OFFSET
	float                                              K2Node_Event_HideMagazineAlpha;                           // 0x3694(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_bSetIsShieldActive;                          // 0x3698(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x3699(0x0003) MISSED OFFSET
	float                                              K2Node_Event_NewAlpha;                                    // 0x369C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FRotator                                    K2Node_Event_NewRevolverChamberRot;                       // 0x36A0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x4];                                       // 0x36AC(0x0004) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_Event_OwningWeaponComponent;                       // 0x36B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x36B8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x36B9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x36BA(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_9;                                     // 0x36BB(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    Temp_byte_Variable;                                       // 0x36BC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_10;                                    // 0x36BD(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Variable_11;                                    // 0x36BE(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Select_Default;                                    // 0x36BF(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MasterWeapon_ABP.MasterWeapon_ABP_C");
		return ptr;
	}


	void UpdateUnspentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT);
	void UpdateSpentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT);
	void Set_Multi_Stage_Reload(bool bpp__NewxIsxMultixStagexReload__pfTTTT);
	void SetWeaponState(class UKSWeaponComponent* bpp__OwningWeaponComponent__pf, EWeaponStateNew bpp__OldState__pf, EWeaponStateNew bpp__NewState__pf);
	void SetShieldActive(bool bpp__bSetIsShieldActive__pf);
	void SetScopeScaleAlpha(float bpp__NewAlpha__pf);
	void SetRevolverChamberRotatae(const struct FRotator& bpp__NewRevolverChamberRot__pf);
	void InitSetWeaponState(EWeaponStateNew bpp__NewWeaponState__pf);
	void InitSetUseWeaponAdditive(bool bpp__bUseAdditive__pf);
	void InitSetScopeMeshScale(float bpp__NewAlpha__pf, bool bpp__bIsRevolver__pf, bool bpp__bIsMultiStageReload__pf);
	void InitSetHideMagazine(float bpp__HideMagazineAlpha__pf);
	void InitSetFoldingStock(bool bpp__bIsStockFolded__pf, const struct FRotator& bpp__StockRotationTarget__pf, const struct FRotator& bpp__StockAltRotationTarget__pf);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674();
	void AnimNotify_Unhide_Mag();
	void AnimNotify_Hide_Mag();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
