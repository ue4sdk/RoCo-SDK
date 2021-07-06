#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PaddedStepsModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PaddedStepsModInst.PaddedStepsModInst_C
// 0x0008 (0x01B0 - 0x01A8)
class UPaddedStepsModInst_C : public UTemporaryEffectModInst_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PaddedStepsModInst.PaddedStepsModInst_C");
		return ptr;
	}


	void OnNewCharacter();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_PaddedStepsModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
