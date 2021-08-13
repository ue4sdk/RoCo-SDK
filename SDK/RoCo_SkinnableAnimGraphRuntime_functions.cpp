// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SkinnableAnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMultiSkinObject*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UMultiSkinObject* USkinnedAnimInstance::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject");

	struct
	{
		class UMultiSkinObject*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Keyword                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBlendSpace*             Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bHasOverride                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UBlendSpace*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UBlendSpace* USkinnedAnimInstance::GetSkinnedBlendSpace(const struct FName& Keyword, class UBlendSpace* Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace");

	struct
	{
		struct FName                   Keyword;
		class UBlendSpace*             Default;
		bool                           bHasOverride;
		class UBlendSpace*             ReturnValue;
	} params;

	params.Keyword = Keyword;
	params.Default = Default;

	UObject::ProcessEvent(fn, &params);

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Keyword                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequence*           Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bHasOverride                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequence*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimSequence* USkinnedAnimInstance::GetSkinnedAnimSequence(const struct FName& Keyword, class UAnimSequence* Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence");

	struct
	{
		struct FName                   Keyword;
		class UAnimSequence*           Default;
		bool                           bHasOverride;
		class UAnimSequence*           ReturnValue;
	} params;

	params.Keyword = Keyword;
	params.Default = Default;

	UObject::ProcessEvent(fn, &params);

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Keyword                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAimOffsetBlendSpace*    Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bHasOverride                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAimOffsetBlendSpace*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAimOffsetBlendSpace* USkinnedAnimInstance::GetSkinnedAnimOffset(const struct FName& Keyword, class UAimOffsetBlendSpace* Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset");

	struct
	{
		struct FName                   Keyword;
		class UAimOffsetBlendSpace*    Default;
		bool                           bHasOverride;
		class UAimOffsetBlendSpace*    ReturnValue;
	} params;

	params.Keyword = Keyword;
	params.Default = Default;

	UObject::ProcessEvent(fn, &params);

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   Keyword                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            Default                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bHasOverride                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UAnimMontage* USkinnedAnimInstance::GetSkinnedAnimMontage(const struct FName& Keyword, class UAnimMontage* Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage");

	struct
	{
		struct FName                   Keyword;
		class UAnimMontage*            Default;
		bool                           bHasOverride;
		class UAnimMontage*            ReturnValue;
	} params;

	params.Keyword = Keyword;
	params.Default = Default;

	UObject::ProcessEvent(fn, &params);

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
