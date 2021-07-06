#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Master_GrenadeComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C
// 0x0240 (0x1440 - 0x1200)
class UMaster_GrenadeComponent_C : public UMaster_WeaponComponent_C
{
public:
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable;                                     // 0x1200(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Variable;                                        // 0x1210(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable;                                       // 0x1214(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_5;                          // 0x121C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_5;                   // 0x1224(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1228(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x1228(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_4;                          // 0x1238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_4;                   // 0x1240(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_2;                   // 0x1244(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x1244(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_3;                          // 0x1254(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_3;                   // 0x125C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_3;                   // 0x1260(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1260(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName_2;                          // 0x1270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_2;                   // 0x1278(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_4;                   // 0x127C(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x6];                                       // 0x127C(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       K2Node_CustomEvent_NotifyName;                            // 0x128C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID;                     // 0x1294(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_5;                   // 0x1298(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x1298(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Temp_int_Variable_2;                                      // 0x12A8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Temp_name_Variable_2;                                     // 0x12AC(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_6;                          // 0x12B4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_6;                   // 0x12BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_6;                   // 0x12C0(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x6];                                       // 0x12C0(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EWeaponStateNew                                    K2Node_Event_OldState;                                    // 0x12D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EWeaponStateNew                                    K2Node_Event_NewState;                                    // 0x12D1(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x2];                                       // 0x12D2(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_NotifyName_7;                          // 0x12D4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_7;                   // 0x12DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x12E0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x12E1(0x0003) MISSED OFFSET
	int                                                CallFunc_GetAnimMontage_Priority;                         // 0x12E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority;                          // 0x12E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_2;                       // 0x12EC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAudioEvent_Priority_2;                        // 0x12F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x4];                                       // 0x12F4(0x0004) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst;           // 0x12F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_3;                       // 0x1300(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_4;                       // 0x1304(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_2;         // 0x1308(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_7;                   // 0x1310(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x6];                                       // 0x1310(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_3;         // 0x1320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_8;                          // 0x1328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_8;                   // 0x1330(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x1334(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_4;         // 0x1338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_8;                   // 0x1340(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData10[0x6];                                       // 0x1340(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_5;         // 0x1350(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_GetAnimMontage_Priority_5;                       // 0x1358(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              CallFunc_Get_Scaled_Grenade_Fire_Playrate_Scaled_Playrate;// 0x135C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_6;         // 0x1360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_9;                          // 0x1368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_9;                   // 0x1370(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_9;                   // 0x1374(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x6];                                       // 0x1374(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData12[0x4];                                       // 0x1384(0x0004) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_7;         // 0x1388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_8;         // 0x1390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       K2Node_CustomEvent_NotifyName_10;                         // 0x1398(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                K2Node_CustomEvent_MontageInstanceID_10;                  // 0x13A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData13[0x4];                                       // 0x13A4(0x0004) MISSED OFFSET
	class UMaster_WeaponComponent_C*                   K2Node_DynamicCast_AsMaster_Weapon_Component;             // 0x13A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x13B0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData14[0x3];                                       // 0x13B1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate_10;                  // 0x13B4(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData15[0x6];                                       // 0x13B1(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID;// 0x13C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;     // 0x13C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_6;                           // 0x13D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData16[0x3];                                       // 0x13D1(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable_3;                                     // 0x13D4(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CallFunc_CreateProxyObjectForPlayMontage_CreatedInstanceID_2;// 0x13DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UPlayMontageCallbackProxy*                   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;   // 0x13E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               CallFunc_IsValid_ReturnValue_7;                           // 0x13E8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData17[0x7];                                       // 0x13E9(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_9;         // 0x13F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x13F8(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData18[0x6];                                       // 0x13F8(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TEnumAsByte<EEndPlayReason>                        K2Node_Event_EndPlayReason;                               // 0x1408(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData19[0x7];                                       // 0x1409(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        CallFunc_Get_Character_Anim_Instance_Anim_Inst_10;        // 0x1410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               Temp_struct_Variable_2;                                   // 0x1418(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Temp_delegate_Variable_2;                                 // 0x1428(0x000A) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData20[0x6];                                       // 0x1428(0x0006) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData21[0x8];                                       // 0x1438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass Master_GrenadeComponent.Master_GrenadeComponent_C");
		return ptr;
	}


	void ShowGadget();
	void OnNotifyEnd_63026DE74D406890D3DC9AB4BD73B3F0(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyEnd_35D524A74DCB62DBACF83F99AEF334F1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_63026DE74D406890D3DC9AB4BD73B3F0(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnNotifyBegin_35D524A74DCB62DBACF83F99AEF334F1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_63026DE74D406890D3DC9AB4BD73B3F0(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnInterrupted_35D524A74DCB62DBACF83F99AEF334F1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_63026DE74D406890D3DC9AB4BD73B3F0(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnCompleted_35D524A74DCB62DBACF83F99AEF334F1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_63026DE74D406890D3DC9AB4BD73B3F0(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void OnBlendOut_35D524A74DCB62DBACF83F99AEF334F1(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
	void HideGadget();
	void Get_Scaled_Grenade_Fire_Playrate(class UAnimMontage* bpp__AnimxMontage__pfT, float* bpp__ScaledxPlayrate__pfT);
	void ExecuteUbergraph_Master_GrenadeComponent_1(int bpp__EntryPoint__pf);
	void OnMontagePlayDelegate__DelegateSignature(const struct FName& bpp__NotifyName__pf, int bpp__MontageInstanceID__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
