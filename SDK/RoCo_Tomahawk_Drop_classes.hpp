#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Tomahawk_Drop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tomahawk_Drop.Tomahawk_Drop_C
// 0x0009 (0x0851 - 0x0848)
class ATomahawk_Drop_C : public AKSMeleeWeaponAssetDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0848(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               Stuck;                                                    // 0x0850(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tomahawk_Drop.Tomahawk_Drop_C");
		return ptr;
	}


	void SetStuck();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_Tomahawk_Drop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
