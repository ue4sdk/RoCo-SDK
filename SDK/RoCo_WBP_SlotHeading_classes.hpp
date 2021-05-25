#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SlotHeading_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C
// 0x0030 (0x0268 - 0x0238)
class UWBP_SlotHeading_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  Heading;                                                  // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      UnderlineBorder;                                          // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FText                                       HeadingText;                                              // 0x0250(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C");
		return ptr;
	}


	void SetText(const struct FText& newText);
	void SetUnderlineColor(const struct FLinearColor& NewColor);
	void SetTextColor(const struct FSlateColor& NewColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetSlotHeading(const struct FText& Text);
	void ExecuteUbergraph_WBP_SlotHeading(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
