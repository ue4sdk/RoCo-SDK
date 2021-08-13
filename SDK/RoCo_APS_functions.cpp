// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_APS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APS.APS_C.GetRealActorTakeoverDelay
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float AAPS_C::GetRealActorTakeoverDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.GetRealActorTakeoverDelay");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function APS.APS_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APSDestroyedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Actor_Location                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAPS_C::APSDestroyedSFX(const struct FVector& Actor_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APSDestroyedSFX");

	struct
	{
		struct FVector                 Actor_Location;
	} params;

	params.Actor_Location = Actor_Location;

	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APSProjectileBlockSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Intercepted_Projectile_Location (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAPS_C::APSProjectileBlockSFX(const struct FVector& Intercepted_Projectile_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APSProjectileBlockSFX");

	struct
	{
		struct FVector                 Intercepted_Projectile_Location;
	} params;

	params.Intercepted_Projectile_Location = Intercepted_Projectile_Location;

	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APSDeactivateSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::APSDeactivateSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APSDeactivateSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APSPlacedSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::APSPlacedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APSPlacedSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APSActivatedLPSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::APSActivatedLPSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APSActivatedLPSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.Destroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.Destroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.OnProjectileIntercepted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InterceptedProjectileLocation  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAPS_C::OnProjectileIntercepted(const struct FVector& InterceptedProjectileLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.OnProjectileIntercepted");

	struct
	{
		struct FVector                 InterceptedProjectileLocation;
	} params;

	params.InterceptedProjectileLocation = InterceptedProjectileLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.APS Placed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::APS_Placed()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.APS Placed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.Activated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.Activated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.Deactivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAPS_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.Deactivated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AAPS_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAPS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.OnActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAPS_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.OnActivated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.OnDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAPS_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.OnDeactivated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.OnKilled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAPS_C::OnKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.OnKilled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function APS.APS_C.ExecuteUbergraph_APS
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAPS_C::ExecuteUbergraph_APS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APS.APS_C.ExecuteUbergraph_APS");

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
