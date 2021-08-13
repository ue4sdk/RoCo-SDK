// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Sub_Hero_ABP_Face_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USub_Hero_ABP_Face_C::ExecuteUbergraph_Sub_Hero_ABP_Face(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               bpp__InPose__pf                (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FPoseLink               bpp__AnimGraph__pf             (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USub_Hero_ABP_Face_C::AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph");

	struct
	{
		struct FPoseLink               bpp__InPose__pf;
		struct FPoseLink               bpp__AnimGraph__pf;
	} params;

	params.bpp__InPose__pf = bpp__InPose__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
