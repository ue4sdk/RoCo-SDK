// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FootstepNotify_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FootstepNotify.FootstepNotify_C.Received_Notify
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  bpp__MeshComp__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UAnimSequenceBase*       bpp__Animation__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UFootstepNotify_C::Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.Received_Notify");

	struct
	{
		class USkeletalMeshComponent*  bpp__MeshComp__pf;
		class UAnimSequenceBase*       bpp__Animation__pf;
		bool                           ReturnValue;
	} params;

	params.bpp__MeshComp__pf = bpp__MeshComp__pf;
	params.bpp__Animation__pf = bpp__Animation__pf;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// class UAnimInstance*           bpp__AnimInstance__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__BonexName__pfT            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   bpp__MaterialxReturn__pfT      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__ActorxReturn__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UFootstepNotify_C::GetSFXMaterial(class UAnimInstance* bpp__AnimInstance__pf, const struct FName& bpp__BonexName__pfT, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function FootstepNotify.FootstepNotify_C.GetSFXMaterial");

	struct
	{
		class UAnimInstance*           bpp__AnimInstance__pf;
		struct FName                   bpp__BonexName__pfT;
		struct FName                   bpp__MaterialxReturn__pfT;
		class AActor*                  bpp__ActorxReturn__pfT;
	} params;

	params.bpp__AnimInstance__pf = bpp__AnimInstance__pf;
	params.bpp__BonexName__pfT = bpp__BonexName__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__MaterialxReturn__pfT != nullptr)
		*bpp__MaterialxReturn__pfT = params.bpp__MaterialxReturn__pfT;
	if (bpp__ActorxReturn__pfT != nullptr)
		*bpp__ActorxReturn__pfT = params.bpp__ActorxReturn__pfT;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
