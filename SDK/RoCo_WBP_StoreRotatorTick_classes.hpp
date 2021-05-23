#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_StoreRotatorTick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_StoreRotatorTick.WBP_StoreRotatorTick_C
// 0x0008 (0x04E8 - 0x04E0)
class UWBP_StoreRotatorTick_C : public UKSWidget
{
public:
	class UBorder*                                     TickMark;                                                 // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_StoreRotatorTick.WBP_StoreRotatorTick_C"));
		return ptr;
	}


	void SetTickActive(bool IsActive);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
