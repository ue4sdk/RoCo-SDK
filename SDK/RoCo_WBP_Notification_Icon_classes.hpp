#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_Notification_Icon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C
// 0x0010 (0x04B0 - 0x04A0)
class UWBP_Notification_Icon_C : public UPUMG_Widget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_CallToAction_C*                         WBP_CallToAction;                                         // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C"));
		return ptr;
	}


	void Construct();
	void OnShown();
	void OnHide();
	void HandleShown();
	void HandleHide();
	void ExecuteUbergraph_WBP_Notification_Icon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
