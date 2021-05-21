#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialMenuEntry_Divider_Highlight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C
// 0x0010 (0x0248 - 0x0238)
class UWBP_RadialMenuEntry_Divider_Highlight_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWBP_AsyncIcon_C*                            WBP_AsyncIcon;                                            // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RadialMenuEntry_Divider_Highlight.WBP_RadialMenuEntry_Divider_Highlight_C");
		return ptr;
	}


	void SetDisabledAppearance(bool IsDisabled);
	void OnInitialized();
	void ExecuteUbergraph_WBP_RadialMenuEntry_Divider_Highlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
