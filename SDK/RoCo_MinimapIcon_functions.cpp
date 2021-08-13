// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinimapIcon.MinimapIcon_C.SetupEnemyPing
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetupEnemyPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupEnemyPing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetupAlly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetupAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupAlly");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetupLocalPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetupLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupLocalPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetObjectiveIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetObjectiveIcon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.AllyStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapIcon_C::AllyStateChange(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.AllyStateChange");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.ObjectiveUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSObjectiveBase*        Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapIcon_C::ObjectiveUpdated(class AKSObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ObjectiveUpdated");

	struct
	{
		class AKSObjectiveBase*        Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetRelativeHeight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMiniMapRelativeHeight> RelativeHeight                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapIcon_C::SetRelativeHeight(TEnumAsByte<EMiniMapRelativeHeight> RelativeHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetRelativeHeight");

	struct
	{
		TEnumAsByte<EMiniMapRelativeHeight> RelativeHeight;
	} params;

	params.RelativeHeight = RelativeHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.ResetHeightIndicators
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::ResetHeightIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ResetHeightIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.OnLootSiteStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLootSiteState          State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMinimapIcon_C::OnLootSiteStateChanged(const struct FLootSiteState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.OnLootSiteStateChanged");

	struct
	{
		struct FLootSiteState          State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetupObjective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetupObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupObjective");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.SetupLootSite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::SetupLootSite()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupLootSite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimapIcon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.ExecuteUbergraph_MinimapIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapIcon_C::ExecuteUbergraph_MinimapIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ExecuteUbergraph_MinimapIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimapIcon.MinimapIcon_C.PingExpired__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            UniqueId                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMinimapIcon_C::PingExpired__DelegateSignature(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.PingExpired__DelegateSignature");

	struct
	{
		int                            UniqueId;
	} params;

	params.UniqueId = UniqueId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
