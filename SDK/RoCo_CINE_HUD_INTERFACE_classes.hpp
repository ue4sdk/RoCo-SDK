#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_HUD_INTERFACE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C
// 0x0000 (0x0028 - 0x0028)
class UCINE_HUD_INTERFACE_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C");
		return ptr;
	}


	void Init_WalkIn_Widget(class AKSJobSelectPreviewActor* In_Player_01, class AKSJobSelectPreviewActor* In_Player_02, class AKSJobSelectPreviewActor* In_Player_03, class AKSJobSelectPreviewActor* In_Player_04);
	void Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* Player_Data, int Index);
	void Play_Cinematic_Nameplate_Anim(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
