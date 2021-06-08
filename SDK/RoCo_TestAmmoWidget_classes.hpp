#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TestAmmoWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TestAmmoWidget.TestAmmoWidget_C
// 0x0010 (0x0538 - 0x0528)
class UTestAmmoWidget_C : public UKSAmmoWidget
{
public:
	class UTextBlock*                                  CurrentAmmo;                                              // 0x0528(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  ReserveAmmo;                                              // 0x0530(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass TestAmmoWidget.TestAmmoWidget_C");
		return ptr;
	}


	struct FText GetReserveText();
	struct FText GetWeaponName();
	struct FText GetAmmoText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
