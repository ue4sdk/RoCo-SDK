#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KOTHPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KOTHPlayerController.KOTHPlayerController_C
// 0x0008 (0x0E18 - 0x0E10)
class AKOTHPlayerController_C : public AGamePlayerController_C
{
public:
	class UKOTHKSHUDAnnouncementComoponent_C*          KOTHKSHUDAnnouncementComoponent;                          // 0x0E10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KOTHPlayerController.KOTHPlayerController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
