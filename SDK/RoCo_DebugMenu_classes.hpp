#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DebugMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
// 0x0038 (0x0548 - 0x0510)
class UDebugMenu_C : public UKSDebugMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      BackImage;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UVerticalBox*                                BaseCommandBox;                                           // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UScrollBox*                                  CommandScroll;                                            // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      ConfirmImage;                                             // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<struct FDebugMenuCommandInfo>               CommandStack;                                             // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C");
		return ptr;
	}


	void CloseDebugMenu();
	EConsoleCommandParamType GetParamTypeForSubCommand(const struct FString& BaseCommandString);
	void AddBaseCommandHeader(const struct FString& BaseCommand);
	bool NavigateBack();
	void CommandSelected(const struct FDebugMenuCommandInfo& Command);
	void MakeBoolSubmenu(TArray<struct FDebugMenuCommandInfo>* Array);
	void InternalPopulate(TArray<struct FDebugMenuCommandInfo>* Commands);
	void PopulateList(int Depth);
	void Construct();
	void OnShown();
	void OnHide();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_DebugMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
