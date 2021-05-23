// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DualARReticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DualARReticle.DualARReticle_C.ChangeADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDualARReticle_C::ChangeADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.ChangeADS"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.ForceADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDualARReticle_C::ForceADS(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.ForceADS"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.HitConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDualARReticle_C::HitConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.HitConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.Headshot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDualARReticle_C::Headshot()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.Headshot"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.KillConfirm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDualARReticle_C::KillConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.KillConfirm"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.GrenadeCook
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          TickPeriod                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDualARReticle_C::GrenadeCook(bool Active, float TickPeriod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.GrenadeCook"));

	struct
	{
		bool                           Active;
		float                          TickPeriod;
	} params;

	params.Active = Active;
	params.TickPeriod = TickPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.GrenadeTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDualARReticle_C::GrenadeTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.GrenadeTick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.UpdateOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDualARReticle_C::UpdateOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.UpdateOffset"));

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function DualARReticle.DualARReticle_C.ExecuteUbergraph_DualARReticle
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDualARReticle_C::ExecuteUbergraph_DualARReticle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function DualARReticle.DualARReticle_C.ExecuteUbergraph_DualARReticle"));

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
