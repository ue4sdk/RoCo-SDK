// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WingPack_WeaponComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WingPack_WeaponComponent.WingPack_WeaponComponent_C.OnInitialize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UWingPack_WeaponComponent_C::OnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WingPack_WeaponComponent.WingPack_WeaponComponent_C.OnInitialize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WingPack_WeaponComponent.WingPack_WeaponComponent_C.ExecuteUbergraph_WingPack_WeaponComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWingPack_WeaponComponent_C::ExecuteUbergraph_WingPack_WeaponComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WingPack_WeaponComponent.WingPack_WeaponComponent_C.ExecuteUbergraph_WingPack_WeaponComponent");

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
