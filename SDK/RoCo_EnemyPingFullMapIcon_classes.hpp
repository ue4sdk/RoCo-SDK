#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EnemyPingFullMapIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass EnemyPingFullMapIcon.EnemyPingFullMapIcon_C
// 0x0048 (0x0360 - 0x0318)
class UEnemyPingFullMapIcon_C : public UKSMapIconWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Ping;                                                     // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      ImageIcon;                                                // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      PingImg;                                                  // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBox_1;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PingExpired;                                              // 0x0340(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0340(0x000F) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EKSPingType                                        Ping_Type;                                                // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FVector                                     ActivePingLoation;                                        // 0x0354(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass EnemyPingFullMapIcon.EnemyPingFullMapIcon_C");
		return ptr;
	}


	struct FVector GetWorldPosition();
	void GetPingType(EKSPingType* NewParam);
	void Construct();
	void Start_Ping();
	void Re_Ping(const struct FKSClientShotInfo& ShotInfo);
	void MapIconReady();
	void MapIconFinished(class UKSMapIconWidgetBase* NewParam);
	void ExecuteUbergraph_EnemyPingFullMapIcon(int EntryPoint);
	void PingExpired__DelegateSignature(unsigned char Icon_Type, int UniqueId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
