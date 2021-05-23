// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Minimap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Minimap.Minimap_C.UpdateFlashBang
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMinimap_C::UpdateFlashBang()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.UpdateFlashBang"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.TickVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__DeltaTime__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::TickVisibility(float bpp__DeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.TickVisibility"));

	struct
	{
		float                          bpp__DeltaTime__pf;
	} params;

	params.bpp__DeltaTime__pf = bpp__DeltaTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// struct FGeometry               bpp__MyGeometry__pf            (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// float                          bpp__InDeltaTime__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.Tick"));

	struct
	{
		struct FGeometry               bpp__MyGeometry__pf;
		float                          bpp__InDeltaTime__pf;
	} params;

	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.SetScrambleTexture
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMinimap_C::SetScrambleTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.SetScrambleTexture"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.SetRoyaleMode
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bpp__IsRoyaleMode__pf          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::SetRoyaleMode(bool bpp__IsRoyaleMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.SetRoyaleMode"));

	struct
	{
		bool                           bpp__IsRoyaleMode__pf;
	} params;

	params.bpp__IsRoyaleMode__pf = bpp__IsRoyaleMode__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.OnScrambleStateChanged
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bpp__Scrambled__pf             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::OnScrambleStateChanged(bool bpp__Scrambled__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.OnScrambleStateChanged"));

	struct
	{
		bool                           bpp__Scrambled__pf;
	} params;

	params.bpp__Scrambled__pf = bpp__Scrambled__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.OnRoyaleRoundStart
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FRoundInitState         bpp__RoundInitState__pf__const (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::OnRoyaleRoundStart(const struct FRoundInitState& bpp__RoundInitState__pf__const)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.OnRoyaleRoundStart"));

	struct
	{
		struct FRoundInitState         bpp__RoundInitState__pf__const;
	} params;

	params.bpp__RoundInitState__pf__const = bpp__RoundInitState__pf__const;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 bpp__Loaded__pf                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E(class UObject* bpp__Loaded__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E"));

	struct
	{
		class UObject*                 bpp__Loaded__pf;
	} params;

	params.bpp__Loaded__pf = bpp__Loaded__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UMinimap_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.OnInitialized"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.Handle Royale Zone Wait
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          bpp__TimeUntilShrink__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::Handle_Royale_Zone_Wait(float bpp__TimeUntilShrink__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.Handle Royale Zone Wait"));

	struct
	{
		float                          bpp__TimeUntilShrink__pf;
	} params;

	params.bpp__TimeUntilShrink__pf = bpp__TimeUntilShrink__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.GetTransformInfo
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          bpp__NormalizedX__pf           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__NormalizedY__pf           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Rotation__pf              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Scale__pf                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::GetTransformInfo(float* bpp__NormalizedX__pf, float* bpp__NormalizedY__pf, float* bpp__Rotation__pf, float* bpp__Scale__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.GetTransformInfo"));

	struct
	{
		float                          bpp__NormalizedX__pf;
		float                          bpp__NormalizedY__pf;
		float                          bpp__Rotation__pf;
		float                          bpp__Scale__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__NormalizedX__pf != nullptr)
		*bpp__NormalizedX__pf = params.bpp__NormalizedX__pf;
	if (bpp__NormalizedY__pf != nullptr)
		*bpp__NormalizedY__pf = params.bpp__NormalizedY__pf;
	if (bpp__Rotation__pf != nullptr)
		*bpp__Rotation__pf = params.bpp__Rotation__pf;
	if (bpp__Scale__pf != nullptr)
		*bpp__Scale__pf = params.bpp__Scale__pf;
}


// Function Minimap.Minimap_C.GetMapTexture
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMinimap_C::GetMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.GetMapTexture"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.FindMinimapRenderer
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMinimap_C::FindMinimapRenderer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.FindMinimapRenderer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.ExecuteUbergraph_Minimap_2
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::ExecuteUbergraph_Minimap_2(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.ExecuteUbergraph_Minimap_2"));

	struct
	{
		int                            bpp__EntryPoint__pf;
	} params;

	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.EvaluateRelativeHeight
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__SubjectxLocation__pfT     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EMiniMapRelativeHeight         bpp__RelativeHeight__pf        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::EvaluateRelativeHeight(const struct FVector& bpp__SubjectxLocation__pfT, EMiniMapRelativeHeight* bpp__RelativeHeight__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.EvaluateRelativeHeight"));

	struct
	{
		struct FVector                 bpp__SubjectxLocation__pfT;
		EMiniMapRelativeHeight         bpp__RelativeHeight__pf;
	} params;

	params.bpp__SubjectxLocation__pfT = bpp__SubjectxLocation__pfT;

	UObject::ProcessEvent(fn, &params);

	if (bpp__RelativeHeight__pf != nullptr)
		*bpp__RelativeHeight__pf = params.bpp__RelativeHeight__pf;
}


// Function Minimap.Minimap_C.EvaluateIconPosition
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 bpp__SubjectLocation__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UUserWidget*             bpp__Icon__pf                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::EvaluateIconPosition(const struct FVector& bpp__SubjectLocation__pf, class UUserWidget* bpp__Icon__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.EvaluateIconPosition"));

	struct
	{
		struct FVector                 bpp__SubjectLocation__pf;
		class UUserWidget*             bpp__Icon__pf;
	} params;

	params.bpp__SubjectLocation__pf = bpp__SubjectLocation__pf;
	params.bpp__Icon__pf = bpp__Icon__pf;

	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.CreateNewIconWidget
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  bpp__WidgetClass__pf           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            bpp__UniqueId__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AKSPlayerState*          bpp__CreatingPlayer__pf        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EDisplayType                   bpp__ParentMapDisplayType__pf  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  bpp__AssociatedActor__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UObject*                 bpp__AssociatedObject__pf      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 bpp__DefaultLocation__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          bpp__Lifespan__pf              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UKSMapIconWidgetBase*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UKSMapIconWidgetBase* UMinimap_C::CreateNewIconWidget(class UClass* bpp__WidgetClass__pf, int bpp__UniqueId__pf, class AKSPlayerState* bpp__CreatingPlayer__pf, EDisplayType bpp__ParentMapDisplayType__pf, class AActor* bpp__AssociatedActor__pf, class UObject* bpp__AssociatedObject__pf, const struct FVector& bpp__DefaultLocation__pf, float bpp__Lifespan__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.CreateNewIconWidget"));

	struct
	{
		class UClass*                  bpp__WidgetClass__pf;
		int                            bpp__UniqueId__pf;
		class AKSPlayerState*          bpp__CreatingPlayer__pf;
		EDisplayType                   bpp__ParentMapDisplayType__pf;
		class AActor*                  bpp__AssociatedActor__pf;
		class UObject*                 bpp__AssociatedObject__pf;
		struct FVector                 bpp__DefaultLocation__pf;
		float                          bpp__Lifespan__pf;
		class UKSMapIconWidgetBase*    ReturnValue;
	} params;

	params.bpp__WidgetClass__pf = bpp__WidgetClass__pf;
	params.bpp__UniqueId__pf = bpp__UniqueId__pf;
	params.bpp__CreatingPlayer__pf = bpp__CreatingPlayer__pf;
	params.bpp__ParentMapDisplayType__pf = bpp__ParentMapDisplayType__pf;
	params.bpp__AssociatedActor__pf = bpp__AssociatedActor__pf;
	params.bpp__AssociatedObject__pf = bpp__AssociatedObject__pf;
	params.bpp__DefaultLocation__pf = bpp__DefaultLocation__pf;
	params.bpp__Lifespan__pf = bpp__Lifespan__pf;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Minimap.Minimap_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public)

void UMinimap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minimap.Minimap_C.CanShowMinimap
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bpp__CanShow__pf               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::CanShowMinimap(bool* bpp__CanShow__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Minimap.Minimap_C.CanShowMinimap"));

	struct
	{
		bool                           bpp__CanShow__pf;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (bpp__CanShow__pf != nullptr)
		*bpp__CanShow__pf = params.bpp__CanShow__pf;
}


// DelegateFunction Minimap.Minimap_C.OnRoyaleZoneWait__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          bpp__TimeUntilShrink__pf       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::OnRoyaleZoneWait__DelegateSignature(float bpp__TimeUntilShrink__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Minimap.Minimap_C.OnRoyaleZoneWait__DelegateSignature"));

	struct
	{
		float                          bpp__TimeUntilShrink__pf;
	} params;

	params.bpp__TimeUntilShrink__pf = bpp__TimeUntilShrink__pf;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction Minimap.Minimap_C.OnRoundStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FRoundInitState         bpp__RoundInitState__pf        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMinimap_C::OnRoundStart__DelegateSignature(const struct FRoundInitState& bpp__RoundInitState__pf)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Minimap.Minimap_C.OnRoundStart__DelegateSignature"));

	struct
	{
		struct FRoundInitState         bpp__RoundInitState__pf;
	} params;

	params.bpp__RoundInitState__pf = bpp__RoundInitState__pf;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
