#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LaunchCinematic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C
// 0x0078 (0x05B0 - 0x0538)
class UWBP_LaunchCinematic_C : public UKSMediaPlayerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            FadeOutThrobber;                                          // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInThrobber;                                           // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOutMediaTexture;                                      // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInMediaTexture;                                       // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      CinematicMediaTexture;                                    // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UGamepadPromptBasic_C*                       GamepadPromptBasic;                                       // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UButton*                                     HitTarget;                                                // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ThrobberShield_C*                       WBP_ThrobberShield;                                       // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FText                                       Msg_SkipPrompt;                                           // 0x0588(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               AudioStartEvent;                                          // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAkAudioEvent*                               AudioStopEvent;                                           // 0x05A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C"));
		return ptr;
	}


	bool IsActiveView();
	void StopVideoPlayback();
	void StopAudioPlayback();
	void HandleOnClicked();
	void PlayAnimationSmoothly(class UWidgetAnimation* InAnimation);
	void FinishPlayback();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetPromptKeyDisplay();
	void GetPromptKeys(TArray<struct FKey>* SkipPromptKeys);
	void IsSkipKey(const struct FKeyEvent& InInput, bool* IsSkipKey);
	void TogglePromptDisplay(bool ShouldShow);
	void WhenCinematicDone();
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource, class UAkAudioEvent* PlayEvent, class UAkAudioEvent* StopEvent);
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void InitializeWidgetNavigation();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE> InputState);
	void OnShown();
	void FadeTextureIn();
	void FadeTextureOut();
	void HandleFadeOutAnimFinished();
	void OnBeginLoadingPlaylist();
	void OnEndLoadingPlaylist();
	void OnHide();
	void HandleOnMediaOpened(const struct FString& OpenedUrl);
	void HandleOnMediaOpenFailed(const struct FString& FailedUrl);
	void ExecuteUbergraph_WBP_LaunchCinematic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
