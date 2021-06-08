#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PlatformCommon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlatformCommon.PComGameEngine
// 0x0038 (0x0EE0 - 0x0EA8)
class UPComGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0EA8(0x0010) MISSED OFFSET
	bool                                               bRedirectLogsToConsole;                                   // 0x0EB8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0EB9(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformCommon.PComGameEngine");
		return ptr;
	}

};


// Class PlatformCommon.PCom_IpConnection
// 0x0008 (0x1B28 - 0x1B20)
class UPCom_IpConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1B20(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformCommon.PCom_IpConnection");
		return ptr;
	}

};


// Class PlatformCommon.PCom_LocalPlayer
// 0x0000 (0x0260 - 0x0260)
class UPCom_LocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformCommon.PCom_LocalPlayer");
		return ptr;
	}

};


// Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UPCom_UDPEncryptionHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory");
		return ptr;
	}

};


// Class PlatformCommon.PCom_SimpleTimecodeProvider
// 0x0010 (0x0040 - 0x0030)
class UPCom_SimpleTimecodeProvider : public UTimecodeProvider
{
public:
	struct FFrameRate                                  FrameRate;                                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class PlatformCommon.PCom_SimpleTimecodeProvider");
		return ptr;
	}


	void SetFrameRate(const struct FFrameRate& InFrameRate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
