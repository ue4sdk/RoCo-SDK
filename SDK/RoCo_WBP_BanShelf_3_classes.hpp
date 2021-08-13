#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelf_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_BanShelf_3.WBP_BanShelf_2_C
// 0x0020 (0x0558 - 0x0538)
class UWBP_BanShelf_2_C : public UKSJobSelectBanWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              ShelfHolder;                                              // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UWBP_BanShelfEntry_C*>                BanShelfIcons;                                            // 0x0548(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_BanShelf_3.WBP_BanShelf_2_C");
		return ptr;
	}


	void CreateNewIcon(class UWBP_BanShelfEntry_C** New_Icon_Widget);
	void PreAllocateBanSelf();
	void PostSetJobSelector();
	void BansChanged();
	void ExecuteUbergraph_WBP_BanShelf_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
