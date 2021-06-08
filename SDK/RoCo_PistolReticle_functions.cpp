// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PistolReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PistolReticle.PistolReticle_C.UpdateOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPistolReticle_C::UpdateOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.UpdateOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.ChangeADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPistolReticle_C::ChangeADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ChangeADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.ForceADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPistolReticle_C::ForceADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ForceADS");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.HitConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPistolReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.HitConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.Headshot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPistolReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.Headshot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.KillConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPistolReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.KillConfirm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.GrenadeTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPistolReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.GrenadeTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.GrenadeCook
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          TickPeriod                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPistolReticle_C::GrenadeCook(bool Active, float TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.GrenadeCook");

	struct
	{
		bool                           Active;
		float                          TickPeriod;
	} params;

	params.Active = Active;
	params.TickPeriod = TickPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function PistolReticle.PistolReticle_C.ExecuteUbergraph_PistolReticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPistolReticle_C::ExecuteUbergraph_PistolReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PistolReticle.PistolReticle_C.ExecuteUbergraph_PistolReticle");

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
