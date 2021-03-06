#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlatformIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
// 0x0011 (0x0511 - 0x0500)
class UWBP_PlatformIcon_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Icon;                                                     // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	EKSPlatformType                                    Platform;                                                 // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C");
		return ptr;
	}


	void SetPlatform(EKSPlatformType Platform);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_PlatformIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
