// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BrightLobbyHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyHeader_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget"));

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   FromRoute                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   ToRoute                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyHeader_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence"));

	struct
	{
		struct FName                   FromRoute;
		struct FName                   ToRoute;
	} params;

	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBrightLobbyHeader_C::HandleLobbyStartMenuInputAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPUMG_LoginState               LoginState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyHeader_C::HandleLoginStateChange(EPUMG_LoginState LoginState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange"));

	struct
	{
		EPUMG_LoginState               LoginState;
	} params;

	params.LoginState = LoginState;

	UObject::ProcessEvent(fn, &params);
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBrightLobbyHeader_C::ExecuteUbergraph_BrightLobbyHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader"));

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
