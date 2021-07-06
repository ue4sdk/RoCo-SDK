// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_RogueMasteryPortrait_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Has Player Owner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryPortrait_C::Has_Player_Owner(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Has Player Owner");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJobMasteryLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Mastery_Level                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::GetOwnerJobMasteryLevel(int* Mastery_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJobMasteryLevel");

	struct
	{
		int                            Mastery_Level;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mastery_Level != nullptr)
		*Mastery_Level = params.Mastery_Level;
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJob
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UKSJobItem*              Job                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::GetOwnerJob(class UKSJobItem** Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.GetOwnerJob");

	struct
	{
		class UKSJobItem*              Job;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Job != nullptr)
		*Job = params.Job;
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.MatchesBoundPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPersistentPlayerData* PersistentData                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_RogueMasteryPortrait_C::MatchesBoundPlayer(class AKSPlayerState* PlayerState, class UKSPersistentPlayerData* PersistentData, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.MatchesBoundPlayer");

	struct
	{
		class AKSPlayerState*          PlayerState;
		class UKSPersistentPlayerData* PersistentData;
		bool                           Return_Value;
	} params;

	params.PlayerState = PlayerState;
	params.PersistentData = PersistentData;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.ClearPreviousOwner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_RogueMasteryPortrait_C::ClearPreviousOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.ClearPreviousOwner");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPersistentPlayerOwner
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PlayerData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_RogueMasteryPortrait_C::SetPersistentPlayerOwner(class UKSPersistentPlayerData* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPersistentPlayerOwner");

	struct
	{
		class UKSPersistentPlayerData* PlayerData;
	} params;

	params.PlayerData = PlayerData;

	UObject::ProcessEvent(fn, &params);
}


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
