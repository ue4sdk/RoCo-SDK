// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_InWorld_Reticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetWeaponComponent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSWeaponComponent*      WeaponComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_InWorld_Reticle_C::SetWeaponComponent(class UKSWeaponComponent* WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetWeaponComponent");

	struct
	{
		class UKSWeaponComponent*      WeaponComponent;
	} params;

	params.WeaponComponent = WeaponComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetPossession
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_InWorld_Reticle_C::SetPossession(class APlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetPossession");

	struct
	{
		class APlayerState*            PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_InWorld_Reticle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ExecuteUbergraph_BP_InWorld_Reticle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_InWorld_Reticle_C::ExecuteUbergraph_BP_InWorld_Reticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ExecuteUbergraph_BP_InWorld_Reticle");

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
