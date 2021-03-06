#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EyeTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	static void SetEyeTrackedPlayer(class APlayerController* PlayerController);
	static bool IsStereoGazeDataAvailable();
	static bool IsEyeTrackerConnected();
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	static bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
