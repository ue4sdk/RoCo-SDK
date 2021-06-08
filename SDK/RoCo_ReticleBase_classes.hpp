#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ReticleBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C
// 0x0020 (0x0258 - 0x0238)
class UReticleBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      LoneDot;                                                  // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              LowAmmoThreshold;                                         // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CriticallyLowAmmoThreshold;                               // 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UKSSettingsColorOptionsAsset*                SettingsColorOptionAsset;                                 // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C");
		return ptr;
	}


	void Set_Reticle_Color(const struct FLinearColor& Color);
	void On_Reticle_Color_Changed();
	void Set_Reticle_Width(int Width);
	void Set_Reticle_Height(int Height);
	void On_Reticle_Width_Changed();
	void On_Reticle_Height_Changed();
	void On_Reticle_Dimension_Changed();
	void ChangeReticleSize();
	void GetAmmoState(class UKSWeaponComponent* NewParam, EAmmoState* Return_Value);
	void HitConfirm();
	void ForceADS(bool Active);
	void GrenadeCook(bool Active, float TickPeriod);
	void ChangeADS(bool Active);
	void KillConfirm();
	void Headshot();
	void UpdateOffset(float Offset);
	void OnInitialized();
	void ExecuteUbergraph_ReticleBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
