// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_FlashBangEffectModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FlashBangEffectModInst.FlashBangEffectModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFlashBangEffectModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangEffectModInst.FlashBangEffectModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FlashBangEffectModInst.FlashBangEffectModInst_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashBangEffectModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangEffectModInst.FlashBangEffectModInst_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function FlashBangEffectModInst.FlashBangEffectModInst_C.ExecuteUbergraph_FlashBangEffectModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UFlashBangEffectModInst_C::ExecuteUbergraph_FlashBangEffectModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlashBangEffectModInst.FlashBangEffectModInst_C.ExecuteUbergraph_FlashBangEffectModInst");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
