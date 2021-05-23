// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_NameplateWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NameplateWidget.NameplateWidget_C.Unbind Events From PlayerState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::Unbind_Events_From_PlayerState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Unbind Events From PlayerState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__ShouldShow__pf            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::Should_Show_Enemy_Nameplate(bool* bpp__ShouldShow__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate"));

	struct
	{
		bool                           bpp__ShouldShow__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__ShouldShow__pf != nullptr)
		*bpp__ShouldShow__pf = params.bpp__ShouldShow__pf;
}


// Function NameplateWidget.NameplateWidget_C.SetObjectiveMarkerFromGameState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__ShowObjective__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTexture2D*              bpp__ObjectiveIcon__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__ForceAlways__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::SetObjectiveMarkerFromGameState(bool bpp__ShowObjective__pf, class UTexture2D* bpp__ObjectiveIcon__pf, bool bpp__ForceAlways__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.SetObjectiveMarkerFromGameState"));

	struct
	{
		bool                           bpp__ShowObjective__pf;
		class UTexture2D*              bpp__ObjectiveIcon__pf;
		bool                           bpp__ForceAlways__pf;
	} params;

	params.bpp__ShowObjective__pf = bpp__ShowObjective__pf;
	params.bpp__ObjectiveIcon__pf = bpp__ObjectiveIcon__pf;
	params.bpp__ForceAlways__pf = bpp__ForceAlways__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.SetNamePlateColor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerxState__pfT         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::SetNamePlateColor(class AKSPlayerState* bpp__PlayerxState__pfT)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.SetNamePlateColor"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerxState__pfT;
	} params;

	params.bpp__PlayerxState__pfT = bpp__PlayerxState__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Player Is Blinded
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__IsxBlind__pfT             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::Player_Is_Blinded(bool* bpp__IsxBlind__pfT)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Player Is Blinded"));

	struct
	{
		bool                           bpp__IsxBlind__pfT;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__IsxBlind__pfT != nullptr)
		*bpp__IsxBlind__pfT = params.bpp__IsxBlind__pfT;
}


