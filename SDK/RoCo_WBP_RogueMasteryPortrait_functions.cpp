// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryPortrait_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryLevelExplicit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MasteryLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetMasteryLevelExplicit(int MasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryLevelExplicit");

	struct
	{
		int                            MasteryLevel;
	} params;

	params.MasteryLevel = MasteryLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryFrameToLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MasteryLevel                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetMasteryFrameToLevel(int MasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryFrameToLevel");

	struct
	{
		int                            MasteryLevel;
	} params;

	params.MasteryLevel = MasteryLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.OnJobMasteryLevelUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryPortrait_C::OnJobMasteryLevelUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.OnJobMasteryLevelUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobPortraitFromSoftTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D> SoftTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetJobPortraitFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobPortraitFromSoftTexture");

	struct
	{
		TSoftObjectPtr<class UTexture2D> SoftTexture;
	} params;

	params.SoftTexture = SoftTexture;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Set Mastery Frame
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryPortrait_C::Set_Mastery_Frame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Set Mastery Frame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPlayerOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetPlayerOwner(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPlayerOwner");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobInformation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetJobInformation(class UKSJobItem* JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobInformation");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;

	params.JobItem = JobItem;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
