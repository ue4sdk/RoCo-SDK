// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_Language_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// int                            inInt                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int USettingsInfo_Language_C::FixupInvalidInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt");

	struct
	{
		int                            inInt;
		int                            ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            inInt                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USettingsInfo_Language_C::IsValidValueInt(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TextOptionIndex                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FString                 CultureString                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Language_C::GetCultureStringFromTextOptionIndex(int TextOptionIndex, bool* Success, struct FString* CultureString)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex");

	struct
	{
		int                            TextOptionIndex;
		bool                           Success;
		struct FString                 CultureString;
	} params;

	params.TextOptionIndex = TextOptionIndex;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (CultureString != nullptr)
		*CultureString = params.CultureString;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Language                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            TextOptionIndex                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Language_C::GetLanguageTextOptionIndex(const struct FString& Language, int* TextOptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex");

	struct
	{
		struct FString                 Language;
		int                            TextOptionIndex;
	} params;

	params.Language = Language;

	UObject::ProcessEvent(fn, &params);

	if (TextOptionIndex != nullptr)
		*TextOptionIndex = params.TextOptionIndex;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USettingsInfo_Language_C::SetUpLanguageOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            inInt                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USettingsInfo_Language_C::SaveIntValue(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            inInt                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool USettingsInfo_Language_C::ApplyIntValue(int inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue");

	struct
	{
		int                            inInt;
		bool                           ReturnValue;
	} params;

	params.inInt = inInt;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USettingsInfo_Language_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StringValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Language_C::HandleOnDisplayLanguageApplied(const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied");

	struct
	{
		struct FString                 StringValue;
	} params;

	params.StringValue = StringValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 StringValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Language_C::HandleOnDisplayLanguageSaved(const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved");

	struct
	{
		struct FString                 StringValue;
	} params;

	params.StringValue = StringValue;

	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USettingsInfo_Language_C::RevertSettingToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Language_C::ExecuteUbergraph_SettingsInfo_Language(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
