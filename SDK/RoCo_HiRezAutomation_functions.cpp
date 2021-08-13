// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_HiRezAutomation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HiRezAutomation.PerfSpline.InitPerfMovementAndCapture
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APerfSpline::InitPerfMovementAndCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiRezAutomation.PerfSpline.InitPerfMovementAndCapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HiRezAutomation.PerfSpline.CaptureStats
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void APerfSpline::CaptureStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function HiRezAutomation.PerfSpline.CaptureStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
