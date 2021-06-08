// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AllyMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AllyMarker.AllyMarker_C.View_SetSelfPingIcon
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EPingType                      bpp__PingType__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EPingMessage                   bpp__PingMessage__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetSelfPingIcon(EPingType bpp__PingType__pf, EPingMessage bpp__PingMessage__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetSelfPingIcon");

	struct
	{
		EPingType                      bpp__PingType__pf;
		EPingMessage                   bpp__PingMessage__pf;
	} params;

	params.bpp__PingType__pf = bpp__PingType__pf;
	params.bpp__PingMessage__pf = bpp__PingMessage__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_SetRevivePercent
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__PercentValue__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetRevivePercent(float bpp__PercentValue__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetRevivePercent");

	struct
	{
		float                          bpp__PercentValue__pf;
	} params;

	params.bpp__PercentValue__pf = bpp__PercentValue__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_SetNameText
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FText                   bpp__NameText__pf__const       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetNameText(const struct FText& bpp__NameText__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetNameText");

	struct
	{
		struct FText                   bpp__NameText__pf__const;
	} params;

	params.bpp__NameText__pf__const = bpp__NameText__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_SetMode
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// EAllyMarkerState               bpp__AllyMarkerState__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__HasObjective__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bpp__HasSelfPing__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetMode(EAllyMarkerState bpp__AllyMarkerState__pf, bool bpp__HasObjective__pf, bool bpp__HasSelfPing__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetMode");

	struct
	{
		EAllyMarkerState               bpp__AllyMarkerState__pf;
		bool                           bpp__HasObjective__pf;
		bool                           bpp__HasSelfPing__pf;
	} params;

	params.bpp__AllyMarkerState__pf = bpp__AllyMarkerState__pf;
	params.bpp__HasObjective__pf = bpp__HasObjective__pf;
	params.bpp__HasSelfPing__pf = bpp__HasSelfPing__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_SetJob
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class UKSJobItem*              bpp__Job__pf                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetJob(class UKSJobItem* bpp__Job__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetJob");

	struct
	{
		class UKSJobItem*              bpp__Job__pf;
	} params;

	params.bpp__Job__pf = bpp__Job__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_SetHealthPercent
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          bpp__PercentValue__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_SetHealthPercent(float bpp__PercentValue__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_SetHealthPercent");

	struct
	{
		float                          bpp__PercentValue__pf;
	} params;

	params.bpp__PercentValue__pf = bpp__PercentValue__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.View_AcknowledgeSelfPing
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class AKSPlayerState*          bpp__AcknowledingPlayer__pf    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::View_AcknowledgeSelfPing(class AKSPlayerState* bpp__AcknowledingPlayer__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.View_AcknowledgeSelfPing");

	struct
	{
		class AKSPlayerState*          bpp__AcknowledingPlayer__pf;
	} params;

	params.bpp__AcknowledingPlayer__pf = bpp__AcknowledingPlayer__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.SetMarkerFromGameState
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              bpp__ObjectiveMarker__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::SetMarkerFromGameState(class UTexture2D* bpp__ObjectiveMarker__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.SetMarkerFromGameState");

	struct
	{
		class UTexture2D*              bpp__ObjectiveMarker__pf;
	} params;

	params.bpp__ObjectiveMarker__pf = bpp__ObjectiveMarker__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.Refresh Screen Region Behavior
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAllyMarker_C::Refresh_Screen_Region_Behavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.Refresh Screen Region Behavior");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__IsDesignTime__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::PreConstruct(bool bpp__IsDesignTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.PreConstruct");

	struct
	{
		bool                           bpp__IsDesignTime__pf;
	} params;

	params.bpp__IsDesignTime__pf = bpp__IsDesignTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.HandleMapIconWidgetReady
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAllyMarker_C::HandleMapIconWidgetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.HandleMapIconWidgetReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.HandleGameObjectiveStateChanged
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UKSObjective> bpp__GameObjective__pf         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::HandleGameObjectiveStateChanged(const TScriptInterface<class UKSObjective>& bpp__GameObjective__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.HandleGameObjectiveStateChanged");

	struct
	{
		TScriptInterface<class UKSObjective> bpp__GameObjective__pf;
	} params;

	params.bpp__GameObjective__pf = bpp__GameObjective__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.HandleCrackStateActiviationChanged
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__Active__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::HandleCrackStateActiviationChanged(bool bpp__Active__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.HandleCrackStateActiviationChanged");

	struct
	{
		bool                           bpp__Active__pf;
	} params;

	params.bpp__Active__pf = bpp__Active__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.ExecuteUbergraph_AllyMarker_1
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::ExecuteUbergraph_AllyMarker_1(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.ExecuteUbergraph_AllyMarker_1");

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UAllyMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.ChangeOwnerContentVisibility
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__bVisible__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::ChangeOwnerContentVisibility(bool bpp__bVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.ChangeOwnerContentVisibility");

	struct
	{
		bool                           bpp__bVisible__pf;
	} params;

	params.bpp__bVisible__pf = bpp__bVisible__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function AllyMarker.AllyMarker_C.ArrowPosition
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__Angle__pf                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               bpp__ReturnxValue__pfT         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::ArrowPosition(float bpp__Angle__pf, struct FVector2D* bpp__ReturnxValue__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyMarker.AllyMarker_C.ArrowPosition");

	struct
	{
		float                          bpp__Angle__pf;
		struct FVector2D               bpp__ReturnxValue__pfT;
	} params;

	params.bpp__Angle__pf = bpp__Angle__pf;

	UObject::ProcessEvent(fn, &params);

	if (bpp__ReturnxValue__pfT != nullptr)
		*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
}


// DelegateFunction AllyMarker.AllyMarker_C.OnMapIconWidgetReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate)

void UAllyMarker_C::OnMapIconWidgetReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMarker.AllyMarker_C.OnMapIconWidgetReady__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMarker.AllyMarker_C.OnGameObjectiveChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TScriptInterface<class UKSObjective> bpp__GameObjective__pf         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::OnGameObjectiveChanged__DelegateSignature(const TScriptInterface<class UKSObjective>& bpp__GameObjective__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMarker.AllyMarker_C.OnGameObjectiveChanged__DelegateSignature");

	struct
	{
		TScriptInterface<class UKSObjective> bpp__GameObjective__pf;
	} params;

	params.bpp__GameObjective__pf = bpp__GameObjective__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AllyMarker.AllyMarker_C.OnGameModeModActivationChange__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bpp__IsActive__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAllyMarker_C::OnGameModeModActivationChange__DelegateSignature(bool bpp__IsActive__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AllyMarker.AllyMarker_C.OnGameModeModActivationChange__DelegateSignature");

	struct
	{
		bool                           bpp__IsActive__pf;
	} params;

	params.bpp__IsActive__pf = bpp__IsActive__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
