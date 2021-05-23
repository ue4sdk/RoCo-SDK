#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BrightLobbyHeader_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// 0x0028 (0x0508 - 0x04E0)
class UBrightLobbyHeader_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UNewMenuMain_C*                              NewMenuMain;                                              // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<EPUMG_LoginState>                           LoggedOutStates;                                          // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                         // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C"));
		return ptr;
	}


	void InitializeWidget(class APUMG_HUD* HUD);
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void HandleLobbyStartMenuInputAction();
	void HandleLoginStateChange(EPUMG_LoginState LoginState);
	void ExecuteUbergraph_BrightLobbyHeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
