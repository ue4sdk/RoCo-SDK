#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ModsWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ModsWidget.ModsWidget_C
// 0x0008 (0x0550 - 0x0548)
class UModsWidget_C : public UKSViewedPawnModsWidget
{
public:
	class UOverlay*                                    Overlay;                                                  // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ModsWidget.ModsWidget_C");
		return ptr;
	}


	class UOverlay* GetOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
