// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_RechargeAbilitiesOnDownOtherModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C.OnDownOther
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AKSCharacter*            Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URechargeAbilitiesOnDownOtherModInst_C::OnDownOther(class AKSCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C.OnDownOther");

	struct
	{
		class AKSCharacter*            Other;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);
}


// Function RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C.ExecuteUbergraph_RechargeAbilitiesOnDownOtherModInst
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void URechargeAbilitiesOnDownOtherModInst_C::ExecuteUbergraph_RechargeAbilitiesOnDownOtherModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RechargeAbilitiesOnDownOtherModInst.RechargeAbilitiesOnDownOtherModInst_C.ExecuteUbergraph_RechargeAbilitiesOnDownOtherModInst");

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
