#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AssaultKSAnnouncementComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C
// 0x0008 (0x0178 - 0x0170)
class UAssaultKSAnnouncementComponent_C : public UNeutralBombKSHUDAnnouncementComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AssaultKSAnnouncementComponent.AssaultKSAnnouncementComponent_C");
		return ptr;
	}


	void OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum);
	void ExecuteUbergraph_AssaultKSAnnouncementComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
