// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_GameTimerBarScorePip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameTimerBarScorePip.GameTimerBarScorePip_C.Set Pip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           On                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UGameTimerBarScorePip_C::Set_Pip(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.Set Pip");

	struct
	{
		bool                           On;
	} params;

	params.On = On;

	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarScorePip.GameTimerBarScorePip_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGameTimerBarScorePip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameTimerBarScorePip.GameTimerBarScorePip_C.ExecuteUbergraph_GameTimerBarScorePip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UGameTimerBarScorePip_C::ExecuteUbergraph_GameTimerBarScorePip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.ExecuteUbergraph_GameTimerBarScorePip");

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
