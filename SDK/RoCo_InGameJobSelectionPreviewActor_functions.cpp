// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_InGameJobSelectionPreviewActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PlayCharacterLoadSFX
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::PlayCharacterLoadSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PlayCharacterLoadSFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.BlueprintStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// EKSJobSelectPreviewLoadState   PreviousState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInGameJobSelectionPreviewActor_C::BlueprintStateChanged(EKSJobSelectPreviewLoadState PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.BlueprintStateChanged");

	struct
	{
		EKSJobSelectPreviewLoadState   PreviousState;
	} params;

	params.PreviousState = PreviousState;

	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Stop Materializer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Force_End_FXs                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInGameJobSelectionPreviewActor_C::Stop_Materializer(bool Force_End_FXs)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Stop Materializer");

	struct
	{
		bool                           Force_End_FXs;
	} params;

	params.Force_End_FXs = Force_End_FXs;

	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Start Materializer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::Start_Materializer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Start Materializer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PostLobbyCharacterSpawned
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::PostLobbyCharacterSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PostLobbyCharacterSpawned");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Lobby Character Visibility Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AInGameJobSelectionPreviewActor_C::Lobby_Character_Visibility_Changed(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Lobby Character Visibility Changed");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PreLobbyCharacterDestroy
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::PreLobbyCharacterDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.PreLobbyCharacterDestroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Update Materializer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::Update_Materializer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.Update Materializer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.ExecuteUbergraph_InGameJobSelectionPreviewActor
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AInGameJobSelectionPreviewActor_C::ExecuteUbergraph_InGameJobSelectionPreviewActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.ExecuteUbergraph_InGameJobSelectionPreviewActor");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.OnLobbyCharacterSpawned__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::OnLobbyCharacterSpawned__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.OnLobbyCharacterSpawned__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.OnLobbyCharacterUpdated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AInGameJobSelectionPreviewActor_C::OnLobbyCharacterUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameJobSelectionPreviewActor.InGameJobSelectionPreviewActor_C.OnLobbyCharacterUpdated__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
