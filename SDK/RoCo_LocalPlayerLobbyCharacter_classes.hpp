#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LocalPlayerLobbyCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C
// 0x0021 (0x3892 - 0x3871)
class ALocalPlayerLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x3871(0x0007) MISSED OFFSET
	struct FString                                     PendingPlayerName;                                        // 0x3878(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UKSItem*                                     PendingAvatar;                                            // 0x3888(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               PendingIsLeader;                                          // 0x3890(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               NeedsToSetNameplate;                                      // 0x3891(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
