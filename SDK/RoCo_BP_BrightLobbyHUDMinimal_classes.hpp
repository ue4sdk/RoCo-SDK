#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_BrightLobbyHUDMinimal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
// 0x0008 (0x06C8 - 0x06C0)
class ABP_BrightLobbyHUDMinimal_C : public AKSLobbyHUDNew
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C");
		return ptr;
	}


	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
