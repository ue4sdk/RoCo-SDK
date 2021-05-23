// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_Quality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingsInfo_Quality.SettingsInfo_Quality_C.InitializeValue
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void USettingsInfo_Quality_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SettingsInfo_Quality.SettingsInfo_Quality_C.InitializeValue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SettingsInfo_Quality.SettingsInfo_Quality_C.ExecuteUbergraph_SettingsInfo_Quality
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USettingsInfo_Quality_C::ExecuteUbergraph_SettingsInfo_Quality(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SettingsInfo_Quality.SettingsInfo_Quality_C.ExecuteUbergraph_SettingsInfo_Quality"));

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
