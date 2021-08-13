// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MainCharacterThreatComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__DeltaSeconds__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMainCharacterThreatComponent_C::ReceiveTick(float bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick");

	struct
	{
		float                          bpp__DeltaSeconds__pf;
	} params;

	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__Show__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMainCharacterThreatComponent_C::DebugThreatLevels(bool bpp__Show__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels");

	struct
	{
		bool                           bpp__Show__pf;
	} params;

	params.bpp__Show__pf = bpp__Show__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
