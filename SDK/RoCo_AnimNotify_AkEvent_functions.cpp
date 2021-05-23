// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AnimNotify_AkEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Hirez Get Ak Component
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  AttachComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   AttachPointName                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bComponentCreated              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UAkComponent*            Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAnimNotify_AkEvent_C::Hirez_Get_Ak_Component(class USkeletalMeshComponent* AttachComponent, const struct FName& AttachPointName, bool* bComponentCreated, class UAkComponent** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Hirez Get Ak Component"));

	struct
	{
		class USkeletalMeshComponent*  AttachComponent;
		struct FName                   AttachPointName;
		bool                           bComponentCreated;
		class UAkComponent*            Return_Value;
	} params;

	params.AttachComponent = AttachComponent;
	params.AttachPointName = AttachPointName;

	UObject::ProcessEvent(fn, &params);

	if (bComponentCreated != nullptr)
		*bComponentCreated = params.bComponentCreated;
	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAnimNotify_AkEvent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify"));

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
