// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoadoutButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadoutButton_C::PopulateLoadoutButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UKSItem>  LoadoutItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_LoadoutButton_C::SetLoadoutItem(TSoftObjectPtr<class UKSItem> LoadoutItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem");

	struct
	{
		TSoftObjectPtr<class UKSItem>  LoadoutItem;
	} params;

	params.LoadoutItem = LoadoutItem;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoadoutButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadoutButton_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButton_C::OnHover(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButton_C::SetIsActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutButton_C::ExecuteUbergraph_WBP_LoadoutButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 LoadoutItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWBP_LoadoutButton_C*    LoadoutButton                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutButton_C::OnClicked__DelegateSignature(class UKSItem* LoadoutItem, class UWBP_LoadoutButton_C* LoadoutButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature");

	struct
	{
		class UKSItem*                 LoadoutItem;
		class UWBP_LoadoutButton_C*    LoadoutButton;
	} params;

	params.LoadoutItem = LoadoutItem;
	params.LoadoutButton = LoadoutButton;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSItem*                 LoadoutItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButton_C::OnHovered__DelegateSignature(class UKSItem* LoadoutItem, bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature");

	struct
	{
		class UKSItem*                 LoadoutItem;
		bool                           IsGamepad;
	} params;

	params.LoadoutItem = LoadoutItem;
	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
