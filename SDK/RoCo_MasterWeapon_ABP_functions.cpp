// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_MasterWeapon_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            bpp__ShellIndex__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__NewxVisibility__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::UpdateUnspentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateUnspentShellVisibility");

	struct
	{
		int                            bpp__ShellIndex__pf;
		bool                           bpp__NewxVisibility__pfT;
	} params;

	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            bpp__ShellIndex__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__NewxVisibility__pfT       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::UpdateSpentShellVisibility(int bpp__ShellIndex__pf, bool bpp__NewxVisibility__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.UpdateSpentShellVisibility");

	struct
	{
		int                            bpp__ShellIndex__pf;
		bool                           bpp__NewxVisibility__pfT;
	} params;

	params.bpp__ShellIndex__pf = bpp__ShellIndex__pf;
	params.bpp__NewxVisibility__pfT = bpp__NewxVisibility__pfT;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__NewxIsxMultixStagexReload__pfTTTT (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::Set_Multi_Stage_Reload(bool bpp__NewxIsxMultixStagexReload__pfTTTT)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.Set Multi Stage Reload");

	struct
	{
		bool                           bpp__NewxIsxMultixStagexReload__pfTTTT;
	} params;

	params.bpp__NewxIsxMultixStagexReload__pfTTTT = bpp__NewxIsxMultixStagexReload__pfTTTT;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetWeaponState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UKSWeaponComponent*      bpp__OwningWeaponComponent__pf (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponStateNew                bpp__OldState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EWeaponStateNew                bpp__NewState__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::SetWeaponState(class UKSWeaponComponent* bpp__OwningWeaponComponent__pf, EWeaponStateNew bpp__OldState__pf, EWeaponStateNew bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetWeaponState");

	struct
	{
		class UKSWeaponComponent*      bpp__OwningWeaponComponent__pf;
		EWeaponStateNew                bpp__OldState__pf;
		EWeaponStateNew                bpp__NewState__pf;
	} params;

	params.bpp__OwningWeaponComponent__pf = bpp__OwningWeaponComponent__pf;
	params.bpp__OldState__pf = bpp__OldState__pf;
	params.bpp__NewState__pf = bpp__NewState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetShieldActive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bIsShieldActive__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::SetShieldActive(bool bpp__bIsShieldActive__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetShieldActive");

	struct
	{
		bool                           bpp__bIsShieldActive__pf;
	} params;

	params.bpp__bIsShieldActive__pf = bpp__bIsShieldActive__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetScopeScaleAlpha
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__NewAlpha__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::SetScopeScaleAlpha(float bpp__NewAlpha__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetScopeScaleAlpha");

	struct
	{
		float                          bpp__NewAlpha__pf;
	} params;

	params.bpp__NewAlpha__pf = bpp__NewAlpha__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetRevolverChamberRotatae
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                bpp__NewRevolverChamberRot__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::SetRevolverChamberRotatae(const struct FRotator& bpp__NewRevolverChamberRot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.SetRevolverChamberRotatae");

	struct
	{
		struct FRotator                bpp__NewRevolverChamberRot__pf;
	} params;

	params.bpp__NewRevolverChamberRot__pf = bpp__NewRevolverChamberRot__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetWeaponState
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EWeaponStateNew                bpp__NewWeaponState__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::InitSetWeaponState(EWeaponStateNew bpp__NewWeaponState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetWeaponState");

	struct
	{
		EWeaponStateNew                bpp__NewWeaponState__pf;
	} params;

	params.bpp__NewWeaponState__pf = bpp__NewWeaponState__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetUseWeaponAdditive
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bUseAdditive__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::InitSetUseWeaponAdditive(bool bpp__bUseAdditive__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetUseWeaponAdditive");

	struct
	{
		bool                           bpp__bUseAdditive__pf;
	} params;

	params.bpp__bUseAdditive__pf = bpp__bUseAdditive__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetScopeMeshScale
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__NewAlpha__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bIsRevolver__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__bIsMultiStageReload__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::InitSetScopeMeshScale(float bpp__NewAlpha__pf, bool bpp__bIsRevolver__pf, bool bpp__bIsMultiStageReload__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetScopeMeshScale");

	struct
	{
		float                          bpp__NewAlpha__pf;
		bool                           bpp__bIsRevolver__pf;
		bool                           bpp__bIsMultiStageReload__pf;
	} params;

	params.bpp__NewAlpha__pf = bpp__NewAlpha__pf;
	params.bpp__bIsRevolver__pf = bpp__bIsRevolver__pf;
	params.bpp__bIsMultiStageReload__pf = bpp__bIsMultiStageReload__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetHideMagazine
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__HideMagazineAlpha__pf     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::InitSetHideMagazine(float bpp__HideMagazineAlpha__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetHideMagazine");

	struct
	{
		float                          bpp__HideMagazineAlpha__pf;
	} params;

	params.bpp__HideMagazineAlpha__pf = bpp__HideMagazineAlpha__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetFoldingStock
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__bIsStockFolded__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                bpp__StockRotationTarget__pf   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FRotator                bpp__StockAltRotationTarget__pf (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::InitSetFoldingStock(bool bpp__bIsStockFolded__pf, const struct FRotator& bpp__StockRotationTarget__pf, const struct FRotator& bpp__StockAltRotationTarget__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.InitSetFoldingStock");

	struct
	{
		bool                           bpp__bIsStockFolded__pf;
		struct FRotator                bpp__StockRotationTarget__pf;
		struct FRotator                bpp__StockAltRotationTarget__pf;
	} params;

	params.bpp__bIsStockFolded__pf = bpp__bIsStockFolded__pf;
	params.bpp__StockRotationTarget__pf = bpp__StockRotationTarget__pf;
	params.bpp__StockAltRotationTarget__pf = bpp__StockAltRotationTarget__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3
// (FUNC_Native, FUNC_Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_C81FAA1C43A50F58E2735BA1DAFCEAC3");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A
// (FUNC_Native, FUNC_Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_TransitionResult_611B83614EC94B902AE59986EF3BC03A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44
// (FUNC_Native, FUNC_Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_ModifyBone_52465FEA4D6701EB8BD2D5B0FF7D5E44");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674
// (FUNC_Native, FUNC_Public)

void UMasterWeapon_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MasterWeapon_ABP_AnimGraphNode_BlendListByBool_8D407D3B4E9DF8DEBA89FBB2A5413674");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMasterWeapon_ABP_C::AnimNotify_Unhide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Unhide Mag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMasterWeapon_ABP_C::AnimNotify_Hide_Mag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimNotify_Hide Mag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPoseLink               bpp__AnimGraph__pf             (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMasterWeapon_ABP_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWeapon_ABP.MasterWeapon_ABP_C.AnimGraph");

	struct
	{
		struct FPoseLink               bpp__AnimGraph__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
