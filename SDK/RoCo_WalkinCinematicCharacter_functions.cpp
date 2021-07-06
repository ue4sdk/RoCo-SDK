// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WalkinCinematicCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetSkeletalPropMontageStartTime
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AWalkinCinematicCharacter_C::GetSkeletalPropMontageStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetSkeletalPropMontageStartTime");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJobMasteryLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            JobMasteryLevel                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::GetJobMasteryLevel(int* JobMasteryLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJobMasteryLevel");

	struct
	{
		int                            JobMasteryLevel;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobMasteryLevel != nullptr)
		*JobMasteryLevel = params.JobMasteryLevel;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJob
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              JobItem                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::GetJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJob");

	struct
	{
		class UKSJobItem*              JobItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobItem != nullptr)
		*JobItem = params.JobItem;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJobName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   JobName                        (CPF_Parm, CPF_OutParm)

void AWalkinCinematicCharacter_C::GetJobName(struct FText* JobName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetJobName");

	struct
	{
		struct FText                   JobName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (JobName != nullptr)
		*JobName = params.JobName;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::GetPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.GetPlayerName");

	struct
	{
		struct FString                 PlayerName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerName != nullptr)
		*PlayerName = params.PlayerName;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.SetPersistentPlayerData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData* PersistentPlayerData           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::SetPersistentPlayerData(class UKSPersistentPlayerData* PersistentPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.SetPersistentPlayerData");

	struct
	{
		class UKSPersistentPlayerData* PersistentPlayerData;
	} params;

	params.PersistentPlayerData = PersistentPlayerData;

	UObject::ProcessEvent(fn, &params);
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitBodyApperal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWalkinCinematicCharacter_C::InitBodyApperal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitBodyApperal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWalkinCinematicCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.Add Body Apparel As Parent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.Add Body Apparel As Parent");

	struct
	{
		class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Comonent;
	} params;

	params.Skinnable_Mesh_Comonent = Skinnable_Mesh_Comonent;

	UObject::ProcessEvent(fn, &params);
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitializeSkeletalPropAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimInstance*           PropAnimInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::InitializeSkeletalPropAnimation(class UAnimInstance* PropAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitializeSkeletalPropAnimation");

	struct
	{
		class UAnimInstance*           PropAnimInstance;
	} params;

	params.PropAnimInstance = PropAnimInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ExecuteUbergraph_WalkinCinematicCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AWalkinCinematicCharacter_C::ExecuteUbergraph_WalkinCinematicCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ExecuteUbergraph_WalkinCinematicCharacter");

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
