#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_WaitForPlayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_WaitForPlayers.WBP_WaitForPlayers_C
// 0x0018 (0x0518 - 0x0500)
class UWBP_WaitForPlayers_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      background;                                               // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ThrobberShield_C*                       WBP_ThrobberShield;                                       // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_WaitForPlayers.WBP_WaitForPlayers_C");
		return ptr;
	}


	void Construct();
	void HandlePhaseChange(const struct FMatchPhase& NewPhase, const struct FMatchPhase& PreviousPhase);
	void ExecuteUbergraph_WBP_WaitForPlayers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
