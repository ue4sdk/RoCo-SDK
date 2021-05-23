// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LaunchCinematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_LaunchCinematic_C::IsActiveView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::StopVideoPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::StopAudioPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::HandleOnClicked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::PlayAnimationSmoothly(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly"));

	struct
	{
		class UWidgetAnimation*        InAnimation;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::FinishPlayback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWBP_LaunchCinematic_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::SetPromptKeyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FKey>            SkipPromptKeys                 (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::GetPromptKeys(TArray<struct FKey>* SkipPromptKeys)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys"));

	struct
	{
		TArray<struct FKey>            SkipPromptKeys;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SkipPromptKeys != nullptr)
		*SkipPromptKeys = params.SkipPromptKeys;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKeyEvent               InInput                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsSkipKey                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LaunchCinematic_C::IsSkipKey(const struct FKeyEvent& InInput, bool* IsSkipKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey"));

	struct
	{
		struct FKeyEvent               InInput;
		bool                           IsSkipKey;
	} params;

	params.InInput = InInput;

	UObject::ProcessEvent(fn, &params);

	if (IsSkipKey != nullptr)
		*IsSkipKey = params.IsSkipKey;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShouldShow                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LaunchCinematic_C::TogglePromptDisplay(bool ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay"));

	struct
	{
		bool                           ShouldShow;
	} params;

	params.ShouldShow = ShouldShow;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::WhenCinematicDone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UPlatformMediaSource*    PlatformMediaSource            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkAudioEvent*           PlayEvent                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkAudioEvent*           StopEvent                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback"));

	struct
	{
		class UPlatformMediaSource*    PlatformMediaSource;
		class UAkAudioEvent*           PlayEvent;
		class UAkAudioEvent*           StopEvent;
	} params;

	params.PlatformMediaSource = PlatformMediaSource;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bCanSkipEntry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_LaunchCinematic_C::OnShouldShowPromptChanged(bool bCanSkipEntry)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged"));

	struct
	{
		bool                           bCanSkipEntry;
	} params;

	params.bCanSkipEntry = bCanSkipEntry;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> InputState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged"));

	struct
	{
		TEnumAsByte<EPGAME_INPUT_STATE> InputState;
	} params;

	params.InputState = InputState;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::FadeTextureIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::FadeTextureOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::HandleFadeOutAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::OnBeginLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::OnEndLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_LaunchCinematic_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::HandleOnMediaOpened(const struct FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened"));

	struct
	{
		struct FString                 OpenedUrl;
	} params;

	params.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 FailedUrl                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::HandleOnMediaOpenFailed(const struct FString& FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed"));

	struct
	{
		struct FString                 FailedUrl;
	} params;

	params.FailedUrl = FailedUrl;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_LaunchCinematic_C::ExecuteUbergraph_WBP_LaunchCinematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic"));

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
