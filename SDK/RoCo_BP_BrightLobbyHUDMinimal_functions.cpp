// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_BrightLobbyHUDMinimal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUDMinimal_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallRemoveTopViewRoute");

	struct
	{
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


// Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   RouteName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ClearRouteStack                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ForceTransition                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           ViewChanged                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_BrightLobbyHUDMinimal_C::CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C.CallAddViewRoute");

	struct
	{
		struct FName                   RouteName;
		bool                           ClearRouteStack;
		bool                           ForceTransition;
		bool                           ViewChanged;
	} params;

	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	UObject::ProcessEvent(fn, &params);

	if (ViewChanged != nullptr)
		*ViewChanged = params.ViewChanged;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
