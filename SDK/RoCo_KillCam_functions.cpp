// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KillCam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KillCam.KillCam_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKillCam_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillCam.KillCam_C.SetPlayerStateUIRelevanceChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UKillCam_C::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.SetPlayerStateUIRelevanceChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function KillCam.KillCam_C.ExecuteUbergraph_KillCam
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UKillCam_C::ExecuteUbergraph_KillCam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.ExecuteUbergraph_KillCam");

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
