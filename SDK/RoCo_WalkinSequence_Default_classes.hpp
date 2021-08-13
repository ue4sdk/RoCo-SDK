#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WalkinSequence_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WalkinSequence_Default.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FName                                       StreamingLevelName;                                       // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WalkinSequence_Default.SequenceDirector_C");
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTSequenceDirector_3();
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void OnEnableSlomo(bool bEnableSlomo);
	void SequenceEvent_5();
	void SequenceEvent_4();
	void SequenceEvent_3();
	void SequenceEvent_2();
	void Sequence_Event_0();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
