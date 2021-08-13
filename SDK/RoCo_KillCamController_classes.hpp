#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KillCamController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KillCamController.KillCamController_C
// 0x0008 (0x0EF0 - 0x0EE8)
class AKillCamController_C : public AKSKillCamController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EE8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass KillCamController.KillCamController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_KillCamController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
