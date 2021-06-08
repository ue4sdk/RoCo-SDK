#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DefaultEnvironmentListener_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C
// 0x0060 (0x0128 - 0x00C8)
class UDefaultEnvironmentListener_C : public UEnvironmentListenerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       LevelStateGroup;                                          // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TMap<struct FString, struct FName>                 LevelToStateGroupMap;                                     // 0x00D8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C");
		return ptr;
	}


	void OnEnvironmentChanged(const struct FName& OldEnvironmentTag);
	void Print_State(bool Print_to_Screen, bool Print_to_Log, const struct FLinearColor& Text_Color, float Duration);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DefaultEnvironmentListener(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
