#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_VoicelineNotify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VoicelineNotify.VoicelineNotify_C
// 0x0038 (0x0070 - 0x0038)
class UVoicelineNotify_C : public UAnimNotify
{
public:
	struct FKSVoicelineEvent                           Voiceline;                                                // 0x0038(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass VoicelineNotify.VoicelineNotify_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
