#pragma once

// Rogue Company (0.59) SDK

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
// 0x0008 (0x0E68 - 0x0E60)
class AKillCamController_C : public AKSKillCamController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

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
