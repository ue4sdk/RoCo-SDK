#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_InGameJobSeledt_ChoiceGrid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InGameJobSeledt_ChoiceGrid.WBP_InGameJobSeledt_ChoiceGrid_C
// 0x0010 (0x05A8 - 0x0598)
class UWBP_InGameJobSeledt_ChoiceGrid_C : public UKSJobSelectChoiceGridWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGridPanel*                                  MainGrid;                                                 // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_InGameJobSeledt_ChoiceGrid.WBP_InGameJobSeledt_ChoiceGrid_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_InGameJobSeledt_ChoiceGrid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
