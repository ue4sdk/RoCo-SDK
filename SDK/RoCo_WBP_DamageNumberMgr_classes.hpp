#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_DamageNumberMgr_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C
// 0x0010 (0x05D0 - 0x05C0)
class UWBP_DamageNumberMgr_C : public UKSViewedPawnDamageDisplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                MyCanvasPanel;                                            // 0x05C8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_DamageNumberMgr.WBP_DamageNumberMgr_C");
		return ptr;
	}


	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void Construct();
	void ExecuteUbergraph_WBP_DamageNumberMgr(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
