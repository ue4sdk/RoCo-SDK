#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Lobby_Core_Breach_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Core_Breach.Lobby_Core_Breach_C
// 0x0008 (0x0230 - 0x0228)
class ALobby_Core_Breach_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Lobby_Core_Breach.Lobby_Core_Breach_C"));
		return ptr;
	}


	void BndEvt__MainLobbyCamera_K2Node_ActorBoundEvent_0_TakeRadialDamageSignature__DelegateSignature(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_Lobby_Core_Breach(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
