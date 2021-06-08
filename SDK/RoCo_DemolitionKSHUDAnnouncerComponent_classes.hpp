#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DemolitionKSHUDAnnouncerComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C
// 0x0008 (0x0178 - 0x0170)
class UDemolitionKSHUDAnnouncerComponent_C : public UNeutralBombKSHUDAnnouncementComponent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DemolitionKSHUDAnnouncerComponent.DemolitionKSHUDAnnouncerComponent_C");
		return ptr;
	}


	void OnBombSpawned();
	void OnBombPickedUp(class AKSPlayerState* BombHolderState, int BombHolderTeamNum);
	void ExecuteUbergraph_DemolitionKSHUDAnnouncerComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
