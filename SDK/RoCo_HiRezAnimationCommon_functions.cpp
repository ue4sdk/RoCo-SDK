// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HiRezAnimationCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   DistanceCurveName              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequenceBase*       InAnimSequence                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UHiRezAnimationStatics::FindPositionFromDistanceCurve(const struct FName& DistanceCurveName, float Distance, class UAnimSequenceBase* InAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve"));

	struct
	{
		struct FName                   DistanceCurveName;
		float                          Distance;
		class UAnimSequenceBase*       InAnimSequence;
		float                          ReturnValue;
	} params;

	params.DistanceCurveName = DistanceCurveName;
	params.Distance = Distance;
	params.InAnimSequence = InAnimSequence;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
