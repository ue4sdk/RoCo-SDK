#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SimpleEmoteCosmetic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SimpleEmoteCosmetic.SimpleEmoteCosmetic_C
// 0x000C (0x029C - 0x0290)
class USimpleEmoteCosmetic_C : public UKSEmoteCosmeticComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                MaxNumberOfProps;                                         // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SimpleEmoteCosmetic.SimpleEmoteCosmetic_C");
		return ptr;
	}


	void BlueprintPlayEmote();
	void BlueprintInterruptEmote(EKSRadialMenuItemInterruptReason Reason);
	void ExecuteUbergraph_SimpleEmoteCosmetic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
