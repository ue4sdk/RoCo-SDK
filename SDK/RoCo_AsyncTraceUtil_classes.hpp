#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AsyncTraceUtil_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AsyncTraceUtil.AsyncTraceUtilBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAsyncTraceUtilBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AsyncTraceUtil.AsyncTraceUtilBPLibrary"));
		return ptr;
	}


	void OnMultiAsyncTraceResult__DelegateSignature(bool bBlockingHit, TArray<struct FHitResult> OutHits, const struct FVector& start, const struct FVector& end);
	static void MultiSphereSweepByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<ECollisionChannel> TraceChannel, float SphereRadius, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool MultipleLineTraceAsync(class UObject* WorldContextObject, TArray<struct FVector> Starts, TArray<struct FVector> Ends, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, TArray<struct FHitResult>* OutHits);
	static void MultiLineTraceByChannelAsync(class UObject* WorldContextObject, const struct FVector& start, const struct FVector& end, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FScriptDelegate& OnTraceComplete, bool bIgnoreSelf, const struct FLatentActionInfo& LatentInfo, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
