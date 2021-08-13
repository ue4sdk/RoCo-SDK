#pragma once

// Rogue Company (0.6X) SDK

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
// 0x0018 (0x0518 - 0x0500)
class UWBP_BanShelfEntry_C : public UKSWidget
{
public:
	class UImage*                                      background;                                               // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BottomDecro;                                              // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            WBP_AsyncIcon;                                            // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_BanShelfEntry.WBP_BanShelfEntry_C");
		return ptr;
	}


	void Preset_from_Task(const struct FJobSelectionTask& Incomplete_Task);
	void SetFromTask(const struct FJobSelectionTask& New_Task);
	void SetBanDisplay(bool IsFriendly, TSoftObjectPtr<class UTexture2D> JobPortrait, bool BanSkipped);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
