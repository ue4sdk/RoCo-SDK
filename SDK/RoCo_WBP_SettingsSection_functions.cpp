// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsSection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        Settings_Group_Widget          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSection_C::Add_Settings_Group_Widget(class UKSSettingsGroup* Settings_Group_Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget"));

	struct
	{
		class UKSSettingsGroup*        Settings_Group_Widget;
	} params;

	params.Settings_Group_Widget = Settings_Group_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsSection_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSection_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsGroup*        SettingsGroup                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSection_C::AddSettingsGroupWidget(class UKSSettingsGroup* SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget"));

	struct
	{
		class UKSSettingsGroup*        SettingsGroup;
	} params;

	params.SettingsGroup = SettingsGroup;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWBP_SettingsSection_C::OnSectionConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsSection_C::ExecuteUbergraph_WBP_SettingsSection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection"));

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
