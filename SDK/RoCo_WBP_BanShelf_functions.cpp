// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_BanShelf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_BanShelf.WBP_BanShelf_C.NotifyBanShouldHaveBeenReceived
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BanShelf_C::NotifyBanShouldHaveBeenReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf.WBP_BanShelf_C.NotifyBanShouldHaveBeenReceived");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf.WBP_BanShelf_C.NotifyBanExpected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFriendly                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_BanShelf_C::NotifyBanExpected(bool IsFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf.WBP_BanShelf_C.NotifyBanExpected");

	struct
	{
		bool                           IsFriendly;
	} params;

	params.IsFriendly = IsFriendly;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf.WBP_BanShelf_C.IsFriendlyBan
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJobItem*              CheckItem                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_BanShelf_C::IsFriendlyBan(class UKSJobItem* CheckItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf.WBP_BanShelf_C.IsFriendlyBan");

	struct
	{
		class UKSJobItem*              CheckItem;
		bool                           ReturnValue;
	} params;

	params.CheckItem = CheckItem;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_BanShelf.WBP_BanShelf_C.ClearBannedJobs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_BanShelf_C::ClearBannedJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf.WBP_BanShelf_C.ClearBannedJobs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_BanShelf.WBP_BanShelf_C.NotifyBannedJobItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              NewBanItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_BanShelf_C::NotifyBannedJobItem(class UKSJobItem* NewBanItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BanShelf.WBP_BanShelf_C.NotifyBannedJobItem");

	struct
	{
		class UKSJobItem*              NewBanItem;
	} params;

	params.NewBanItem = NewBanItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
