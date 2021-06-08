#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KSCameraManager.KSCameraManager_C
// 0x0170 (0x2940 - 0x27D0)
class AKSCameraManager_C : public AKSPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x27D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     Vault_Medium_Running_Rotation_19357AD44276670DB6B495B6695BBF6C;// 0x27D8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Medium_Running_Location_19357AD44276670DB6B495B6695BBF6C;// 0x27E4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Vault_Medium_Running_FOV_19357AD44276670DB6B495B6695BBF6C;// 0x27F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium_Running__Direction_19357AD44276670DB6B495B6695BBF6C;// 0x27F4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x27F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Medium_Running;                                     // 0x27F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Short_Rotation_F73D9F61446F5474502BD8BF3252D762;    // 0x2800(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Short_Location_F73D9F61446F5474502BD8BF3252D762;    // 0x280C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Vault_Short_FOV_F73D9F61446F5474502BD8BF3252D762;         // 0x2818(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Vault_Short__Direction_F73D9F61446F5474502BD8BF3252D762;  // 0x281C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x281D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Short;                                              // 0x2820(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Medium_Rotation_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x2828(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Medium_Location_973BB77943BEA34D1A27C0A9070CFD1F;   // 0x2834(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Vault_Medium_FOV_973BB77943BEA34D1A27C0A9070CFD1F;        // 0x2840(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Vault_Medium__Direction_973BB77943BEA34D1A27C0A9070CFD1F; // 0x2844(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2845(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Medium;                                             // 0x2848(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Tall_Rotation_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x2850(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Vault_Tall_Location_7F94194A49D4BE17D3B299B0FF993F6D;     // 0x285C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Vault_Tall_FOV_7F94194A49D4BE17D3B299B0FF993F6D;          // 0x2868(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Vault_Tall__Direction_7F94194A49D4BE17D3B299B0FF993F6D;   // 0x286C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x3];                                       // 0x286D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vault_Tall;                                               // 0x2870(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Short_Rotation_CF02379640077BEA8312A4A97CABFFE5;   // 0x2878(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Short_Location_CF02379640077BEA8312A4A97CABFFE5;   // 0x2884(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Mantle_Short_FOV_CF02379640077BEA8312A4A97CABFFE5;        // 0x2890(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Mantle_Short__Direction_CF02379640077BEA8312A4A97CABFFE5; // 0x2894(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2895(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Short;                                             // 0x2898(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Medium_Rotation_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x28A0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Medium_Location_BD9A8E7641CB9B707C1CE6BA8842B569;  // 0x28AC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Mantle_Medium_FOV_BD9A8E7641CB9B707C1CE6BA8842B569;       // 0x28B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Mantle_Medium__Direction_BD9A8E7641CB9B707C1CE6BA8842B569;// 0x28BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData05[0x3];                                       // 0x28BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Medium;                                            // 0x28C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Tall_Rotation_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x28C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Mantle_Tall_Location_745F8D394D1BA4D0F0F12C9F36C8F1F2;    // 0x28D4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Mantle_Tall_FOV_745F8D394D1BA4D0F0F12C9F36C8F1F2;         // 0x28E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    Mantle_Tall__Direction_745F8D394D1BA4D0F0F12C9F36C8F1F2;  // 0x28E4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x3];                                       // 0x28E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Mantle_Tall;                                              // 0x28E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     JumpLanding_Rotation_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x28F0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     JumpLanding_Location_F0A9B6BE484D0B52D2A1D2A14592B75A;    // 0x28FC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpLanding_FOV_F0A9B6BE484D0B52D2A1D2A14592B75A;         // 0x2908(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    JumpLanding__Direction_F0A9B6BE484D0B52D2A1D2A14592B75A;  // 0x290C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData07[0x3];                                       // 0x290D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpLanding;                                              // 0x2910(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     JumpStart_Rotation_626F506A47DB820B20B53DBAEA84159F;      // 0x2918(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     JumpStart_Location_626F506A47DB820B20B53DBAEA84159F;      // 0x2924(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              JumpStart_FOV_626F506A47DB820B20B53DBAEA84159F;           // 0x2930(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    JumpStart__Direction_626F506A47DB820B20B53DBAEA84159F;    // 0x2934(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2935(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpStart;                                                // 0x2938(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KSCameraManager.KSCameraManager_C");
		return ptr;
	}


	void GetMantleHeightFromKSChar(bool* NoMantleCamera);
	void NotifyCamModFinished(class UClass* Modifier_Class);
	void UpdateCamModValues(class UClass* Modifier_Class, const struct FVector& In_Location, const struct FVector& In_Rotation, float In_FOV, bool* Success);
	void JumpStart__FinishedFunc();
	void JumpStart__UpdateFunc();
	void JumpLanding__FinishedFunc();
	void JumpLanding__UpdateFunc();
	void Mantle_Tall__FinishedFunc();
	void Mantle_Tall__UpdateFunc();
	void Mantle_Medium__FinishedFunc();
	void Mantle_Medium__UpdateFunc();
	void Mantle_Short__FinishedFunc();
	void Mantle_Short__UpdateFunc();
	void Vault_Tall__FinishedFunc();
	void Vault_Tall__UpdateFunc();
	void Vault_Medium__FinishedFunc();
	void Vault_Medium__UpdateFunc();
	void Vault_Short__FinishedFunc();
	void Vault_Short__UpdateFunc();
	void Vault_Medium_Running__FinishedFunc();
	void Vault_Medium_Running__UpdateFunc();
	void Play_Jump_Start();
	void PlayJumpLanding();
	void Play_Mantle(int Mantle_Index);
	void ExecuteUbergraph_KSCameraManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
