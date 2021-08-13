// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BPI_SetSlomo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_SetSlomo.BPI_SetSlomo_C.SetSlomo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bEnableSlomo                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UBPI_SetSlomo_C::SetSlomo(bool bEnableSlomo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SetSlomo.BPI_SetSlomo_C.SetSlomo");

	struct
	{
		bool                           bEnableSlomo;
	} params;

	params.bEnableSlomo = bEnableSlomo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
