// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_CosmeticItem_Border_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.NavigateConfirm
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_CosmeticItem_Border_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.NavigateConfirm"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderItemSlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::SetBorderItemSlot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderItemSlot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnHoverSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::OnHoverSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnHoverSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnClickSound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::OnClickSound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnClickSound"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CosmeticItem_Border_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.PopulateSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::PopulateSlot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.PopulateSlot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CosmeticItem_Border_C::OnBorderHover(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderHover"));

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderUnhover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::OnBorderUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::OnBorderClick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderClick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadHover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadHover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadUnhover
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadUnhover"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_CosmeticItem_Border_C::SetBorderActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderActive"));

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.ExecuteUbergraph_WBP_CosmeticItem_Border
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CosmeticItem_Border_C::ExecuteUbergraph_WBP_CosmeticItem_Border(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.ExecuteUbergraph_WBP_CosmeticItem_Border"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CosmeticItem_Border_C::OnItemClicked__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemClicked__DelegateSignature"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
		class UWidget*                 Widget;
	} params;

	params.PlatformItem = PlatformItem;
	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_CosmeticItem_Border_C::OnItemUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemUnhovered__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*  PlatformItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_CosmeticItem_Border_C::OnItemHovered__DelegateSignature(class UPlatformInventoryItem* PlatformItem)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemHovered__DelegateSignature"));

	struct
	{
		class UPlatformInventoryItem*  PlatformItem;
	} params;

	params.PlatformItem = PlatformItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
