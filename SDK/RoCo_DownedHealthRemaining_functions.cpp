// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_DownedHealthRemaining_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DownedHealthRemaining.DownedHealthRemaining_C.Unbind Player State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::Unbind_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Unbind Player State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.StatusTextBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UDownedHealthRemaining_C::StatusTextBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.StatusTextBind");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.OverallColorBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

struct FLinearColor UDownedHealthRemaining_C::OverallColorBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.OverallColorBind");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.BarPercentBind
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UDownedHealthRemaining_C::BarPercentBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.BarPercentBind");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Give Up Timer Active
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bActive                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDownedHealthRemaining_C::Handle_Give_Up_Timer_Active(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Give Up Timer Active");

	struct
	{
		bool                           bActive;
	} params;

	params.bActive = bActive;

	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDownedHealthRemaining_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.DownStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDownedHealthRemaining_C::DownStateChanged(class AKSPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.DownStateChanged");

	struct
	{
		class AKSPlayerState*          PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.FadedOutFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::FadedOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.FadedOutFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDownedHealthRemaining_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UDownedHealthRemaining_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.On Character Give Up Allowed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Allowed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UDownedHealthRemaining_C::On_Character_Give_Up_Allowed(bool Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.On Character Give Up Allowed");

	struct
	{
		bool                           Allowed;
	} params;

	params.Allowed = Allowed;

	UObject::ProcessEvent(fn, &params);
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.ExecuteUbergraph_DownedHealthRemaining
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UDownedHealthRemaining_C::ExecuteUbergraph_DownedHealthRemaining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.ExecuteUbergraph_DownedHealthRemaining");

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
