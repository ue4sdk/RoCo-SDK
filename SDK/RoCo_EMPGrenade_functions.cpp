// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EMPGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EMPGrenade.EMPGrenade_C.GetComponentToRotate
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class USceneComponent* AEMPGrenade_C::GetComponentToRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EMPGrenade.EMPGrenade_C.GetComponentToRotate");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EMPGrenade.EMPGrenade_C.FuseTimeExpired
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AEMPGrenade_C::FuseTimeExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function EMPGrenade.EMPGrenade_C.FuseTimeExpired");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EMPGrenade.EMPGrenade_C.PlayExplosion
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FProjectileExplosionInfo ExplosionInfo                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void AEMPGrenade_C::PlayExplosion(const struct FProjectileExplosionInfo& ExplosionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EMPGrenade.EMPGrenade_C.PlayExplosion");

	struct
	{
		struct FProjectileExplosionInfo ExplosionInfo;
	} params;

	params.ExplosionInfo = ExplosionInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function EMPGrenade.EMPGrenade_C.ExecuteUbergraph_EMPGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AEMPGrenade_C::ExecuteUbergraph_EMPGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EMPGrenade.EMPGrenade_C.ExecuteUbergraph_EMPGrenade");

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
