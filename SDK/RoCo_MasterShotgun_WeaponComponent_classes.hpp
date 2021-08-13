#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterShotgun_WeaponComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MasterShotgun_WeaponComponent.MasterShotgun_WeaponComponent_C
// 0x0100 (0x1310 - 0x1210)
class UMasterShotgun_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1210(0x0008) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable;                            // 0x1218(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x121C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UKSWeaponAsset_Shotgun*                      K2Node_DynamicCast_AsKSWeapon_Asset_Shotgun;              // 0x1220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x1228(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1229(0x0007) MISSED OFFSET
	struct FFullFireRepData                            K2Node_Event_Fire_Data;                                   // 0x1230(0x0068) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	struct FAimData                                    CallFunc_GenerateShotgunSpreadAimDataV2_OutAim;           // 0x1298(0x0050) (CPF_Transient, CPF_DuplicateTransient, CPF_NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Temp_object_Variable;                                     // 0x12E8(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FVector                                     CallFunc_Array_Get_Item;                                  // 0x12F8(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xC];                                       // 0x1304(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass MasterShotgun_WeaponComponent.MasterShotgun_WeaponComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_MasterShotgun_WeaponComponent_1(int bpp__EntryPoint__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
