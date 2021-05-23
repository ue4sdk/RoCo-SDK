#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelfEntry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_BanShelfEntry.WBP_BanShelfEntry_C
// 0x0018 (0x04F8 - 0x04E0)
class UWBP_BanShelfEntry_C : public UKSWidget
{
public:
	class UImage*                                      background;                                               // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BottomDecro;                                              // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            WBP_AsyncIcon;                                            // 0x04F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_BanShelfEntry.WBP_BanShelfEntry_C"));
		return ptr;
	}


	void SetBanDisplay(bool IsFriendly, TSoftObjectPtr<class UTexture2D> JobPortrait, bool BanSkipped);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
