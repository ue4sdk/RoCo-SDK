#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RadialMenuHighlight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C
// 0x0018 (0x0250 - 0x0238)
class UWBP_RadialMenuHighlight_C : public UUserWidget
{
public:
	class UWBP_RadialMenuEntry_Divider_Highlight_C*    DividerLeft;                                              // 0x0238(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_RadialMenuEntry_Divider_Highlight_C*    DividerRight;                                             // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Highlight;                                                // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C");
		return ptr;
	}


	void SetDisabledAppearance(bool IsDisabled);
	class UMaterialInstanceDynamic* GetHighlightMat();
	void SetPosition(float Position);
	void SetWidth(float Width);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
