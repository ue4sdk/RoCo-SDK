// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_JobSelectionCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JobSelectionCharacter.JobSelectionCharacter_C.Init Body Apperal
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AJobSelectionCharacter_C::Init_Body_Apperal()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.Init Body Apperal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.HandleAnimInitialized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AJobSelectionCharacter_C::HandleAnimInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.HandleAnimInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.OnPhaseChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelectionCharacter_C::OnPhaseChanged(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.OnPhaseChanged");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AJobSelectionCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.Add Body Apparel As Parent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelectionCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.Add Body Apparel As Parent");

	struct
	{
		class USkinnableSkeletalMeshComponent* Skinnable_Mesh_Component;
	} params;

	params.Skinnable_Mesh_Component = Skinnable_Mesh_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.InitRogueSelectAnimInst
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InitialPhaseName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelectionCharacter_C::InitRogueSelectAnimInst(const struct FName& InitialPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.InitRogueSelectAnimInst");

	struct
	{
		struct FName                   InitialPhaseName;
	} params;

	params.InitialPhaseName = InitialPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function JobSelectionCharacter.JobSelectionCharacter_C.ExecuteUbergraph_JobSelectionCharacter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AJobSelectionCharacter_C::ExecuteUbergraph_JobSelectionCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JobSelectionCharacter.JobSelectionCharacter_C.ExecuteUbergraph_JobSelectionCharacter");

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
