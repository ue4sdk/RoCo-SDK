#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_Mantle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C
// 0x000C (0x0074 - 0x0068)
class UCamMod_Mantle_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                MantleIndex;                                              // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C");
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_Mantle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
