#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_OrdinalNumberText_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C
// 0x001C (0x0254 - 0x0238)
class UWBP_OrdinalNumberText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  MainText;                                                 // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  SuperscriptText;                                          // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                Number;                                                   // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C"));
		return ptr;
	}


	void Get_Language_Specific_Superscript_Text(const struct FString& Language_Code, struct FText* Return_Value);
	void Get_Language_Specific_Main_Text(const struct FString& Language_Code, struct FText* Return_Value);
	void PreConstruct(bool IsDesignTime);
	void Set_Font(const struct FSlateFontInfo& InFontInfo);
	void Set_Value(int Number);
	void ExecuteUbergraph_WBP_OrdinalNumberText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
