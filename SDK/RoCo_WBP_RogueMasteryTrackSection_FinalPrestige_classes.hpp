#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryTrackSection_FinalPrestige_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RogueMasteryTrackSection_FinalPrestige.WBP_RogueMasteryTrackSection_FinalPrestige_C
// 0x0008 (0x0240 - 0x0238)
class UWBP_RogueMasteryTrackSection_FinalPrestige_C : public UUserWidget
{
public:
	class UWBP_ChevronProgressBar_C*                   WBP_ChevronProgressBar;                                   // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_RogueMasteryTrackSection_FinalPrestige.WBP_RogueMasteryTrackSection_FinalPrestige_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
