#pragma once

// Rogue Company (0.59) SDK

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
// 0x002D (0x050D - 0x04E0)
class UWBP_BanShelf_C : public UKSWidget
{
public:
	class UHorizontalBox*                              ShelfHolder;                                              // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_BanShelfEntry_C*>                BanShelfIcons;                                            // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)
	TArray<class UKSJobItem*>                          BannedItems;                                              // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                ExpectedBanCount;                                         // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ExpectFriendly;                                           // 0x050C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_BanShelf.WBP_BanShelf_C"));
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
