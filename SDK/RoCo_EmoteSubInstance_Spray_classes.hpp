#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EmoteSubInstance_Spray_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EmoteSubInstance_Spray.EmoteSubInstance_Spray_C
// 0x0048 (0x0090 - 0x0048)
class UEmoteSubInstance_Spray_C : public UKSEmoteCosmeticSubInstance_Spray
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMaterialInstanceDynamic*                    SprayMaterial;                                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	class UTexture*                                    ActiveSprayTexture;                                       // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	float                                              Spray_Life_Span;                                          // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UPoolableDecalComponent*                     ActiveDecalComponent;                                     // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash)
	struct FVector                                     Particle_Scale;                                           // 0x0070(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Decal_Scale;                                              // 0x007C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spray_Spawn_Delay;                                        // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Spray_Fade_Duration;                                      // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EmoteSubInstance_Spray.EmoteSubInstance_Spray_C");
		return ptr;
	}


	void Set_Stat_Tracking_Info(int StatTrackingNumber);
	void Clear_Active_Decal_Component();
	void Set_Active_Decal_Component(class UPoolableDecalComponent* Decal_Component);
	void BlueprintOnRegister();
	void BlueprintPlaySpray(const struct FVector& SprayLocation, const struct FRotator& SprayRotation, class UPrimitiveComponent* SprayTarget);
	void Update_Spray_Texture();
	void On_Decal_Expired(class UPoolableDecalComponent* Expired_Component);
	void BlueprintUpdateStatTrackingNumber(int NewStatTrackingNumber);
	void ExecuteUbergraph_EmoteSubInstance_Spray(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
