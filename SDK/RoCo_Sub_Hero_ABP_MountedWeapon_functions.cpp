// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_MountedWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void USub_Hero_ABP_MountedWeapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USub_Hero_ABP_MountedWeapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USub_Hero_ABP_MountedWeapon_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USub_Hero_ABP_MountedWeapon_C::ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_MountedWeapon.Sub_Hero_ABP_MountedWeapon_C.ExecuteUbergraph_Sub_Hero_ABP_MountedWeapon");

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
