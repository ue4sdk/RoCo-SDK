// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterWalkin_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UMasterWalkin_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Update Skin Dependent Variables
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterWalkin_ABP_C::Update_Skin_Dependent_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.Update Skin Dependent Variables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterWalkin_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Set Skin Parameters
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMasterWalkin_ABP_C::Set_Skin_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.Set Skin Parameters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMasterWalkin_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Phase Change
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NewPhaseName                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   PreviousPhaseName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterWalkin_ABP_C::Phase_Change(const struct FName& NewPhaseName, const struct FName& PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.Phase Change");

	struct
	{
		struct FName                   NewPhaseName;
		struct FName                   PreviousPhaseName;
	} params;

	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.OnCinematicSubLevelEnabled_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 CinematicSubLevelName          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UMasterWalkin_ABP_C::OnCinematicSubLevelEnabled_Event(const struct FString& CinematicSubLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.OnCinematicSubLevelEnabled_Event");

	struct
	{
		struct FString                 CinematicSubLevelName;
	} params;

	params.CinematicSubLevelName = CinematicSubLevelName;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.ExecuteUbergraph_MasterWalkin_ABP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMasterWalkin_ABP_C::ExecuteUbergraph_MasterWalkin_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.ExecuteUbergraph_MasterWalkin_ABP");

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
