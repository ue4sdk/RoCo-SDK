#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FootstepNotify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass FootstepNotify.FootstepNotify_C
// 0x0010 (0x0048 - 0x0038)
class UFootstepNotify_C : public UAnimNotify
{
public:
	EStepType                                          StepType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x003C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass FootstepNotify.FootstepNotify_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf);
	void GetSFXMaterial(class UAnimInstance* bpp__AnimInstance__pf, const struct FName& bpp__BonexName__pfT, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
