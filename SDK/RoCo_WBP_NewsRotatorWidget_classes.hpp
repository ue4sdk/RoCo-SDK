#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_NewsRotatorWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C
// 0x0080 (0x0578 - 0x04F8)
class UWBP_NewsRotatorWidget_C : public UKSNewsRotatorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            Anim_ChangeNewsImage;                                     // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStandardButtonNoArt_C*                      ActionButton;                                             // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                     LeftNavPrompt;                                            // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSAsyncImage*                               NewsImage;                                                // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UKSAsyncImage*                               NewsImageAnimateOut;                                      // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                     RightNavPrompt;                                           // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UHorizontalBox*                              RotatorButtons;                                           // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_Header3_C*                              WBP_Header3_C_1;                                          // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UWBP_NewsRotatorButton_C*                    WBP_NewsRotatorButton;                                    // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	float                                              TickTimer;                                                // 0x0548(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                CurrentPanelIndex;                                        // 0x054C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsAnimating;                                              // 0x0550(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	TArray<class UKSNewsRotatorData*>                  NewsRotatorObjects;                                       // 0x0558(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    NewsVisibilityUpdated;                                    // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C");
		return ptr;
	}


	bool NavigateConfirm();
	void UpdatePrompts(unsigned char InputState, bool HasFocus);
	void GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets);
	void ShowPanel(int NewPanelIndex);
	void UpdateRotatorButtons();
	void ShowPrevPanel();
	void ShowNextPanel();
	void PopulateData();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnJsonChanged();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnItemClicked(int ButtonIndex);
	void OnActionClicked(class UWidget* Widget);
	void OnActionButtonHovered(class UPUMG_Widget* Widget, bool bHovered);
	void OnInputModeChange(unsigned char CurrentState);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeWidgetNavigation();
	void BindInputActions();
	void UnbindInputActions();
	void HandleGamepadHovered(class UPUMG_Widget* Widget, bool bHovered);
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_NewsRotatorWidget(int EntryPoint);
	void NewsVisibilityUpdated__DelegateSignature(bool Visibility);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
