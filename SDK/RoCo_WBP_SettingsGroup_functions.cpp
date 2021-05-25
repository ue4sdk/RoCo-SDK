// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_SettingsGroup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    Settings_Container             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::Add_Sub_Settings_Widget(class UKSSettingsContainer* Settings_Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget");

	struct
	{
		class UKSSettingsContainer*    Settings_Container;
	} params;

	params.Settings_Container = Settings_Container;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    Settings_Container             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::Add_Main_Settings_Widget(class UKSSettingsContainer* Settings_Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget");

	struct
	{
		class UKSSettingsContainer*    Settings_Container;
	} params;

	params.Settings_Container = Settings_Container;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    Settings_Container             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UVerticalBox*            Vertical_Box                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddSettingsWidget(class UKSSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget");

	struct
	{
		class UKSSettingsContainer*    Settings_Container;
		class UVerticalBox*            Vertical_Box;
	} params;

	params.Settings_Container = Settings_Container;
	params.Vertical_Box = Vertical_Box;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UKSSettingsContainer*    SettingsContainer              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget");

	struct
	{
		class UKSSettingsContainer*    SettingsContainer;
	} params;

	params.SettingsContainer = SettingsContainer;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsGroup_C::ExecuteUbergraph_WBP_SettingsGroup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup");

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
