#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DemolitionPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DemolitionPlayerController.DemolitionPlayerController_C
// 0x0008 (0x0E20 - 0x0E18)
class ADemolitionPlayerController_C : public AGamePlayerController_C
{
public:
	class UDemolitionKSHUDAnnouncerComponent_C*        DemolitionKSHUDAnnouncerComponent;                        // 0x0E18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DemolitionPlayerController.DemolitionPlayerController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
