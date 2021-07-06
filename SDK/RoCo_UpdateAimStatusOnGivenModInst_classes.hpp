#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_UpdateAimStatusOnGivenModInst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C
// 0x0008 (0x01B0 - 0x01A8)
class UUpdateAimStatusOnGivenModInst_C : public UTemporaryEffectModInst_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass UpdateAimStatusOnGivenModInst.UpdateAimStatusOnGivenModInst_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnNewCharacter();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_UpdateAimStatusOnGivenModInst(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
