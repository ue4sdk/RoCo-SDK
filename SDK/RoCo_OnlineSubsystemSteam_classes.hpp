#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_OnlineSubsystemSteam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// 0x0000 (0x0028 - 0x0028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x1B28 - 0x1B20)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x1B20(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1B21(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0008 (0x07E8 - 0x07E0)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
