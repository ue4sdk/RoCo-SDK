// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HealSelfOnReviveOtherModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.OnReviveOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealSelfOnReviveOtherModInst_C::OnReviveOther(class AKSPlayerState* Reviver, class AKSPlayerState* Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.OnReviveOther");

	struct
	{
		class AKSPlayerState*          Reviver;
		class AKSPlayerState*          Revivee;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;

	UObject::ProcessEvent(fn, &params);
}


// Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.PlayFX
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHealSelfOnReviveOtherModInst_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.PlayFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.ExecuteUbergraph_HealSelfOnReviveOtherModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UHealSelfOnReviveOtherModInst_C::ExecuteUbergraph_HealSelfOnReviveOtherModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealSelfOnReviveOtherModInst.HealSelfOnReviveOtherModInst_C.ExecuteUbergraph_HealSelfOnReviveOtherModInst");

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
