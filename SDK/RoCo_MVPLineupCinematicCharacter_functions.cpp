// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MVPLineupCinematicCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJobMasteryLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            JobMasteryLevel                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::GetJobMasteryLevel(int* JobMasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJobMasteryLevel");

	struct
	{
		int                            JobMasteryLevel;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobMasteryLevel != nullptr)
		*JobMasteryLevel = params.JobMasteryLevel;
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJob
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::GetJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJob");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobItem != nullptr)
		*JobItem = params.JobItem;
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJobName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   JobName                        (CPF_Parm, CPF_OutParm)

void AMVPLineupCinematicCharacter_C::GetJobName(struct FText* JobName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetJobName");

	struct
	{
		struct FText                   JobName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobName != nullptr)
		*JobName = params.JobName;
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::GetPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.GetPlayerName");

	struct
	{
		struct FString                 PlayerName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.SetPersistentPlayerData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PersistentPlayerData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::SetPersistentPlayerData(class UKSPersistentPlayerData* PersistentPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.SetPersistentPlayerData");

	struct
	{
		class UKSPersistentPlayerData* PersistentPlayerData;
	} params;

	params.PersistentPlayerData = PersistentPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.InitBodyApperal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMVPLineupCinematicCharacter_C::InitBodyApperal()
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.InitBodyApperal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMVPLineupCinematicCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.Add Body Apparel As Parent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.Add Body Apparel As Parent");

	struct
	{
		class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent;
	} params;

	params.Skinnable_Mesh_Comonent = Skinnable_Mesh_Comonent;

	UObject::ProcessEvent(fn, &params);
}


// Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.ExecuteUbergraph_MVPLineupCinematicCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AMVPLineupCinematicCharacter_C::ExecuteUbergraph_MVPLineupCinematicCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MVPLineupCinematicCharacter.MVPLineupCinematicCharacter_C.ExecuteUbergraph_MVPLineupCinematicCharacter");

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
