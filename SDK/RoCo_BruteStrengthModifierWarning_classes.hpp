#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BruteStrengthModifierWarning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C
// 0x0010 (0x0510 - 0x0500)
class UBruteStrengthModifierWarning_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      PerkIcon;                                                 // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD* HUD);
	void OnHide();
	void OnFade();
	void ExecuteUbergraph_BruteStrengthModifierWarning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
