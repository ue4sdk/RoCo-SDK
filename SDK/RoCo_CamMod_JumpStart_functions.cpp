// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_JumpStart_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CamMod_JumpStart.CamMod_JumpStart_C.ShouldModifyCamera
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCamMod_JumpStart_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpStart.CamMod_JumpStart_C.ShouldModifyCamera");

	struct
	{
		bool                           bSuccess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_JumpStart.CamMod_JumpStart_C.PlayTimeline
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCamMod_JumpStart_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpStart.CamMod_JumpStart_C.PlayTimeline");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CamMod_JumpStart.CamMod_JumpStart_C.ExecuteUbergraph_CamMod_JumpStart
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCamMod_JumpStart_C::ExecuteUbergraph_CamMod_JumpStart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpStart.CamMod_JumpStart_C.ExecuteUbergraph_CamMod_JumpStart");

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
