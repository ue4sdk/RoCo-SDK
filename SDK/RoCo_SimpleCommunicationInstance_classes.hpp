#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SimpleCommunicationInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SimpleCommunicationInstance.SimpleCommunicationInstance_C
// 0x0000 (0x02C8 - 0x02C8)
class ASimpleCommunicationInstance_C : public AKSCommunicationInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SimpleCommunicationInstance.SimpleCommunicationInstance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
