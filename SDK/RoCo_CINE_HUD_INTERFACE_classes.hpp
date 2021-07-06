#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CINE_HUD_INTERFACE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C
// 0x0000 (0x0028 - 0x0028)
class UCINE_HUD_INTERFACE_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("DynamicClass CINE_HUD_INTERFACE.CINE_HUD_INTERFACE_C");
		return ptr;
	}


	void Set_Cinematic_Nameplate_Data(class UKSPersistentPlayerData* bpp__PlayerxData__pfT, int bpp__Index__pf);
	void Play_Cinematic_Nameplate_Anim(int bpp__Index__pf, int bpp__NumWalking__pf);
	void Init_WalkIn_Widget(TArray<class AKSJobSelectPreviewActor*> bpp__Players__pf__const);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
