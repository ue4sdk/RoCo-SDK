// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AllyFullMapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldPosition
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FVector UAllyFullMapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldPosition");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldYaw
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UAllyFullMapIcon_C::GetWorldYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldYaw");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.ShouldUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UAllyFullMapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.ShouldUpdate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAllyFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.Ally State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAllyFullMapIcon_C::Ally_State(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.Ally State");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.HandleMapIconWidgetReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAllyFullMapIcon_C::HandleMapIconWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.HandleMapIconWidgetReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyFullMapIcon.AllyFullMapIcon_C.ExecuteUbergraph_AllyFullMapIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAllyFullMapIcon_C::ExecuteUbergraph_AllyFullMapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyFullMapIcon.AllyFullMapIcon_C.ExecuteUbergraph_AllyFullMapIcon");

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
