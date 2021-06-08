#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WalkinSequence1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WalkinSequence1.SequenceDirector_C
// 0x0000 (0x0030 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WalkinSequence1.SequenceDirector_C");
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
