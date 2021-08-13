// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealOtherOnReviveOtherModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C.OnReviveOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealOtherOnReviveOtherModInst_C::OnReviveOther(class AKSPlayerState* Reviver, class AKSPlayerState* Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C.OnReviveOther");

	struct
	{
		class AKSPlayerState*          Reviver;
		class AKSPlayerState*          Revivee;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;

	UObject::ProcessEvent(fn, &params);
}


// Function HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C.ExecuteUbergraph_HealOtherOnReviveOtherModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealOtherOnReviveOtherModInst_C::ExecuteUbergraph_HealOtherOnReviveOtherModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealOtherOnReviveOtherModInst.HealOtherOnReviveOtherModInst_C.ExecuteUbergraph_HealOtherOnReviveOtherModInst");

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
