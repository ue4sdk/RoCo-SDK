#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_CamMod_JumpStart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C
// 0x0008 (0x0070 - 0x0068)
class UCamMod_JumpStart_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C"));
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_JumpStart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
