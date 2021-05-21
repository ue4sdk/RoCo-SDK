// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AsyncTraceUtil_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// bool                           bBlockingHit                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 end                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAsyncTraceUtilBPLibrary::OnMultiAsyncTraceResult__DelegateSignature(bool bBlockingHit, TArray<struct FHitResult> OutHits, const struct FVector& start, const struct FVector& end)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature");

	struct
	{
		bool                           bBlockingHit;
		TArray<struct FHitResult>      OutHits;
		struct FVector                 start;
		struct FVector                 end;
	} params;

	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	UObject::ProcessEvent(fn, &params);
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiSphereSweepByChannelAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 end                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          SphereRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTraceComplete                (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIgnoreSelf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DrawTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAsyncTraceUtilBPLibrary::MultiSphereSweepByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<ECollisionChannel> TraceChannel, float SphereRadius, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiSphereSweepByChannelAsync");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 start;
		struct FVector                 end;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		float                          SphereRadius;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace>   DrawDebugType;
		struct FScriptDelegate         OnTraceComplete;
		bool                           bIgnoreSelf;
		struct FLatentActionInfo       LatentInfo;
		struct FLinearColor            TraceColor;
		struct FLinearColor            TraceHitColor;
		float                          DrawTime;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.start = start;
	params.end = end;
	params.TraceChannel = TraceChannel;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.OnTraceComplete = OnTraceComplete;
	params.bIgnoreSelf = bIgnoreSelf;
	params.LatentInfo = LatentInfo;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Starts                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FVector>         Ends                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bIgnoreSelf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DrawTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UAsyncTraceUtilBPLibrary::MultipleLineTraceAsync(class UObject* WorldContextObject, TArray<struct FVector> Starts, TArray<struct FVector> Ends, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FVector>         Starts;
		TArray<struct FVector>         Ends;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace>   DrawDebugType;
		TArray<struct FHitResult>      OutHits;
		bool                           bIgnoreSelf;
		struct FLatentActionInfo       LatentInfo;
		struct FLinearColor            TraceColor;
		struct FLinearColor            TraceHitColor;
		float                          DrawTime;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Starts = Starts;
	params.Ends = Ends;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.LatentInfo = LatentInfo;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 end                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTraceComplete                (CPF_Parm, CPF_ZeroConstructor, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIgnoreSelf                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          DrawTime                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAsyncTraceUtilBPLibrary::MultiLineTraceByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 start;
		struct FVector                 end;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool                           bTraceComplex;
		TArray<class AActor*>          ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace>   DrawDebugType;
		struct FScriptDelegate         OnTraceComplete;
		bool                           bIgnoreSelf;
		struct FLatentActionInfo       LatentInfo;
		struct FLinearColor            TraceColor;
		struct FLinearColor            TraceHitColor;
		float                          DrawTime;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.start = start;
	params.end = end;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.OnTraceComplete = OnTraceComplete;
	params.bIgnoreSelf = bIgnoreSelf;
	params.LatentInfo = LatentInfo;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
