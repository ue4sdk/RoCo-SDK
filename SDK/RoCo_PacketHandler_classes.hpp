#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PacketHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                               // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
