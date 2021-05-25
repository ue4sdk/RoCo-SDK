#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SystemNotify_NetworkDisconnect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SystemNotify_NetworkDisconnect.WBP_SystemNotify_NetworkDisconnect_C
// 0x0008 (0x0240 - 0x0238)
class UWBP_SystemNotify_NetworkDisconnect_C : public UUserWidget
{
public:
	class UImage*                                      Image_69;                                                 // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SystemNotify_NetworkDisconnect.WBP_SystemNotify_NetworkDisconnect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
