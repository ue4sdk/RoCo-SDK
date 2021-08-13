#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Hoverboard_CameraShake_Outro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Hoverboard_CameraShake_Outro.Hoverboard_CameraShake_Outro_C
// 0x0000 (0x0160 - 0x0160)
class UHoverboard_CameraShake_Outro_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Hoverboard_CameraShake_Outro.Hoverboard_CameraShake_Outro_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
