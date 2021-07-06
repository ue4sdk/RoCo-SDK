#pragma once

// Rogue Company (0.60) SDK

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
// 0x0008 (0x0260 - 0x0258)
class UChaosLauncherReticle_C : public UReticleBase_C
{
public:
	class UImage*                                      Launcher;                                                 // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ChaosLauncherReticle.ChaosLauncherReticle_C");
		return ptr;
	}


	void Set_Reticle_Color(const struct FLinearColor& Color);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
