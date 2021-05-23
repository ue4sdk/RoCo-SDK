#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosLauncherReticle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ChaosLauncherReticle.ChaosLauncherReticle_C
// 0x0010 (0x0248 - 0x0238)
class UChaosLauncherReticle_C : public UUserWidget
{
public:
	class UImage*                                      Launcher;                                                 // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              LowAmmoThreshold;                                         // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              CriticallyLowAmmoThreshold;                               // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ChaosLauncherReticle.ChaosLauncherReticle_C"));
		return ptr;
	}


	void GetAmmoState(class UKSWeaponComponent* NewParam, EAmmoState* Return_Value);
	void HitConfirm();
	void ForceADS(bool Active);
	void GrenadeCook(bool Active, float TickPeriod);
	void ChangeADS(bool Active);
	void KillConfirm();
	void Headshot();
	void UpdateOffset(float Offset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
