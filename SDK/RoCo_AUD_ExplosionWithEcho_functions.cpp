// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AUD_ExplosionWithEcho_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AUD_ExplosionWithEcho.AUD_ExplosionWithEcho_C.Play Explosion Sound On Actor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAUD_ExplosionWithEcho_C::Play_Explosion_Sound_On_Actor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AUD_ExplosionWithEcho.AUD_ExplosionWithEcho_C.Play Explosion Sound On Actor");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function AUD_ExplosionWithEcho.AUD_ExplosionWithEcho_C.ExecuteUbergraph_AUD_ExplosionWithEcho
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAUD_ExplosionWithEcho_C::ExecuteUbergraph_AUD_ExplosionWithEcho(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AUD_ExplosionWithEcho.AUD_ExplosionWithEcho_C.ExecuteUbergraph_AUD_ExplosionWithEcho");

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
