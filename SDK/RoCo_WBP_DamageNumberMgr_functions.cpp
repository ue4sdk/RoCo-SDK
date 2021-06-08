// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_DamageNumberMgr_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.GetDamageNumberWidgetInstance
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDamageNumberDisplayWidget* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UDamageNumberDisplayWidget* UWBP_DamageNumberMgr_C::GetDamageNumberWidgetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.GetDamageNumberWidgetInstance");

	struct
	{
		class UDamageNumberDisplayWidget* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DamageNumberMgr_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.ExecuteUbergraph_WBP_DamageNumberMgr
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DamageNumberMgr_C::ExecuteUbergraph_WBP_DamageNumberMgr(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DamageNumberMgr.WBP_DamageNumberMgr_C.ExecuteUbergraph_WBP_DamageNumberMgr");

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
