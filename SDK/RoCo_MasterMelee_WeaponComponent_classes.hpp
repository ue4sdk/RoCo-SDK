#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterMelee_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C
// 0x0350 (0x1550 - 0x1200)
class UMasterMelee_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	class UAnimMontage*                                ThrowMontage;                                             // 0x1200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       WindupSection;                                            // 0x1208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       ThrowSection;                                             // 0x1210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               WindupSound;                                              // 0x1218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ThrowSound;                                               // 0x1220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                Cached_Player_3P_Fire_Montage;                            // 0x1228(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasBeenThrown;                                           // 0x1230(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1231(0x0007) MISSED OFFSET
	TArray<EKSMovementDirection>                       FireSectionLowerBodyFacings;                              // 0x1238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSVOComponent*                              MainCharacterVOComponent;                                 // 0x1248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSVoicelineEvent                           VOMeleeAttack;                                            // 0x1250(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               IsLungingSFX_C;                                           // 0x1280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1281(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x1284(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1281(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              K2Node_Event_DeltaSeconds;                                // 0x1294(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FFullFireRepData                            K2Node_Event_Data;                                        // 0x1298(0x0068) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_PlayNoChainFireMontage;                      // 0x1300(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1301(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayer_Controller;                   // 0x1308(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x1310(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x1311(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x1312(0x0006) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                     // 0x1318(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x1328(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x1329(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_2;                           // 0x132A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_3;                           // 0x132B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimAimOffset_Priority;                       // 0x132C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority;                         // 0x1330(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1334(0x0004) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x1338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_2;         // 0x1340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x1348(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x6];                                       // 0x1348(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             Temp_delegate_Variable_3;                                 // 0x1358(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x6];                                       // 0x1358(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_3;         // 0x1368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess_4;                           // 0x1370(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FKSActionRestrictor                         K2Node_MakeStruct_KSActionRestrictor;                     // 0x1371(0x0007) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FKSActionRestrictor                         K2Node_MakeStruct_KSActionRestrictor_2;                   // 0x1378(0x0007) (CPF_Transient, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x137F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x1380(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1381(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_4;         // 0x1388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority;                          // 0x1390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1394(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                   // 0x1398(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_IsClosed_Variable_2;                            // 0x13A8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x3];                                       // 0x13A9(0x0003) MISSED OFFSET
	int                                                CallFunc_GetAudioEvent_Priority_2;                        // 0x13AC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_5;         // 0x13B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_3;                        // 0x13B8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x4];                                       // 0x13BC(0x0004) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_6;         // 0x13C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_2;                       // 0x13C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData12[0x4];                                       // 0x13CC(0x0004) MISSED OFFSET
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_3;                                   // 0x13D0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_CustomEvent_IsLunging;                             // 0x13E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x3];                                       // 0x13E1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x13E4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x6];                                       // 0x13E1(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       CallFunc_Get_Character_3p_Fire_Section_3p_Fire_Section;   // 0x13F4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_4;                                 // 0x13FC(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x6];                                       // 0x13FC(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData16[0x4];                                       // 0x140C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_Get_Player_3P_Lunge_Montage_Montage;             // 0x1410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_7;         // 0x1418(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                CallFunc_GetMeleeStillMontage_Montage;                    // 0x1420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UAnimMontage*                                CallFunc_GetMeleeStillMontage_Montage_2;                  // 0x1428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSVOComponent*                              K2Node_DynamicCast_AsMain_Character_VOComponent;          // 0x1430(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_2;                            // 0x1438(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1439(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_8;         // 0x1440(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_4;                        // 0x1448(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x4];                                       // 0x144C(0x0004) MISSED OFFSET
	class UKSWeaponAnimInstance*                       K2Node_DynamicCast_AsMaster_Melee_ABP;                    // 0x1450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_3;                            // 0x1458(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1459(0x0003) MISSED OFFSET
	int                                                CallFunc_GetAudioEvent_Priority_5;                        // 0x145C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_6;                        // 0x1460(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x4];                                       // 0x1464(0x0004) MISSED OFFSET
	struct FFullFireRepData                            K2Node_Event_Fire_Data;                                   // 0x1468(0x0068) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x14D0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData21[0x6];                                       // 0x14D0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UKSWeaponAsset_Melee*                        K2Node_DynamicCast_AsKSWeapon_Asset_Melee;                // 0x14E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess_4;                            // 0x14E8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               Temp_bool_Has_Been_Initd_Variable_2;                      // 0x14E9(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData22[0x6];                                       // 0x14EA(0x0006) MISSED OFFSET
	TArray<class AActor*>                              Temp_object_Variable;                                     // 0x14F0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_5;                                 // 0x1500(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData23[0x6];                                       // 0x1500(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_4;                                   // 0x1510(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_5;                                   // 0x1520(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_6;                                 // 0x1530(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData24[0x6];                                       // 0x1530(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_6;                                   // 0x1540(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MasterMelee_WeaponComponent.MasterMelee_WeaponComponent_C");
		return ptr;
	}


	void TwistHipsOnFire();
	void PlayBulletNearMissSound(const struct FVector& bpp__InxTracexStart__pfTT, const struct FVector& bpp__InxTracexEnd__pfTT, TArray<struct FHitResult>* bpp__Hits__pf);
	void On_Thrown(bool bpp__Thrown__pf);
	void On_Lunge_State_Changed(bool bpp__IsLunging__pf);
	void Lunge_Attack(bool bpp__IsxLunging__pfT, class AKSCharacter* bpp__CharacterxOwner__pfT);
	void Get_Or_Cache_Player_3P_Fire_Montage(class UAnimMontage** bpp__FirexMontage__pfT);
	void GetMeleeStillMontage(class UAnimMontage** bpp__Montage__pf);
	void ExecuteUbergraph_MasterMelee_WeaponComponent_3(int bpp__EntryPoint__pf);
	void CheckForMeleeAim();
	void OnLungeChanged__DelegateSignature(bool bpp__IsLunging__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
