// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LoadoutButtonPerks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PopulateLoadoutButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadoutButtonPerks_C::PopulateLoadoutButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PopulateLoadoutButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetLoadoutPerks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UKSItem>> LoadoutItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UWBP_LoadoutButtonPerks_C::SetLoadoutPerks(TArray<TSoftObjectPtr<class UKSItem>>* LoadoutItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetLoadoutPerks");

	struct
	{
		TArray<TSoftObjectPtr<class UKSItem>> LoadoutItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LoadoutItem != nullptr)
		*LoadoutItem = params.LoadoutItem;
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButtonPerks_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LoadoutButtonPerks_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButtonPerks_C::OnBtnHovered(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnHovered");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadoutButtonPerks_C::OnBtnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetIsActive
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsActive                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButtonPerks_C::SetIsActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetIsActive");

	struct
	{
		bool                           IsActive;
	} params;

	params.IsActive = IsActive;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.ExecuteUbergraph_WBP_LoadoutButtonPerks
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LoadoutButtonPerks_C::ExecuteUbergraph_WBP_LoadoutButtonPerks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.ExecuteUbergraph_WBP_LoadoutButtonPerks");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LoadoutButtonPerks_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LoadoutButtonPerks_C::OnHovered__DelegateSignature(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnHovered__DelegateSignature");

	struct
	{
		bool                           IsGamepad;
	} params;

	params.IsGamepad = IsGamepad;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