// Function NameplateWidget.NameplateWidget_C.OnUnhovered
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnUnhovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnPossession
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerState*            bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSCharacter*            bpp__Character__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPossession(class APlayerState* bpp__PlayerState__pf, class AKSCharacter* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnPossession"));

	struct
	{
		class APlayerState*            bpp__PlayerState__pf;
		class AKSCharacter*            bpp__Character__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPlayerUINeedsUpdate(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPlayerDownedChanged_Event(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnModRemoved
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerMod*            bpp__Mod__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    bpp__ModInstance__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnModRemoved(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnModRemoved"));

	struct
	{
		class UKSPlayerMod*            bpp__Mod__pf;
		class UKSPlayerModInstance*    bpp__ModInstance__pf;
	} params;

	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnModAdded
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerMod*            bpp__Mod__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    bpp__ModInstance__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnModAdded(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnModAdded"));

	struct
	{
		class UKSPlayerMod*            bpp__Mod__pf;
		class UKSPlayerModInstance*    bpp__ModInstance__pf;
	} params;

	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnLoaded_F5BCD8C84871643FB2979DA9F519484F
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 bpp__Loaded__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnLoaded_F5BCD8C84871643FB2979DA9F519484F(class UObject* bpp__Loaded__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnLoaded_F5BCD8C84871643FB2979DA9F519484F"));

	struct
	{
		class UObject*                 bpp__Loaded__pf;
	} params;

	params.bpp__Loaded__pf = bpp__Loaded__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsEnabled__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnKillCamEnabled(bool bpp__IsEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled"));

	struct
	{
		bool                           bpp__IsEnabled__pf;
	} params;

	params.bpp__IsEnabled__pf = bpp__IsEnabled__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnHovered
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnHovered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.OnDead
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnDead(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.OnDead"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Manual Tick
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::Manual_Tick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Manual Tick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf__const      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::Handle_Overheal_Changed(class AKSCharacterBase* bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed"));

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf__const;
	} params;

	params.bpp__Character__pf__const = bpp__Character__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Handle Job Changed
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::Handle_Job_Changed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Handle Job Changed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.HandleObjectiveStateChanged
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UKSObjective> bpp__Objective__pf             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::HandleObjectiveStateChanged(const TScriptInterface<class UKSObjective>& bpp__Objective__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.HandleObjectiveStateChanged"));

	struct
	{
		TScriptInterface<class UKSObjective> bpp__Objective__pf;
	} params;

	params.bpp__Objective__pf = bpp__Objective__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.HandleNameChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__InKSPlayerState__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::HandleNameChanged(class AKSPlayerState* bpp__InKSPlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.HandleNameChanged"));

	struct
	{
		class AKSPlayerState*          bpp__InKSPlayerState__pf;
	} params;

	params.bpp__InKSPlayerState__pf = bpp__InKSPlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.HandleModActivationChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSPlayerMod_Activated*  bpp__ActivatedxMod__pfT        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Active__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::HandleModActivationChanged(class UKSPlayerMod_Activated* bpp__ActivatedxMod__pfT, bool bpp__Active__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.HandleModActivationChanged"));

	struct
	{
		class UKSPlayerMod_Activated*  bpp__ActivatedxMod__pfT;
		bool                           bpp__Active__pf;
	} params;

	params.bpp__ActivatedxMod__pfT = bpp__ActivatedxMod__pfT;
	params.bpp__Active__pf = bpp__Active__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveChanged
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UKSObjective> bpp__GameObjective__pf         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::HandleGameObjectiveChanged(const TScriptInterface<class UKSObjective>& bpp__GameObjective__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.HandleGameObjectiveChanged"));

	struct
	{
		TScriptInterface<class UKSObjective> bpp__GameObjective__pf;
	} params;

	params.bpp__GameObjective__pf = bpp__GameObjective__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_8
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::ExecuteUbergraph_NameplateWidget_8(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_8"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_15
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::ExecuteUbergraph_NameplateWidget_15(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_15"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UNameplateWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Destruct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNameplateWidget_C::Deferred_Player_State_Open()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Deferred Player State Open"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UNameplateWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.CheckMods
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::CheckMods(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.CheckMods"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf__const      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::CharacterHealthChange(class AKSCharacterBase* bpp__Character__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function NameplateWidget.NameplateWidget_C.CharacterHealthChange"));

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf__const;
	} params;

	params.bpp__Character__pf__const = bpp__Character__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnUIRelevantPlayerStateChanged__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerModActivationChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerMod_Activated*  bpp__ActivatedMod__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__Active__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPlayerModActivationChange__DelegateSignature(class UKSPlayerMod_Activated* bpp__ActivatedMod__pf, bool bpp__Active__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerModActivationChange__DelegateSignature"));

	struct
	{
		class UKSPlayerMod_Activated*  bpp__ActivatedMod__pf;
		bool                           bpp__Active__pf;
	} params;

	params.bpp__ActivatedMod__pf = bpp__ActivatedMod__pf;
	params.bpp__Active__pf = bpp__Active__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPlayerEliminated__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__PlayerState__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnPlayerDownedChanged__DelegateSignature(class AKSPlayerState* bpp__PlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature"));

	struct
	{
		class AKSPlayerState*          bpp__PlayerState__pf;
	} params;

	params.bpp__PlayerState__pf = bpp__PlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnModRemoved__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerMod*            bpp__Mod__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    bpp__ModInstance__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnModRemoved__DelegateSignature(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnModRemoved__DelegateSignature"));

	struct
	{
		class UKSPlayerMod*            bpp__Mod__pf;
		class UKSPlayerModInstance*    bpp__ModInstance__pf;
	} params;

	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnModAdded__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UKSPlayerMod*            bpp__Mod__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSPlayerModInstance*    bpp__ModInstance__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnModAdded__DelegateSignature(class UKSPlayerMod* bpp__Mod__pf, class UKSPlayerModInstance* bpp__ModInstance__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnModAdded__DelegateSignature"));

	struct
	{
		class UKSPlayerMod*            bpp__Mod__pf;
		class UKSPlayerModInstance*    bpp__ModInstance__pf;
	} params;

	params.bpp__Mod__pf = bpp__Mod__pf;
	params.bpp__ModInstance__pf = bpp__ModInstance__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateTeamChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__KSPlayerState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnKSPlayerStateTeamChanged__DelegateSignature(class AKSPlayerState* bpp__KSPlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateTeamChanged__DelegateSignature"));

	struct
	{
		class AKSPlayerState*          bpp__KSPlayerState__pf;
	} params;

	params.bpp__KSPlayerState__pf = bpp__KSPlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSPlayerState*          bpp__KSPlayerState__pf         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnKSPlayerStateNameChanged__DelegateSignature(class AKSPlayerState* bpp__KSPlayerState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature"));

	struct
	{
		class AKSPlayerState*          bpp__KSPlayerState__pf;
	} params;

	params.bpp__KSPlayerState__pf = bpp__KSPlayerState__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__bEnabled__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnKillCamEnabled__DelegateSignature(bool bpp__bEnabled__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature"));

	struct
	{
		bool                           bpp__bEnabled__pf;
	} params;

	params.bpp__bEnabled__pf = bpp__bEnabled__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UNameplateWidget_C::OnJobChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class AKSCharacterBase*        bpp__Character__pf             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase* bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature"));

	struct
	{
		class AKSCharacterBase*        bpp__Character__pf;
	} params;

	params.bpp__Character__pf = bpp__Character__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction NameplateWidget.NameplateWidget_C.OnGameObjectiveChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TScriptInterface<class UKSObjective> bpp__GameObjective__pf         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UNameplateWidget_C::OnGameObjectiveChanged__DelegateSignature(const TScriptInterface<class UKSObjective>& bpp__GameObjective__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction NameplateWidget.NameplateWidget_C.OnGameObjectiveChanged__DelegateSignature"));

	struct
	{
		TScriptInterface<class UKSObjective> bpp__GameObjective__pf;
	} params;

	params.bpp__GameObjective__pf = bpp__GameObjective__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
