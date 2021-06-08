// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AdditionalAmmoModInst_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AdditionalAmmoModInst.AdditionalAmmoModInst_C.OnNewCharacter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAdditionalAmmoModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdditionalAmmoModInst.AdditionalAmmoModInst_C.OnNewCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AdditionalAmmoModInst.AdditionalAmmoModInst_C.ExecuteUbergraph_AdditionalAmmoModInst
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAdditionalAmmoModInst_C::ExecuteUbergraph_AdditionalAmmoModInst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdditionalAmmoModInst.AdditionalAmmoModInst_C.ExecuteUbergraph_AdditionalAmmoModInst");

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
