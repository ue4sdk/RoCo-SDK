// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_JumpLanding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamMod_JumpLanding.CamMod_JumpLanding_C.ShouldModifyCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCamMod_JumpLanding_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CamMod_JumpLanding.CamMod_JumpLanding_C.ShouldModifyCamera"));

	struct
	{
		bool                           bSuccess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.PlayTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCamMod_JumpLanding_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CamMod_JumpLanding.CamMod_JumpLanding_C.PlayTimeline"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.OnCamModFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCamMod_JumpLanding_C::OnCamModFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CamMod_JumpLanding.CamMod_JumpLanding_C.OnCamModFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.ExecuteUbergraph_CamMod_JumpLanding
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCamMod_JumpLanding_C::ExecuteUbergraph_CamMod_JumpLanding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CamMod_JumpLanding.CamMod_JumpLanding_C.ExecuteUbergraph_CamMod_JumpLanding"));

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
