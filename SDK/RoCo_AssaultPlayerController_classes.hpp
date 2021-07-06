#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AssaultPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AssaultPlayerController.AssaultPlayerController_C
// 0x0008 (0x0E68 - 0x0E60)
class AAssaultPlayerController_C : public AGamePlayerController_C
{
public:
	class UAssaultKSAnnouncementComponent_C*           AssaultKSAnnouncementComponent;                           // 0x0E60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AssaultPlayerController.AssaultPlayerController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
