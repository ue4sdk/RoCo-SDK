// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_PlayerIDCustomize_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SavePlayerIdentity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::SavePlayerIdentity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SavePlayerIdentity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnPreviousTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::OnPreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnPreviousTab"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnNextTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::OnNextTab()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnNextTab"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SetInfoFieldData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  CosmeticItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EPlayerAccountSlot             ItemSlot                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIDCustomize_C::SetInfoFieldData(class UPlatformInventoryItem* CosmeticItem, EPlayerAccountSlot ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SetInfoFieldData"));

	struct
	{
		class UPlatformInventoryItem*  CosmeticItem;
		EPlayerAccountSlot             ItemSlot;
	} params;

	params.CosmeticItem = CosmeticItem;
	params.ItemSlot = ItemSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PlayerIDCustomize_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIDCustomize_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Update Player Identity
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::Update_Player_Identity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Update Player Identity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnButtonsCreated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::OnButtonsCreated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnButtonsCreated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.UninitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.UninitializeWidget"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnLocalLoadoutUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PlayerIDCustomize_C::OnLocalLoadoutUpdate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnLocalLoadoutUpdate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.ExecuteUbergraph_WBP_PlayerIDCustomize
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PlayerIDCustomize_C::ExecuteUbergraph_WBP_PlayerIDCustomize(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.ExecuteUbergraph_WBP_PlayerIDCustomize"));

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
