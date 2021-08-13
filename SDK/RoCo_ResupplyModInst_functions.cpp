// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ResupplyModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResupplyModInst.ResupplyModInst_C.FindSafeLandingSpot
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InPos                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AResupplyCrate_C*        ResupplyCrateInst              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutPos                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResupplyModInst_C::FindSafeLandingSpot(const struct FVector& InPos, class AResupplyCrate_C* ResupplyCrateInst, struct FVector* OutPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyModInst.ResupplyModInst_C.FindSafeLandingSpot");

	struct
	{
		struct FVector                 InPos;
		class AResupplyCrate_C*        ResupplyCrateInst;
		struct FVector                 OutPos;
	} params;

	params.InPos = InPos;
	params.ResupplyCrateInst = ResupplyCrateInst;

	UObject::ProcessEvent(fn, &params);

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
}


// Function ResupplyModInst.ResupplyModInst_C.OnEliminateOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResupplyModInst_C::OnEliminateOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyModInst.ResupplyModInst_C.OnEliminateOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function ResupplyModInst.ResupplyModInst_C.BroadcastPickedUp
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPowerUp*              PowerUp                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  PickingUpActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResupplyModInst_C::BroadcastPickedUp(class AKSPowerUp* PowerUp, class AActor* PickingUpActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyModInst.ResupplyModInst_C.BroadcastPickedUp");

	struct
	{
		class AKSPowerUp*              PowerUp;
		class AActor*                  PickingUpActor;
	} params;

	params.PowerUp = PowerUp;
	params.PickingUpActor = PickingUpActor;

	UObject::ProcessEvent(fn, &params);
}


// Function ResupplyModInst.ResupplyModInst_C.ExecuteUbergraph_ResupplyModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UResupplyModInst_C::ExecuteUbergraph_ResupplyModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResupplyModInst.ResupplyModInst_C.ExecuteUbergraph_ResupplyModInst");

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
