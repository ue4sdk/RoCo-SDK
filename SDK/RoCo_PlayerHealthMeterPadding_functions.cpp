// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlayerHealthMeterPadding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHealthMeterPadding.PlayerHealthMeterPadding_C.SetNumSegments
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumSegments                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPlayerHealthMeterPadding_C::SetNumSegments(int NumSegments)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthMeterPadding.PlayerHealthMeterPadding_C.SetNumSegments");

	struct
	{
		int                            NumSegments;
	} params;

	params.NumSegments = NumSegments;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
