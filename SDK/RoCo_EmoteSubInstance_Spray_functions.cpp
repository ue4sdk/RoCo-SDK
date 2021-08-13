// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EmoteSubInstance_Spray_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Set Stat Tracking Info
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            StatTrackingNumber             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::Set_Stat_Tracking_Info(int StatTrackingNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Set Stat Tracking Info");

	struct
	{
		int                            StatTrackingNumber;
	} params;

	params.StatTrackingNumber = StatTrackingNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Clear Active Decal Component
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmoteSubInstance_Spray_C::Clear_Active_Decal_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Clear Active Decal Component");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Set Active Decal Component
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPoolableDecalComponent* Decal_Component                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::Set_Active_Decal_Component(class UPoolableDecalComponent* Decal_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Set Active Decal Component");

	struct
	{
		class UPoolableDecalComponent* Decal_Component;
	} params;

	params.Decal_Component = Decal_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintOnRegister
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UEmoteSubInstance_Spray_C::BlueprintOnRegister()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintOnRegister");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintPlaySpray
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 SprayLocation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                SprayRotation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)
// class UPrimitiveComponent*     SprayTarget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::BlueprintPlaySpray(const struct FVector& SprayLocation, const struct FRotator& SprayRotation, class UPrimitiveComponent* SprayTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintPlaySpray");

	struct
	{
		struct FVector                 SprayLocation;
		struct FRotator                SprayRotation;
		class UPrimitiveComponent*     SprayTarget;
	} params;

	params.SprayLocation = SprayLocation;
	params.SprayRotation = SprayRotation;
	params.SprayTarget = SprayTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Update Spray Texture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UEmoteSubInstance_Spray_C::Update_Spray_Texture()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.Update Spray Texture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.On Decal Expired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPoolableDecalComponent* Expired_Component              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::On_Decal_Expired(class UPoolableDecalComponent* Expired_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.On Decal Expired");

	struct
	{
		class UPoolableDecalComponent* Expired_Component;
	} params;

	params.Expired_Component = Expired_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintUpdateStatTrackingNumber
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            NewStatTrackingNumber          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::BlueprintUpdateStatTrackingNumber(int NewStatTrackingNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.BlueprintUpdateStatTrackingNumber");

	struct
	{
		int                            NewStatTrackingNumber;
	} params;

	params.NewStatTrackingNumber = NewStatTrackingNumber;

	UObject::ProcessEvent(fn, &params);
}


// Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.ExecuteUbergraph_EmoteSubInstance_Spray
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UEmoteSubInstance_Spray_C::ExecuteUbergraph_EmoteSubInstance_Spray(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteSubInstance_Spray.EmoteSubInstance_Spray_C.ExecuteUbergraph_EmoteSubInstance_Spray");

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
