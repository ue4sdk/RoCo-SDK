#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EnemyBombCarrierTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EnemyBombCarrierTracker.EnemyBombCarrierTracker_C
// 0x0020 (0x0048 - 0x0028)
class UEnemyBombCarrierTracker_C : public UObject
{
public:
	class UObject*                                     Bound_Bomb_Game_State;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Latest_Info_Id;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class APlayerController*                           Bound_Player_Controller;                                  // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AKSPlayerState*                              Current_Tracked_Enemy_Holder;                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EnemyBombCarrierTracker.EnemyBombCarrierTracker_C");
		return ptr;
	}


	void Try_Create_Tracking(class AKSPlayerState* New_Bomb_Holder);
	void Try_Remove_Current_Tracking(class AKSPlayerState* New_Bomb_Holder);
	void Handle_Bomb_State_Changed(class AKSPlayerState* KSPlayerState);
	void Bind_Game_And_Player(class APlayerController* Player_Controller);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
