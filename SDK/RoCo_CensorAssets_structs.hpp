#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"
#include "RoCo_Engine_classes.hpp"
#include "RoCo_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CensorAssets.CensorTableRow
// 0x0050 (0x0058 - 0x0008)
struct FCensorTableRow : public FTableRowBase
{
	TSoftObjectPtr<class UObject>                      CensoredAsset;                                            // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                      ReplacementAsset;                                         // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
