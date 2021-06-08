// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RestartRegenOnReviveOtherModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C.OnReviveOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          Reviver                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AKSPlayerState*          Revivee                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URestartRegenOnReviveOtherModInst_C::OnReviveOther(class AKSPlayerState* Reviver, class AKSPlayerState* Revivee)
{
	static auto fn = UObject::FindObject<UFunction>("Function RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C.OnReviveOther");

	struct
	{
		class AKSPlayerState*          Reviver;
		class AKSPlayerState*          Revivee;
	} params;

	params.Reviver = Reviver;
	params.Revivee = Revivee;

	UObject::ProcessEvent(fn, &params);
}


// Function RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C.ExecuteUbergraph_RestartRegenOnReviveOtherModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URestartRegenOnReviveOtherModInst_C::ExecuteUbergraph_RestartRegenOnReviveOtherModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RestartRegenOnReviveOtherModInst.RestartRegenOnReviveOtherModInst_C.ExecuteUbergraph_RestartRegenOnReviveOtherModInst");

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
