// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_PickupNotify_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickupNotify.PickupNotify_C.Should Show Interaction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPickupNotify_C::Should_Show_Interaction(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Should Show Interaction");

	struct
	{
		bool                           Return_Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PickupNotify.PickupNotify_C.IsBombDropInteraction
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Interactable                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Return_Value                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPickupNotify_C::IsBombDropInteraction(class AActor* Interactable, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.IsBombDropInteraction");

	struct
	{
		class AActor*                  Interactable;
		bool                           Return_Value;
	} params;

	params.Interactable = Interactable;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PickupNotify.PickupNotify_C.BindInteractAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupNotify_C::BindInteractAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.BindInteractAction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.UnBindInteractAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupNotify_C::UnBindInteractAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.UnBindInteractAction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.SetItemIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::SetItemIcon(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.SetItemIcon");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.DisplayTimeRemaining
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::DisplayTimeRemaining(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.DisplayTimeRemaining");

	struct
	{
		float                          Seconds;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.OnSkydiveEarlyOutChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanRemove                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPickupNotify_C::OnSkydiveEarlyOutChanged(bool CanRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnSkydiveEarlyOutChanged");

	struct
	{
		bool                           CanRemove;
	} params;

	params.CanRemove = CanRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.Bind_PostButtonText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPickupNotify_C::Bind_PostButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_PostButtonText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.GetSplitPrompt
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 PreSplit                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// struct FString                 PostSplit                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::GetSplitPrompt(struct FString* PreSplit, struct FString* PostSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.GetSplitPrompt");

	struct
	{
		struct FString                 PreSplit;
		struct FString                 PostSplit;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PreSplit != nullptr)
		*PreSplit = params.PreSplit;
	if (PostSplit != nullptr)
		*PostSplit = params.PostSplit;
}


// Function PickupNotify.PickupNotify_C.Bind_PreButtonText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPickupNotify_C::Bind_PreButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_PreButtonText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.Bind_RootVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

ESlateVisibility UPickupNotify_C::Bind_RootVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_RootVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.OnHoveredInteractableChanged
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::OnHoveredInteractableChanged(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnHoveredInteractableChanged");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.Get Pickup Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPickupNotify_C::Get_Pickup_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Get Pickup Text");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.PreClearPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPickupNotify_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.PreClearPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.PostSetPawn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPickupNotify_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.PostSetPawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.InitializeWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APUMG_HUD*               HUD                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.InitializeWidget");

	struct
	{
		class APUMG_HUD*               HUD;
	} params;

	params.HUD = HUD;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.ModeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.ModeChange");

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPickupNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.HandleKillCamChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UPickupNotify_C::HandleKillCamChange(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.HandleKillCamChange");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.OnKeyBindSettingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   KeyBindName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::OnKeyBindSettingChanged(const struct FName& KeyBindName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnKeyBindSettingChanged");

	struct
	{
		struct FName                   KeyBindName;
	} params;

	params.KeyBindName = KeyBindName;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.StartInteract
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::StartInteract(class AActor* Target, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.StartInteract");

	struct
	{
		class AActor*                  Target;
		float                          Duration;
	} params;

	params.Target = Target;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.StartAction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   Prompt                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPickupNotify_C::StartAction(float Duration, const struct FText& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.StartAction");

	struct
	{
		float                          Duration;
		struct FText                   Prompt;
	} params;

	params.Duration = Duration;
	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.end
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPickupNotify_C::end()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.end");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.Handle Bomb State Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState     BombState                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void UPickupNotify_C::Handle_Bomb_State_Changed(const struct FKSNeutralBombState& BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Handle Bomb State Changed");

	struct
	{
		struct FKSNeutralBombState     BombState;
	} params;

	params.BombState = BombState;

	UObject::ProcessEvent(fn, &params);
}


// Function PickupNotify.PickupNotify_C.ExecuteUbergraph_PickupNotify
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UPickupNotify_C::ExecuteUbergraph_PickupNotify(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.ExecuteUbergraph_PickupNotify");

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
