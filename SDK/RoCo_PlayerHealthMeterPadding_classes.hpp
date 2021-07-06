#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerHealthMeterPadding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerHealthMeterPadding.PlayerHealthMeterPadding_C
// 0x0008 (0x0240 - 0x0238)
class UPlayerHealthMeterPadding_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PaddingContainer;                                         // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass PlayerHealthMeterPadding.PlayerHealthMeterPadding_C");
		return ptr;
	}


	void SetNumSegments(int NumSegments);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
