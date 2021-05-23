#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CosmeticSlotNavTab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C
// 0x0010 (0x0641 - 0x0631)
class UWBP_CosmeticSlotNavTab_C : public UWBP_subscreen_nav_tab_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0638(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	EMercCosmeticSlot                                  CosmeticSlot;                                             // 0x0640(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_WBP_CosmeticSlotNavTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
