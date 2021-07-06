#pragma once

// Rogue Company (0.60) SDK

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
// 0x105C (0x214C - 0x10F0)
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x10F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x10F8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                               // 0x1138(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                               // 0x1250(0x0118)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                               // 0x1368(0x0118)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                    // 0x1480(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                    // 0x14B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                          // 0x14E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                           // 0x1590(0x0088)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x1618(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x1658(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                    // 0x1718(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                    // 0x1748(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x1778(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1840(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                           // 0x1878(0x0088)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK;                                      // 0x1900(0x0190)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                               // 0x1A90(0x0118)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                          // 0x1BA8(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                    // 0x1C58(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                    // 0x1C88(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                           // 0x1CB8(0x0088)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                               // 0x1D40(0x0118)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                            // 0x1E58(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1F08(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x1F38(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x1F68(0x0088)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x1FF0(0x0118)
	class UPCM_Hero_ABP_C*                             HeroABP;                                                  // 0x2108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Zipline_IK_Target_Location;                               // 0x2110(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Zipline_Device_Rope_Pivot;                                // 0x211C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FRotator                                    Zipline_IK_Target_Rotation;                               // 0x2128(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FVector                                     L_ZiplineDevice_Location;                                 // 0x2134(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     R_ZiplineDevice_Location;                                 // 0x2140(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C");
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
