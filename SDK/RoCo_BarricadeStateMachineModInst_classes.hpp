#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BarricadeStateMachineModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarricadeStateMachineModInst.BarricadeStateMachineModInst_C
// 0x0008 (0x0518 - 0x0510)
class UBarricadeStateMachineModInst_C : public UKSModInst_ActivatedStateMachine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BarricadeStateMachineModInst.BarricadeStateMachineModInst_C");
		return ptr;
	}


	void OnNewCharacter();
	void ExecuteUbergraph_BarricadeStateMachineModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
