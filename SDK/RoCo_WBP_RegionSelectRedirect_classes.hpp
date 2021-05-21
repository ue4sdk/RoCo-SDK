#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RegionSelectRedirect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// 0x0018 (0x04F8 - 0x04E0)
class UWBP_RegionSelectRedirect_C : public UKSRegionSelectModal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_RegionSelect_C*                         WBP_RegionSelect;                                         // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowSFX;                                                  // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C");
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD* HUD);
	void Handle_Region_Selected();
	void Handle_Region_Select_Entries_Created();
	void InitializeWidgetNavigation();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelectRedirect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
