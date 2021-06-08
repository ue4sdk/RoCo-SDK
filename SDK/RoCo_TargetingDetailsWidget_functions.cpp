// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_TargetingDetailsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TargetingDetailsWidget.TargetingDetailsWidget_C.OnCurrentDistanceChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          NewDistance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTargetingDetailsWidget_C::OnCurrentDistanceChanged(float NewDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetingDetailsWidget.TargetingDetailsWidget_C.OnCurrentDistanceChanged");

	struct
	{
		float                          NewDistance;
	} params;

	params.NewDistance = NewDistance;

	UObject::ProcessEvent(fn, &params);
}


// Function TargetingDetailsWidget.TargetingDetailsWidget_C.ExecuteUbergraph_TargetingDetailsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTargetingDetailsWidget_C::ExecuteUbergraph_TargetingDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetingDetailsWidget.TargetingDetailsWidget_C.ExecuteUbergraph_TargetingDetailsWidget");

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
