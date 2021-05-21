#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ANotifyState_SFXTeamPerspectiveAKEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANotifyState_SFXTeamPerspectiveAKEvent.ANotifyState_SFXTeamPerspectiveAKEvent_C
// 0x0000 (0x005D - 0x005D)
class UANotifyState_SFXTeamPerspectiveAKEvent_C : public UANotifyState_SFXAKEvent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ANotifyState_SFXTeamPerspectiveAKEvent.ANotifyState_SFXTeamPerspectiveAKEvent_C");
		return ptr;
	}


	void SetTeamPerspective(class USkeletalMeshComponent* MeshComp);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
