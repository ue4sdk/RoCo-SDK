// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FirstTimeSafeZoneViewRedirector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UFirstTimeSafeZoneViewRedirector_C::DoesLocalSettingApply(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply");

	struct
	{
		class APUMG_HUD*               HUD;
		bool                           ReturnValue;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
