#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ABP_GAD_ZiplineDevice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C
// 0x0F84 (0x2054 - 0x10D0)
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10D8(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x1110(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x1220(0x0110)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x1330(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x1440(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x1468(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x1490(0x00A8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1538(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x15B8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x15F0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x16A8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x16D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x16F8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x17B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x17E8(0x0080)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1868(0x0008) MISSED OFFSET
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK;                                      // 0x1870(0x0180)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x19F0(0x0110)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1B00(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1BA8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1BD0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1BF8(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1C78(0x0110)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1D88(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1E30(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1E58(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1E80(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1F00(0x0110)
	class UPCM_Hero_ABP_C*                             HeroABP;                                                  // 0x2010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Zipline_IK_Target_Location;                               // 0x2018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Zipline_Device_Rope_Pivot;                                // 0x2024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Zipline_IK_Target_Rotation;                               // 0x2030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     L_ZiplineDevice_Location;                                 // 0x203C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     R_ZiplineDevice_Location;                                 // 0x2048(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C"));
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_GAD_ZiplineDevice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
