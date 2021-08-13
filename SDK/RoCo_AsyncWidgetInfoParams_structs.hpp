#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AsyncWidgetInfoParams.AsyncWidgetInfoParams
// 0x0040
struct FAsyncWidgetInfoParams
{
	TSoftObjectPtr<class UClass>                       UserWidgetClass_2_9069E8704905834356F9E38E08D51BF1;       // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ParentWidgetName_5_E592578E4CB7445E7A8364834A8EDD77;      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class AKSWidgetInfoActor*                          WidgetInfoActor_9_3B7896EF4E8FD3533F260AACB9FA5E99;       // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
