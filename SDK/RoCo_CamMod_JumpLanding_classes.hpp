#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_JumpLanding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C
// 0x0009 (0x0071 - 0x0068)
class UCamMod_JumpLanding_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               WasJumping;                                               // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C"));
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void OnCamModFinished();
	void ExecuteUbergraph_CamMod_JumpLanding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
