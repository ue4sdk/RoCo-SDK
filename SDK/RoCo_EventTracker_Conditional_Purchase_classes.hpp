#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Conditional_Purchase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Conditional_Purchase.EventTracker_Conditional_Purchase_C
// 0x000C (0x0214 - 0x0208)
class UEventTracker_Conditional_Purchase_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                CashSpent;                                                // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Conditional_Purchase.EventTracker_Conditional_Purchase_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void MatchHAsEnded_Event();
	void OnShopItemPurchased(const struct FShopItem& ShopItem);
	void OnShopItemRefunded(const struct FShopItem& ShopItem);
	void ExecuteUbergraph_EventTracker_Conditional_Purchase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
