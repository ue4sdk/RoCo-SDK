// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WeaponMenuInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMenuInterface.WeaponMenuInterface_C.Close
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Should_Cancel                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWeaponMenuInterface_C::Close(bool Should_Cancel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMenuInterface.WeaponMenuInterface_C.Close"));

	struct
	{
		bool                           Should_Cancel;
	} params;

	params.Should_Cancel = Should_Cancel;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
