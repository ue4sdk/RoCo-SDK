#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_KillstreakLoadingScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class KillstreakLoadingScreen.KSLoadingScreenSettings
// 0x0078 (0x00B0 - 0x0038)
class UKSLoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             DefaultLoadingScreen;                                     // 0x0038(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             ThrobberPiece;                                            // 0x0050(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             HorizontalRule;                                           // 0x0068(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             HeadingFont;                                              // 0x0080(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             DefaultFont;                                              // 0x0098(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class KillstreakLoadingScreen.KSLoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
