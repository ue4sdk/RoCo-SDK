// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RegionSelectRedirect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RegionSelectRedirect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelectRedirect_C::Handle_Region_Selected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RegionSelectRedirect_C::Handle_Region_Select_Entries_Created()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RegionSelectRedirect_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_RegionSelectRedirect_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RegionSelectRedirect_C::ExecuteUbergraph_WBP_RegionSelectRedirect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect"));

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
