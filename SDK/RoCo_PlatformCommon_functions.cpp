// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FFrameRate              InFrameRate                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UPCom_SimpleTimecodeProvider::SetFrameRate(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate"));

	struct
	{
		struct FFrameRate              InFrameRate;
	} params;

	params.InFrameRate = InFrameRate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
