#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RogueScreenPreviewActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RogueScreenPreviewActor.RogueScreenPreviewActor_C
// 0x0000 (0x0520 - 0x0520)
class ARogueScreenPreviewActor_C : public AKSJobSelectPrvwActor_RogueScrn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RogueScreenPreviewActor.RogueScreenPreviewActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
