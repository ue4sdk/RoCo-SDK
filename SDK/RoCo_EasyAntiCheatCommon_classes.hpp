#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EasyAntiCheatCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x00B8 - 0x00B0)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}


	void ServerMessage(TArray<unsigned char> Message);
	void ClientMessage(TArray<unsigned char> Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
