// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LobbyAnnouncer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyAnnouncer_C::OnLoadingScreenEnded()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ALobbyAnnouncer_C::OnLobbyWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ALobbyAnnouncer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   CurrentRoute                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   NextRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EViewManagerLayer              Layer                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyAnnouncer_C::OnViewStateChangedStarted(const struct FName& CurrentRoute, const struct FName& NextRoute, EViewManagerLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted"));

	struct
	{
		struct FName                   CurrentRoute;
		struct FName                   NextRoute;
		EViewManagerLayer              Layer;
	} params;

	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyAnnouncer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ALobbyAnnouncer_C::EventQueueInGame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ALobbyAnnouncer_C::ExecuteUbergraph_LobbyAnnouncer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer"));

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
