#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSSpawnRule_PlayerDeathEventProximity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C
// 0x0008 (0x0068 - 0x0060)
class UKSSpawnRule_PlayerDeathEventProximity_C : public UKSSpawnRule_PlayerEventProximity
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KSSpawnRule_PlayerDeathEventProximity.KSSpawnRule_PlayerDeathEventProximity_C");
		return ptr;
	}


	void BindToEvent();
	void On_Player_Death(const struct FCombatEventInfo& EventInfo);
	void ExecuteUbergraph_KSSpawnRule_PlayerDeathEventProximity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
