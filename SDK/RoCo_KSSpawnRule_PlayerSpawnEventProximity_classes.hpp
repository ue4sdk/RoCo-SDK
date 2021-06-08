#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KSSpawnRule_PlayerSpawnEventProximity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C
// 0x0008 (0x0068 - 0x0060)
class UKSSpawnRule_PlayerSpawnEventProximity_C : public UKSSpawnRule_PlayerEventProximity
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KSSpawnRule_PlayerSpawnEventProximity.KSSpawnRule_PlayerSpawnEventProximity_C");
		return ptr;
	}


	void BindToEvent();
	void On_Player_Spawn(class AKSCharacterBase* NewCharacter);
	void ExecuteUbergraph_KSSpawnRule_PlayerSpawnEventProximity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
