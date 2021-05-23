#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacterThreatComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// 0x0090 (0x0228 - 0x0198)
class UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C
{
public:
	TMap<int, struct FLinearColor>                     DebugColorMap;                                            // 0x0198(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)
	bool                                               DebuggingVisuals;                                         // 0x01E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01E9(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x01EC(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x01FC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               K2Node_Event_Show;                                        // 0x0200(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_MakeStruct_LinearColor_2;                          // 0x0204(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                CallFunc_Map_Find_Value;                                  // 0x0214(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0224(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C"));
		return ptr;
	}


	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void DebugThreatLevels(bool bpp__Show__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
