// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainEnvironmentTracker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   bpp__OldEnvironment__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMainEnvironmentTracker_C::BlueprintEnvironmentChanged(const struct FName& bpp__OldEnvironment__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged"));

	struct
	{
		struct FName                   bpp__OldEnvironment__pf;
	} params;

	params.bpp__OldEnvironment__pf = bpp__OldEnvironment__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
