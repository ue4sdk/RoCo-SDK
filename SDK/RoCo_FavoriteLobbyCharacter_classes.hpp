#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FavoriteLobbyCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FavoriteLobbyCharacter.FavoriteLobbyCharacter_C
// 0x0027 (0x3898 - 0x3871)
class AFavoriteLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x3871(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3878(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            WidgetNameplate;                                          // 0x3880(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               NeedsToSetNameplate;                                      // 0x3888(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x3889(0x0007) MISSED OFFSET
	class UKSPlayerInfo*                               PendingPlayerInfo;                                        // 0x3890(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FavoriteLobbyCharacter.FavoriteLobbyCharacter_C"));
		return ptr;
	}


	void SetLobbyNameplate(class UKSPlayerInfo* playerinfo);
	void HideLobbyNameplate();
	void ShowLobbyNameplate();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FavoriteLobbyCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
