// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_KSObjectiveComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_KSObjectiveComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleOnHUDReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_KSObjectiveComponent_C::HandleOnHUDReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleOnHUDReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleGameModeWidgetSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             GameModeWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KSObjectiveComponent_C::HandleGameModeWidgetSet(class UUserWidget* GameModeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleGameModeWidgetSet");

	struct
	{
		class UUserWidget*             GameModeWidget;
	} params;

	params.GameModeWidget = GameModeWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleMarkerAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSMapIconWidgetBase*    Marker                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KSObjectiveComponent_C::HandleMarkerAdded(class UKSMapIconWidgetBase* Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.HandleMarkerAdded");

	struct
	{
		class UKSMapIconWidgetBase*    Marker;
	} params;

	params.Marker = Marker;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.ExecuteUbergraph_BP_KSObjectiveComponent
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBP_KSObjectiveComponent_C::ExecuteUbergraph_BP_KSObjectiveComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KSObjectiveComponent.BP_KSObjectiveComponent_C.ExecuteUbergraph_BP_KSObjectiveComponent");

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
