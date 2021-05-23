#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_VersionNumber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_VersionNumber.WBP_VersionNumber_C
// 0x0010 (0x04F0 - 0x04E0)
class UWBP_VersionNumber_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  VersionDisplay;                                           // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_VersionNumber.WBP_VersionNumber_C"));
		return ptr;
	}


	void Set_Version_Text();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_VersionNumber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
