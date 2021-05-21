#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_Language_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C
// 0x0010 (0x0118 - 0x0108)
class USettingsInfo_Language_C : public UKSSettingsInfoBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDataTable*                                  CultureFriendlyNames;                                     // 0x0110(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C");
		return ptr;
	}


	int FixupInvalidInt(int inInt);
	bool IsValidValueInt(int inInt);
	void GetCultureStringFromTextOptionIndex(int TextOptionIndex, bool* Success, struct FString* CultureString);
	void GetLanguageTextOptionIndex(const struct FString& Language, int* TextOptionIndex);
	void SetUpLanguageOptions();
	bool SaveIntValue(int inInt);
	bool ApplyIntValue(int inInt);
	void InitializeValue();
	void HandleOnDisplayLanguageApplied(const struct FString& StringValue);
	void HandleOnDisplayLanguageSaved(const struct FString& StringValue);
	void RevertSettingToDefault();
	void ExecuteUbergraph_SettingsInfo_Language(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
