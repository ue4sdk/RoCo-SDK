#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Gunsmith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Gunsmith.EventTracker_Gunsmith_C
// 0x0010 (0x0218 - 0x0208)
class UEventTracker_Gunsmith_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                Primary2_PurchaseCount;                                   // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                Primary1_PurchaseCount;                                   // 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Gunsmith.EventTracker_Gunsmith_C");
		return ptr;
	}


	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void HandleLostPlayerController();
	void Handle_OnShopItemPurchase(const struct FShopItem& ShopItem);
	void ExecuteUbergraph_EventTracker_Gunsmith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
