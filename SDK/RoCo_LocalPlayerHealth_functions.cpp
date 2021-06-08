// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LocalPlayerHealth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocalPlayerHealth.LocalPlayerHealth_C.CheckMods
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AKSPlayerState*          ViewedPawnPlayerState          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::CheckMods(class AKSPlayerState* ViewedPawnPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.CheckMods");

	struct
	{
		class AKSPlayerState*          ViewedPawnPlayerState;
	} params;

	params.ViewedPawnPlayerState = ViewedPawnPlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.ResetVisbility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::ResetVisbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.ResetVisbility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.TriggerFadeAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::TriggerFadeAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.TriggerFadeAnim");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnOverhealChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          OldOverheal                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NewOverheal                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bAnimatedChange                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ULocalPlayerHealth_C::OnOverhealChanged(float OldOverheal, float NewOverheal, bool bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnOverhealChanged");

	struct
	{
		float                          OldOverheal;
		float                          NewOverheal;
		bool                           bAnimatedChange;
	} params;

	params.OldOverheal = OldOverheal;
	params.NewOverheal = NewOverheal;
	params.bAnimatedChange = bAnimatedChange;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.View_OnDeathStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::View_OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.View_OnDeathStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthMeterStateChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::OnHealthMeterStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthMeterStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.SetHealthText
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::SetHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.SetHealthText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnJobChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UKSJobItem*              Job                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::OnJobChanged(class UKSJobItem* Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnJobChanged");

	struct
	{
		class UKSJobItem*              Job;
	} params;

	params.Job = Job;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthDecreased
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::OnHealthDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnHealthDecreased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnModAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerMod*            Mod                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPlayerModInstance*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::OnModAdded(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnModAdded");

	struct
	{
		class UKSPlayerMod*            Mod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.Mod = Mod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.OnModRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UKSPlayerMod*            Mod                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UKSPlayerModInstance*    ModInstance                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::OnModRemoved(class UKSPlayerMod* Mod, class UKSPlayerModInstance* ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.OnModRemoved");

	struct
	{
		class UKSPlayerMod*            Mod;
		class UKSPlayerModInstance*    ModInstance;
	} params;

	params.Mod = Mod;
	params.ModInstance = ModInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.PostSetPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.PreClearPlayerState
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ULocalPlayerHealth_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.PreClearPlayerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LocalPlayerHealth.LocalPlayerHealth_C.ExecuteUbergraph_LocalPlayerHealth
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ULocalPlayerHealth_C::ExecuteUbergraph_LocalPlayerHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalPlayerHealth.LocalPlayerHealth_C.ExecuteUbergraph_LocalPlayerHealth");

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
