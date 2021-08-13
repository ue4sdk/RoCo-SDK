#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelf_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_BanShelf.WBP_BanShelf_C
// 0x002D (0x052D - 0x0500)
class UWBP_BanShelf_C : public UKSWidget
{
public:
	class UHorizontalBox*                              ShelfHolder;                                              // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_BanShelfEntry_C*>                BanShelfIcons;                                            // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UKSJobItem*>                          BannedItems;                                              // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                ExpectedBanCount;                                         // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ExpectFriendly;                                           // 0x052C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_BanShelf.WBP_BanShelf_C");
		return ptr;
	}


	void NotifyBanShouldHaveBeenReceived();
	void NotifyBanExpected(bool IsFriendly);
	bool IsFriendlyBan(class UKSJobItem* CheckItem);
	void ClearBannedJobs();
	void NotifyBannedJobItem(class UKSJobItem* NewBanItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
