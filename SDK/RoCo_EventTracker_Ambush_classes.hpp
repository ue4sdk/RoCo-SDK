#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Ambush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Ambush.EventTracker_Ambush_C
// 0x0058 (0x0268 - 0x0210)
class UEventTracker_Ambush_C : public UEventTrackerAbstract_InstigatedDamage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) UNKNOWN PROPERTY: RecentAttackers

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Ambush.EventTracker_Ambush_C");
		return ptr;
	}


	void IsValidCombatEvent(struct FCombatEventInfo* EventInfo, bool* IsValid);
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void Handle_OnRoundStart(const struct FRoundInitState& RoundInitState);
	void Handle_Owned_Pawn_Took_Damage(float DamageAmount, class UClass* DamageTypeClass, class AActor* DamageCauser, class AController* Instigator, const struct FVector& DamageOrigin);
	void ExecuteUbergraph_EventTracker_Ambush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
